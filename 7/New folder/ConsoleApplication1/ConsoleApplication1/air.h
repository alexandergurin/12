#pragma once 
#include <iostream>
using namespace std;

class aeroflot
{
 char destination[10]; 
 char dy[10];
 int day;
 char time;
 static const int number=6984;
 char type[8];

public:  
	aeroflot (  const aeroflot &A )
		{
	
			day=A.day;
	};
	int get_number();

 aeroflot(void);  
 aeroflot( int a, int b);
 void print();
 void set_dest()
 {
	 cout<<"������� ����� ����������: "<<endl;
	 cin>>destination;
 };
 void set_dy()
 {
	 cout<<"������� ���� ������: "<<endl;
	 cin>>dy;
 };
 void* get_dy()
 {return (&dy);
 };
 void* get_dest()
	 {
		 return(&destination);
	};
 void setflight();
 void getflight();  

 ~aeroflot(void){cout<<"����������"<<endl;}; 
};  
class new_air
{string tm,pt;
int dn;
new_air ()
{
	cout<<"����������� �����"<<endl;
};
public :
	new_air (int i):tm(""),pt("moscow"),dn(i)
	{
		new_air();
		cout<<"����� �����������"<<endl;};
};
class reis
{
int nomer;
static int next_nomer;
public:
  static int next_nom()
  {
    next_nomer++;
     return next_nomer;
  };
  reis() // ����������� ������
  {
    nomer = reis::next_nomer++;
	cout<<"����� �����: "<<nomer<<endl;
  }
};
int reis::next_nomer=0;
