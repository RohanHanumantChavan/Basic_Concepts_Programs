#include<iostream>
using namespace std;
class overloading 
{
  public :
int Add(int a, int b)
{
   cout<<"Addition of integer\n";
}
   float Add(float a, float b)
{
   cout<<"Addition of floats\n";
}

double Add (double a, double b)
{
  cout<<"Addition of double\n";
}

int Add(int a, int b, int c)
{
   cout<<"Addition of 3 integer\n";
}









int main()
{