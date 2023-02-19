#include<iostream>
using namespace std;
class base
{
    public:
    int A,B;
    void fun()   {    cout<<"inside base fun\n";    }    //1000

    virtual void gun()   {    cout<<"inside base gun\n";    }    //2000
    virtual void sun()   {    cout<<"inside base sun\n";    }    //3000
    virtual void run()   {    cout<<"inside base run\n";    }    //4000
    
};

class derived:public base
{
   public:
   int X,Y;

   void gun()    {    cout<<"inside derived gun\n";     }     //5000
   
   virtual void run()   {  cout<<"inside derived run\n";     }   // 6000
   virtual void mun()    {   cout<<"inside derived mun\n";    }   //7000
};

int main()
{
base *bp = NULL;
derived dobj;
bp = &dobj;    //upcasting 

bp->fun();  //base fun
bp->gun();  //derived gun
bp->sun();  //base sun
bp->run();  //derived run

//bp->mun();   //error



    return 0;
}