#include "stdafx.h"
#include "person.h" 
#include <iostream> 
using namespace std;  
person::person(void) 
{ 
	cout<<" #######Конструктор персоны #######"<<endl;
} 
void person::setname()
{cout<<"Введите имя автора"<<endl;
	 cin>>name;

}  
void person::getname()
{  
	cout<<"имя персоны: "<<this->name<<endl; 
}  
person::~person(void) 
{ 
	cout<<"#######Деструктор персоны#######"<<endl; 
}