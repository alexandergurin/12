#include <iostream> /*������� ����� Airline: ����� ����������, ����� �����,
 ��� ��������, ����� ������, ��� ������. 
������������ ��������� ������ � ���������� ����� (�������� ������������).
������� ������ ��������. �������:
a)  ������ ������ ��� ��������� ������ ����������;
 b)  ������ ������ ��� ��������� ��� ������; */
#include <cstdlib> 
#include <string>

#include "air.h"
#include <stdio.h>
#include <locale>
#include <cstring>
using namespace std;
template <typename T>
aeroflot<T>::aeroflot(void) //����������� �����
{ 
	cout<<" ~~~~~~~~~~ ����������� ����� ~~~~~~~~~~~"<<endl;
} ;
template <typename T>
void <T>::setflight()
{
	
	
	/*cout<<"����� �����: "<<endl;
	cin>>number;*/
	cout<<"��� ��������:"<<endl;
	cin>>type;
	cout<<"����� ������:"<<endl;
	cin>>time;
} ;
template <typename T>
void <T>::getflight()
{  
	cout<<"����� ����������: "<<this->destination<<endl;
	cout<<"����� �����: "<<this->number<<endl;
	cout<<"��� ��������:"<<this->type<<endl;
	cout<<"���� ������:"<<this->dy<<endl;
	cout<<"����� ������:"<<this->time<<endl;
} ;
 
int main()
{
	setlocale(LC_ALL,"rus");
	char a[10];
	char b[10];
}