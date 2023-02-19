#include<iostream>
using namespace std;

class demo
{
     public:
     int A,B;

     demo(int i = 0, int j = 0)
     {
        A = i;
        B = j;
     }
     void display()
     {
        cout<<A<<"\n";
        cout<<B<<"\n";
     }
     friend demo operator +(demo,demo);
     friend demo operator *(demo,demo);

};
demo operator +(demo obj1, demo obj2)
{
    cout<<"inside + operator function\n";
    return demo(obj1.A+obj2.A,obj1.B+obj2.B);

}

demo operator *(demo obj1, demo obj2)
{
    cout<<"inside operator * function\n";
    return demo(obj1.A*obj2.A,obj1.B*obj2.B);
}
int main()
{
    demo X(10,20);
    demo Y(30,40);
    demo Ans;    //0,0
    Ans = X + Y;
    Ans.display();

    // cout<<Ans.A<<"\n";
       // cout<<Ans.B<<"\n";
    

    Ans = X * Y;
    Ans.display();
    
    cout<<Ans.A<<"\n";
     cout<<Ans.B<<"\n";
    
    return 0;
}
