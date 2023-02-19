#include<iostream>
using namespace std;
int main()
{
 int no = 11;
 int &a = no;
 int &v = no;

 int *p = &no;

 double d = 10.30;
 double &p = d;
 double &q = d;
 double &u = p;



return 0;
}