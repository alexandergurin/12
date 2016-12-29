#pragma once
#include "publhouse.h"
class edition://класс печатное издание
	public pub_house
{
	char edition_name[15]; //название печатного издания
public:  
	edition(void); 
		void set_edition();
 void get_edition(); 
 ~ edition(void);//деструктор печатного издания


};