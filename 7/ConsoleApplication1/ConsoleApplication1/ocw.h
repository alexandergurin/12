#pragma once
template <class T>
struct node
{
  T elem;
  node *sled;
};
template <class T>
 class Spisok {
   private:
     node *phead, *Res;
   public:
     Spisok()
	 {
		 phead=new(node);
		 Res=NULL;
	 }
     ~Spisok()
	 {
		 delete phead;
	 }
     void build ();
     void out ();
     node *searc (int);
     void del();
	 int size();
	 int znac();
	   void operator !=(Spisok right);
	 void operator--();
	  void operator()();
     void addition();
     void cleaning();
	int sred()
 {
	 int sr;
	 node *t;
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
 };