#include<iostream>
using namespace std;
int sub(int x, int y);
int add(int a, int b);
int main ()
{
int x,y,a,b;
int total, totaladd;

cout<<"Enter the value of x and y:"<<endl;
cin>>x>>y;

 total=sub(x,y);

cout<<"Subtraction is "<<total<<endl;



cout<<"Enter two values to add:"<<endl;
cin>>a>>b;

totaladd=add(a,b);

 
cout<<"Addition is "<<totaladd<<endl;
    return 0;
}

int sub(int x, int y)
{

    int result;

    result=x-y;
    return result;
}
int add(int a, int b)
{

    int tsum;
    tsum=a+b;
    return tsum;
}