// final_version.cpp: ���������� ����� ����� ��� ����������.
//

#include "stdafx.h"
#include "lb13.h"
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_LOADSTRING 100

// ���������� ����������:
HINSTANCE hInst;
HWND mass_hWnd[5];
HWND begin_hWnd;
wchar_t temp_str[32];
int counter_for_hWnd = 0;
int counter = 0;
int Width = 500;
int Height = 500;

WCHAR szTitle[MAX_LOADSTRING];                  // ����� ������ ���������
WCHAR szWindowClass[MAX_LOADSTRING];            // ��� ������ �������� ����

												// ��������� ���������� �������, ���������� � ���� ������ ����:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR    lpCmdLine,
	_In_ int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

	// TODO: ���������� ��� �����.
	// ������������� ���������� �����

	LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
	LoadStringW(hInstance, IDC_LB13, szWindowClass, MAX_LOADSTRING);
	MyRegisterClass(hInstance);

	// ��������� ������������� ����������:
	if (!InitInstance(hInstance, nCmdShow))
	{
		return FALSE;
	}

	HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_LB13));

	MSG msg;

	// ���� ��������� ���������:
	while (GetMessage(&msg, nullptr, 0, 0))
	{
		if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}

	return (int)msg.wParam;
}



//
//  �������: MyRegisterClass()
//
//  ����������: ������������ ����� ����.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
	WNDCLASSEXW wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);

	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc = WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = hInstance;
	wcex.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_LB13));
	wcex.hCursor = LoadCursor(nullptr, IDC_ARROW);
	wcex.hbrBackground= CreateSolidBrush(RGB(0,255,255));
	wcex.lpszMenuName = MAKEINTRESOURCEW(IDC_LB13);
	wcex.lpszClassName = szWindowClass;
	wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

	return RegisterClassExW(&wcex);
}

//
//   �������: InitInstance(HINSTANCE, int)
//
//   ����������: ��������� ��������� ���������� � ������� ������� ����.
//
//   �����������:
//
//        � ������ ������� ���������� ���������� ����������� � ���������� ����������, � �����
//        ��������� � ��������� �� ����� ������� ���� ���������.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
	hInst = hInstance; // ��������� ���������� ���������� � ���������� ����������

	HWND hWnd = CreateWindowW(szWindowClass, L"Gurin_Alex", WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);
	begin_hWnd = hWnd;
	if (!hWnd)
	{
		return FALSE;
	}

	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);

	return TRUE;
}

//
//  �������: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  ����������:  ������������ ��������� � ������� ����.
//
//  WM_COMMAND � ���������� ���� ����������
//  WM_PAINT � ���������� ������� ����
//  WM_DESTROY � ��������� ��������� � ������ � ���������
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	int wPar;
	switch (message)
	{

	case WM_COMMAND:
	{
		int wmId = LOWORD(wParam);
		// ��������� ����� � ����:
		switch (wmId)
		{
		case IDM_ABOUT:
			DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
			break;
		case IDM_EXIT:
			DestroyWindow(hWnd);
			break;
		default:
			return DefWindowProc(hWnd, message, wParam, lParam);
		}
	}
	break;

	case WM_PAINT:
	{
		PAINTSTRUCT ps;
		HDC hdc = BeginPaint(hWnd, &ps);
		// TODO: �������� ���� ����� ��� ����������, ������������ HDC...
		EndPaint(hWnd, &ps);
	}
	break;
	
	case WM_LBUTTONDOWN:
		if (counter_for_hWnd < 5) {
			_itow_s(counter_for_hWnd+1, temp_str, 10);

			mass_hWnd[counter_for_hWnd] = CreateWindow(szWindowClass, temp_str, WS_OVERLAPPEDWINDOW,
				CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInst, nullptr);
			ShowWindow(mass_hWnd[counter_for_hWnd], 1);
			counter_for_hWnd++;
		}
		else
		{
			MessageBox(hWnd, L"Too many windows", MB_OK, MB_ICONSTOP);
		}
		break;

	case WM_CHAR:
		if (counter_for_hWnd > 0) {
			DestroyWindow(mass_hWnd[counter_for_hWnd-1]);
			counter_for_hWnd--;
		}
		else
		{
			MessageBox(hWnd, L"Too few windows", MB_OK, MB_ICONSTOP);
			
		}

		break;
	case WM_CLOSE:
		if (hWnd == begin_hWnd)
		{
			if (IDOK == MessageBox(hWnd, L"Close App", L"Close App", MB_OKCANCEL))
			{
				SendMessage(hWnd, WM_DESTROY, NULL, NULL);
			}
		}
		else
			DestroyWindow(hWnd);
		counter_for_hWnd--;
		break;
	case WM_MOUSEMOVE:
		wPar = LOWORD(wParam);
		switch (wPar)
		{
			case MK_RBUTTON:
				if (counter == 1)
				{
					
					MoveWindow(hWnd, 0, 0, Width += 1, Height +=1, TRUE);
					counter = 0;
				}
				else
				{
					counter = 1;
				}
				break;
			default:
				break;
		}
		break;
	case WM_DESTROY:
		if(hWnd==begin_hWnd)
		PostQuitMessage(0);
		else

		break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}

// ���������� ��������� ��� ���� "� ���������".
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
	UNREFERENCED_PARAMETER(lParam);
	switch (message)
	{
	case WM_INITDIALOG:
		return (INT_PTR)TRUE;

	case WM_COMMAND:
		if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
		{
			EndDialog(hDlg, LOWORD(wParam));
			return (INT_PTR)TRUE;
		}
		break;
	}
	return (INT_PTR)FALSE;
}
