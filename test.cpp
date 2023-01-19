#include<iostream>
using namespace std;
class complex{
private:
int a;
int b;
public:
complex(int x, int y)
{
a=x;
b=y;
 
cout<<"Value of a is "<<a<<endl<<"value of b is "<<b;
}
};
int main(){
complex c1(2,3);

    return 0;
}