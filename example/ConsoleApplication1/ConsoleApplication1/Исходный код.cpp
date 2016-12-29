#include <iostream>
#include <cstdlib> 
#include <string>
#include <cstring>
#include <stdio.h>
#include <locale>
#include <cstring>
#include <conio.h>
using namespace std;
class air
{
 char dest[10];
public:
	air(char *name)
	{strcpy(dest,name);
		cout<<"Конструктор"<<endl;};
	int set_dest(char *name)
	{
	if (sizeof(name)>10)
		return 0;
	else strcpy(dest,name);
	};
	void* get_name()
	{
	return(&dest);
	};
};

int main()
{	char s[20];
char a[50];
	setlocale(LC_ALL,"rus");
air *x=(air*) new air ("boing");
strcpy(s,(char*)x->get_name());
printf("initial lield=%s\n",s);
    gets(a);
	cout<<a<<endl;
	int k=strcmp(a,(char*)x->get_name());
	if( k ==0)
	{
	cout<<"govno"<<endl;};
};