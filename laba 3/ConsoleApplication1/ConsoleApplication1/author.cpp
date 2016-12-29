#include "stdafx.h"
#include "author.h" 
#include <iostream> 
using namespace std;  
author::author(void)
{
}
void  author::author_set()
 {
	  cout<<"Введите пол"<<endl;
	 cin>>sex;
	  cout<<"Введите возраст"<<endl;
	 cin>>age;
 };
void author::author_get()
{  
	cout<<"Возраст: "<<this->age<<endl; 
	cout<<"Пол: "<<this->sex<<endl; 
}  
author::~ author(void)
{
	cout<<"###### Деструктор автора #######"<<endl;
};