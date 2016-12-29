#include <iostream> /*Создать класс Airline: Пункт назначения, Номер рейса,
 Тип самолета, Время вылета, Дни недели. 
Функциичлены реализуют запись и считывание полей (проверка корректности).
Создать массив объектов. Вывести:
a)  список рейсов для заданного пункта назначения;
 b)  список рейсов для заданного дня недели; */
#include <cstdlib> 
#include <string>

#include "air.h"
#include <stdio.h>
#include <locale>
#include <cstring>
using namespace std;
template <typename T>
aeroflot<T>::aeroflot(void) //конструктор рейса
{ 
	cout<<" ~~~~~~~~~~ Конструктор Рейса ~~~~~~~~~~~"<<endl;
} ;
template <typename T>
void <T>::setflight()
{
	
	
	/*cout<<"Номер рейса: "<<endl;
	cin>>number;*/
	cout<<"Тип самолета:"<<endl;
	cin>>type;
	cout<<"Время вылета:"<<endl;
	cin>>time;
} ;
template <typename T>
void <T>::getflight()
{  
	cout<<"Пункт назначения: "<<this->destination<<endl;
	cout<<"Номер рейса: "<<this->number<<endl;
	cout<<"Тип самолета:"<<this->type<<endl;
	cout<<"День вылета:"<<this->dy<<endl;
	cout<<"Время вылета:"<<this->time<<endl;
} ;
 
int main()
{
	setlocale(LC_ALL,"rus");
	char a[10];
	char b[10];
}