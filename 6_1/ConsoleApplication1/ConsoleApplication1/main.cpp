//����� ? ���������������� ������ List. ������������� ����������� ��������� ��������: () ? ������� ������� � �������� �������, ��������: int i;  list L; L(i); () ? �������� ������� � �������� �������, ��������: int i; Type c; list L; L(�,i); != ? �������� �� �����������
#include "list.h"
int main()
{
	int i = 0;
	int val = 0;
	List a;
	a(1, 0);
	a(2, 1);
	a(3, 2);
	a.show();
	a(0);
	a.show();
	List b;
	b(1, 0);
	b("asd", 0);
	b(3, 0);
	b(4, 1);
	b.show();
	if (a != b) cout << "A = B" << endl;
	else cout << "A != B" << endl;
	system("pause"); 
}