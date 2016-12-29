#include <iostream>
#include "ocw.h"
using namespace std;
template <class T>
 void Spisok<T>::operator--() 
 {
  node<T> *q;
  q = (*Res).sled;
  if  (q!=NULL)
  {
    
    (*Res).sled = (*(*Res).sled).sled; 
	delete q;
  }
  else
    cout<<"Звено с заданным элементом - последнее!\n";
}
 template <class T>
 void Spisok<T>::out ()
 
{
  node<T> *t;
 
  t = phead;
  t = (*t).sled;
  cout<<"Список: "<<endl;
  while  (t!=NULL)
  {
         cout<<(*t).elem <<" ";
    t = (*t).sled;
  }
  cout<<endl;
}
 template <class T>
 int Spisok<T>::znac()
 {int sr;
	 node<T> *t;
	 int counter = 0;
 
 t = phead;
  t = (*t).sled;
  while  (t!=NULL)
  {
        counter++;
		 t = (*t).sled;
  }
  int sum=0;
  t = phead;
  t = (*t).sled;
    while  (t!=NULL)
		
  {
   sum=sum+(*t).elem;
		 t = (*t).sled;
  }
	sr=sum/counter;
	cout<<"среднее значени: "<<sr<<endl;
return sr;
 };
 template <class T>
 int Spisok<T>::size()
 {
	node<T> *t;
 
	int counter = 0;
  t = phead;
  t = (*t).sled;
  while  (t!=NULL)
  {
        counter++;
		 t = (*t).sled;
  }
  cout<<"Size:"<<counter<<endl;
  return counter;
 }
 template <class T>
 void Spisok<T>::operator !=(Spisok right)
 {
	 if (this->size() == right.size())
	 {
		 		cout << "Длины списков равны" << endl;

		
	 }
	 else
	 {
		 		 cout << "Длины списков не равны" << endl;
		
	 }
 }
 template <class T>
 void Spisok<T>::build ()
 
{
  node<T> *t;
  int  el;
 
  t = phead; 
  (*t).sled = NULL;
  cout<<"Вводите элементы звеньев списка: \n";
  cin>>el;
  while  (el!=0)
  {
    (*t).sled = new (node);
    t = (*t).sled; 
	(*t).elem = el;
	(*t).sled = NULL;
    cin>>el;
  }
} 

 template <class T>
 node<T> *Spisok<T>::searc (int el)
 
{
  node<T> *t;
 
  Res = NULL;
  t = phead;
  t = (*t).sled;
  while  (t!=NULL && Res==NULL)
    if  ((*t).elem==el)  
		Res = t;
    else  t = (*t).sled;
  return Res;
}

 template <class T>
void Spisok<T>::del ()
 
{
  node<T> *q;
  q = (*Res).sled;
  if  (q!=NULL)
  {
    
    (*Res).sled = (*(*Res).sled).sled; 
	delete q;
  }
  else
    cout<<"Звено с заданным элементом - последнее!\n";
}
template <class T>
 void Spisok<T>::operator()()
 {
	   node<T> *q;
  int  el;
  q = Res;
  cout<<"Вводите добавляемый элемент : ";
  cin>>el;
    (*q).elem = el;
 }
 template <class T>
void Spisok<T>::addition ()
 
{
  node<T> *q;
  int  el;
  q = Res;
  cout<<"Вводите добавляемый элемент : ";
  cin>>el;
    (*q).elem = el;
 
}
 template <class T>
void Spisok<T>::cleaning()
 
{
  node<T> *q,*q1;
 
  q = phead;
  q1 = (*q).sled; 
  while (q1!=NULL);
  { 
	  q = q1;
	  q1 = (*q1).sled;
	  delete q;
  }
}