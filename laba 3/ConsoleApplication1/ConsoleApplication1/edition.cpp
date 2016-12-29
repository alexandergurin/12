#include "stdafx.h"
#include "edition.h" 
#include <iostream> 
using namespace std;  
edition::edition(void)
{
cout<<"Вызов конструктора печатного издания"<<endl;
}
void  edition::set_edition()
 {
	 cout<<"Введите название печатного издания"<<endl;
	 cin>>edition_name;
 };
void edition::get_edition()
{  
	cout<<"Название печатного издания: "<<this->edition_name<<endl; 
}  
edition::~ edition(void)
{
	cout<<"###### Деструктор печатного издания #######"<<endl;
};