
#include "stdafx.h"
#include "publhouse.h" 
#include <iostream> 
using namespace std;
void  pub_house::setpub()
 {
	 cout<<"������� �������� ������������"<<endl;
	 cin>>pubname;
 };
void  pub_house ::getpub()
 {
 cout<<"������������:"<<pubname<<endl;
 };  
pub_house::~ pub_house(void)
{
cout<<"���������� ������������"<<endl;
};