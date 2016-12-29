#pragma once
class pub_house //класс издательство
{
	char pubname[17];
	char address[17];
public:
 void setpub();
 void getpub();
 ~pub_house(void); //деструктор издательства
};