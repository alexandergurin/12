#include "stdafx.h"
#include "publhouse.h" 
#include <iostream> 
using namespace std;
void  pub_house::setpub()
 {
	 cout<<"Введите название издательства"<<endl;
	 cin>>pubname;
	  cout<<"Введите адрес издательства"<<endl;
	  cin>>address;
 };
void pub_house::getpub()
{  
	cout<<"Название издательства: "<<this->pubname<<endl;
	cout<<"Адрес издательства: "<<this->address<<endl;
}  
pub_house::~ pub_house(void)
{
cout<<" #######Деструктор издательства #######"<<endl;
};