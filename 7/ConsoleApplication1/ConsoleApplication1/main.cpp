
#include<iostream>
#include "ocw.h"
using namespace std;
int main ()
{
  system("cls");
  setlocale(LC_ALL,"rus");
  Spisok<int> A,B;
  int  el,x;
  node<int> *Res_Zn,*xo;
 A.build ();
  A.out ();
  A.size();
  B.build ();
  B.out ();
  B.size();

  B!=A;
  cout<<"\nВведите элемент звена, после которого осуществляется удаление:\n";
  cin>>el;
  Res_Zn=B.searc (el);
  if  (Res_Zn!=NULL && (*Res_Zn).sled!=NULL)
    {
		B--; 
		B.out ();
  }
  else  
	  cout<<"Звена с заданным элементом в списке нет!";
  cout<<"\nВведите элемент звена, на место которого осуществляется добавление:\n";
  cin>>el;
  /*Res_Zn=B.searc (el);
  if  (Res_Zn!=NULL && (*Res_Zn).sled!=NULL)
    {
		B();
		B.out ();
  }
  else  cout<<"Звена с заданным элементом в списке нет!"<<endl;
  B.znac();*/
  
  B.cleaning();
};