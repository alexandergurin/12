#pragma once 
class book 
{ 
	char book_name[20];
	int circulation;
	int year;
	char type[10];
	char genre[10];
public:  
	book (void); 
	void book_set();
	void book_set_name();
	void book_get_name();
	void book_get();
 ~book(void);


};
