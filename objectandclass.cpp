#include<iostream>
#include<conio.h>
using namespace std;
class first{
private:
int a;
protected:
void setvalue(int k){
    a=k;
}
public:
void display (){
    cout<<"Value of a is "<<a;
}
};

class second:public first{
    public:
    void setdata(int x){
        setvalue(x);
    }
};

int main(){
second object;
object.setdata(10);
object.display();
getch();
return 0;    
}