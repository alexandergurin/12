
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
  cout<<"\n������� ������� �����, ����� �������� �������������� ��������:\n";
  cin>>el;
  Res_Zn=B.searc (el);
  if  (Res_Zn!=NULL && (*Res_Zn).sled!=NULL)
    {
		B--; 
		B.out ();
  }
  else  
	  cout<<"����� � �������� ��������� � ������ ���!";
  cout<<"\n������� ������� �����, �� ����� �������� �������������� ����������:\n";
  cin>>el;
  /*Res_Zn=B.searc (el);
  if  (Res_Zn!=NULL && (*Res_Zn).sled!=NULL)
    {
		B();
		B.out ();
  }
  else  cout<<"����� � �������� ��������� � ������ ���!"<<endl;
  B.znac();*/
  
  B.cleaning();
};