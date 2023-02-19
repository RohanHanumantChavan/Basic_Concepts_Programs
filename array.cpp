#include<iostream>
using namespace std;
class Array
{
    public:
    int isize;
    int *Arr;
    
    Array(int ilenght)
    {
        cout<<"inside the constructor\n";
        isize = ilenght;
        Arr = new int[isize];
    }
    ~Array()
    {
        cout<<"inside the destructor\n";
        delete []Arr;
    }
    void accept()
    {
        cout<<"enter the value\n";
        int i = 0;
        for(i = 0; i< isize; i++)
        {
            cin>>Arr[i];
        }
    }
    void display()
    {
        cout<<"Elements of array are : \n";
        int i = 0;
        for(i = 0; i< isize; i++)
        {
            cout<<Arr[i]<<"\n";
        }
    }
    int Summation()
    {
        int iSum = 0, i = 0;
        for(i = 0; i< isize; i++)
            {
                iSum = iSum + Arr[i];
            }
            return iSum;
        
    }
};
int main()
{
    cout<<"inside main function\n";
    int iret = 0;
    Array obj1(4);
    obj1.accept();
    obj1.display();
iret = obj1.Summation();
cout<<"value from Summation is:"<<iret<<"\n";
   // Array obj2(6);
    return 0;
}