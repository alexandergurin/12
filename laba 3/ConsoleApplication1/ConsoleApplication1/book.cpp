#include "stdafx.h"
#include "book.h" 
#include <iostream> 
using namespace std;  
book::book(void)
{
	cout<<"КНИГА"<<endl;
}
void  book::book_set()
 {
	 
	 cout<<"Введите тираж: "<<endl;
	 cin>>circulation;
	 cout<<"Введите год издания книги: "<<endl;
		cin>>year;
		cout<<"Введите тип обложки: "<<endl;
		cin>>type;
		cout<<"Введите жанр"<<endl;
		cin>>genre;
 };
void book::book_set_name()
{
	cout<<"Введите название: "<<endl;
		cin>>book_name;
};
void book::book_get_name()
{
	cout<<"Название: "<<this->book_name<<endl; 
}
void book::book_get()
{ 

	cout<<"Тираж: "<<this->circulation<<endl;
	cout<<"Год издания: "<<this->year<<endl; 
	cout<<"Тип обложки: "<<this->type<<endl; 
	cout<<"Жанр: "<<this->genre<<endl; 
	
}  
book::~book(void)
{
	cout<<"###### Деструктор книги #######"<<endl;
};