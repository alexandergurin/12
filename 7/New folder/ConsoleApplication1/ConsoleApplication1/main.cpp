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

aeroflot::aeroflot(void) //����������� �����
{ 
	cout<<" ~~~~~~~~~~ ����������� ����� ~~~~~~~~~~~"<<endl;
} ;
void aeroflot::setflight()
{
	
	
	/*cout<<"����� �����: "<<endl;
	cin>>number;*/
	cout<<"��� ��������:"<<endl;
	cin>>type;
	cout<<"����� ������:"<<endl;
	cin>>time;
} ;

void aeroflot::getflight()
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
	cout<<"������ ������������� ����������� ���������� � �-���"<<endl;
	reis *v=new reis[6];

	new_air boing=4;
	cout<<"~~~~~~~~~~~~~~~~����� �� ������ ����������~~~~~~~~~~~~~~"<<endl;
cout<<"������� ����� ���������� ������� ����� ������"<<endl;
gets(a); 
cout<<"~~~~~~~~~~~~~~~~����� �� ��� ������~~~~~~~~~~~~~~"<<endl;
cout<<"������� ���� ������ ������� ����� ������"<<endl;
gets(b); 
	aeroflot *x=new aeroflot[4]; 
for (int i=1;i<5;i++)
{
	cout<<"���� �:"<<i<<endl;
	x[i].set_dest();
	x[i].set_dy();
	x[i].setflight();
};
for (int j=1;j<5;j++)
{
cout<<"���� �:"<<j<<endl;
	x[j].getflight();
};

cout<<"~~~~~~~~~~~~~~~~~~ ����(�) ��������� �� ������ ���������� ~~~~~~~~~~~~~~~~~~"<<endl<<endl;
for (int t=1;t<5;t++)
{
	int k=strcmp(a,(char*)x[t].get_dest());
	if( k==0)
	{x[t].getflight();
	cout<<endl;};

};
cout<<"~~~~~~~~~~~~~~~~~~ ����(�) ��������� �� ��� ������ ~~~~~~~~~~~~~~~~~~"<<endl<<endl;
for (int t=1;t<5;t++)
{
	int o=strcmp(b,(char*)x[t].get_dy());
	if( o==0)
	{x[t].getflight(); 
	cout<<endl;};
};

};