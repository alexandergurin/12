#include "stdafx.h"
#include "matrix.h"
#include <iostream>
#include <locale>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
 setlocale(LC_ALL,".1251");
 cout << "������� a\n";
 Matrix *a=new Matrix(4,5);
 cout << "������� b\n";
 Matrix *b=new Matrix(*a);
 cout << "������� a\n";
 a->printall();
 cout << "��������� ��������\n";
 a->setvsize(6);
 a->sethsize(6);
 cout << "������� a\n";
 a->printall();
 cout << "��������� ��������\n";
 a->setvsize(3);
 a->sethsize(3);
 cout << "������� a\n";
 a->printall();
 cout << "������� b\n";
 b->printall();
 return 0;
}
