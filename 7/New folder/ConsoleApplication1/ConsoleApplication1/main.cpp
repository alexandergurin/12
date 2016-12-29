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

aeroflot::aeroflot(void) //конструктор рейса
{ 
	cout<<" ~~~~~~~~~~ Конструктор Рейса ~~~~~~~~~~~"<<endl;
} ;
void aeroflot::setflight()
{
	
	
	/*cout<<"Номер рейса: "<<endl;
	cin>>number;*/
	cout<<"Тип самолета:"<<endl;
	cin>>type;
	cout<<"Время вылета:"<<endl;
	cin>>time;
} ;

void aeroflot::getflight()
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
	cout<<"Пример использования статической переменной и ф-ции"<<endl;
	reis *v=new reis[6];

	new_air boing=4;
	cout<<"~~~~~~~~~~~~~~~~Поиск по пункту назначения~~~~~~~~~~~~~~"<<endl;
cout<<"Введите пункт назначения который будем искать"<<endl;
gets(a); 
cout<<"~~~~~~~~~~~~~~~~Поиск по дню недели~~~~~~~~~~~~~~"<<endl;
cout<<"Введите день недели который будем искать"<<endl;
gets(b); 
	aeroflot *x=new aeroflot[4]; 
for (int i=1;i<5;i++)
{
	cout<<"Рейс №:"<<i<<endl;
	x[i].set_dest();
	x[i].set_dy();
	x[i].setflight();
};
for (int j=1;j<5;j++)
{
cout<<"Рейс №:"<<j<<endl;
	x[j].getflight();
};

cout<<"~~~~~~~~~~~~~~~~~~ Рейс(ы) найденный по пункту назначения ~~~~~~~~~~~~~~~~~~"<<endl<<endl;
for (int t=1;t<5;t++)
{
	int k=strcmp(a,(char*)x[t].get_dest());
	if( k==0)
	{x[t].getflight();
	cout<<endl;};

};
cout<<"~~~~~~~~~~~~~~~~~~ Рейс(ы) найденный по дню вылета ~~~~~~~~~~~~~~~~~~"<<endl<<endl;
for (int t=1;t<5;t++)
{
	int o=strcmp(b,(char*)x[t].get_dy());
	if( o==0)
	{x[t].getflight(); 
	cout<<endl;};
};

};