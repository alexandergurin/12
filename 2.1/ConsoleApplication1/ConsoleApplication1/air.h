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
	 cout<<"Введите пункт назначения: "<<endl;
	 cin>>destination;
 };
 void set_dy()
 {
	 cout<<"Введите день вылета: "<<endl;
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

 ~aeroflot(void){cout<<"Деструктор"<<endl;}; 
};  
class new_air
{string tm,pt;
int dn;
new_air ()
{
	cout<<"Конструктор рейса"<<endl;
};
public :
	new_air (int i):tm(""),pt("moscow"),dn(i)
	{
		new_air();
		cout<<"Явный конструктор"<<endl;};
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
  reis() // конструктор класса
  {
    nomer = reis::next_nomer++;
	cout<<"Номер рейса: "<<nomer<<endl;
  }
};
int reis::next_nomer=0;
