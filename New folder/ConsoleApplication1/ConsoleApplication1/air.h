#pragma once 
#include <iostream>
using namespace std;
template <typename T>
class aeroflot
{
 char destination[10]; 
 char dy[10];
 int day;
 char time;
 static const int number=6984;
 char type[8];

public:  
	int get_number();
 aeroflot(void);  
 aeroflot( int a, int b);
 ~aeroflot(void);
 void print();

 void set_dest()
 {
	 cout<<"¬ведите пункт назначени€: "<<endl;
	 cin>>destination;
 };

 void set_dy()
 {
	 cout<<"¬ведите день вылета: "<<endl;
	 cin>>dy;
 };

 void* get_dy()
 {
	 return (&dy);
 }

 void* get_dest()
	 {
		 return(&destination);
	};
 void setflight();
 void getflight();  

 
};  
template <typename T>

aeroflot<T>::~aeroflot(void)
{
	<<"ƒеструктор"<<endl;
}; 