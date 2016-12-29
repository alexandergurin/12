#pragma once
#include <iostream>
#include <ctime>
class Matrix
{
 int **storage;
 int hsize,vsize;
 static const int maxsize=20;
public:
 Matrix();//
 Matrix(int v,int h);//
 Matrix(const Matrix &);//
 ~Matrix();//
 void sethsize(int);//
 void setvsize(int);//
 int gethsize();//
 int getvsize();//
};