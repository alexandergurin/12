#pragma once
class pub_house //класс издательство
{ private: char *pubname;
public:
pub_house(void);  
 void setpub();
 void getpub();
 ~pub_house(void); //деструктор издательства
};