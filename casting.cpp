#include<iostream>
using namespace std;

class base 
{
    public:
    int A,B;
    void fun()
    {
        cout<<"inside base fun\n";
        
    }
    virtual void gun()
    {
        cout<<"inside base gun\n";
    }

    virtual void run()
    {
       cout<<"inside base run\n";
    }
    
    virtual void mun()
    {
        cout<<"inside base mun\n";
    }

};

class derived:public base
{
    public:
    int C,D;
     void gun()
    {
        cout<<"inside derived gun\n";
    }

     virtual void run()
    {
       cout<<"inside derived run\n";
    }




};
int main()
{
   base *bp = NULL;
   derived *dp = NULL;

   base bobj;
   derived dobj;

   bp = &bobj;    //no casting
   dp = &dobj;    //no casting

   bp = &dobj; //upcasting allowed
  // dp = &bobj;   //downcasting not allowed

  bp->fun();
  bp->gun();
  bp->run();
  bp->mun();




    return 0;
}