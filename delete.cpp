#include<iostream>
#include<string.h>
using namespace std;
class string {
private:
char *name ;
public:
//Dynamic constructor to allocate memory for name 
string ( char *str)
{
    int length = strlen(str);
    name = new char [length +1];
    strcpy(name , str);
}
// member function / method to print the string 
void display(){
    cout<<"The given string is:"<<endl <<name <<endl;

}
~string (){
    delete[] name ;
}
};
int main (){ 
    //initializing string
    char str[20]="Hello, C++";

    //Implicit constructor calling 
    string s(str);

    //Explicit constructor calling
    // string s=strlen(str);

    s.display();
    return 0;


}