#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;
template <typename T> void srednee (T A[], int size)
{
    double sr=0;
    for (int i=0; i<size; i++)
    {
        sr+=A[i];
    }
 
    cout <<" ������� �������������� �������� �������: " <<sr/size<< " \n ";
    
}
void main()
{
    setlocale (LC_ALL,"rus");
    srand(time(NULL));
 
    int const SIZE=5;
 
    double A[SIZE]={};
 
    cout<<" ��������������� ������: ";
 
    for (int j = 0; j < SIZE; j++)  
        
    {
        A[j]=rand()%100;
        cout.width(2); cout<<A[j]<< "  ";       
    }
 
    cout<<" \n";
    srednee (A, SIZE);
     int    iArray[SIZE];
	 cout<<"������� ������ int"<<endl;
	 for(int i=0;i<5;i++)
	 {
		 cin>>iArray[i];}
	 srednee(iArray,SIZE);


	 double   Array[SIZE];
	 cout<<"������� ������ double"<<endl;
	 for(int i=0;i<5;i++)
	 {
		 cin>>Array[i];}
	 srednee(Array,SIZE);
	 char arr[SIZE];
	  cout<<"������� ������ char"<<endl;
	 for(int i=0;i<5;i++)
	 {
		 cin>>arr[i];
	 }
	 srednee(arr,SIZE);

}