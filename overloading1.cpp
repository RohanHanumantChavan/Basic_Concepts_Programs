#include<iostream>
using namespace std;

class overloading
{
   public:
   int i;
   float f;
   double d;

   int substraction(int a, int b)  //add@2ii  mangling name
   {
    cout<<"inside the integer substraction\n";
    return a - b;
   }

   float add(float a, float b) //add@2ff mangling name
   {

    cout<<"inside the float addition\n";
    return a + b;
   }
double add(double a, double b)  //add@2dd   mangling name
{

    cout<<"inside the double addition\n";

    return a+b;
}

int add(int a, int b, int c)   //add@3iii mangling name
{

    cout<<"inside the 3 integer addition\n";
    return a+b+c;
}


};

int main()
{
    overloading obj;

    int ans = 0;

    ans = obj.substraction(10,20);  
    cout<<ans<<"\n";


    ans = obj.add(10,20,30);
    cout<<ans<<"\n";


    float f = 0;

    f = obj.add(10.1f,12.2f);
    cout<<f<<"\n";

    double d = 0;
    d = obj.add(34.3,23.2);
    cout<<d<<"\n";
   
return 0;
}