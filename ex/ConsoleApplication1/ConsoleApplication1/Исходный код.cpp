#include <iostream> /*������� ����� Airline: ����� ����������, ����� �����,
 ��� ��������, ����� ������, ��� ������. 
������������ ��������� ������ � ���������� ����� (�������� ������������).
������� ������ ��������. �������:
a)  ������ ������ ��� ��������� ������ ����������;
 b)  ������ ������ ��� ��������� ��� ������; */
#include <cstring>
#include <stdio.h>
#include <locale>
using namespace std;
class Student { 
	string name;
int score; 
int sciptedlesson; 
public: Student (int i): name(""),score(i),sciptedlesson(0){} 
		Student (string _name, int scor =0, int scip =0) 
		{ name = _name; score = (scor>=0)?score:0; sciptedlesson = (scip>=0)? scip:0; }}; 
int main()
{ 
	Student Anna = 45; string someStr ="Ivan  Ivanovich"; Student Vano = someStr; 
}