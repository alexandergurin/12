
#include "stdafx.h"
#include "publhouse.h" 
#include <iostream> 
using namespace std;
void  pub_house::setpub()
 {
	 cout<<"Введите название издательства"<<endl;
	 cin>>pubname;
 };
void  pub_house ::getpub()
 {
 cout<<"Издательство:"<<pubname<<endl;
 };  
pub_house::~ pub_house(void)
{
cout<<"Деструктор издательства"<<endl;
};