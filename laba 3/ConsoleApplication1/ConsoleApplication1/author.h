#pragma once
#include "person.h" 
class author://класс автор
	public person
{
	int age;
	char sex[10];
public:  
	author(void); 
	void author_set();
	void author_get();
 ~ author(void);//деструктор автора


}; 