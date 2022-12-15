#include<iostream>
using namespace std;

int main(){

    int a = 123;
    cout << a << endl;

    char b ='v';
    cout << b << endl;

    bool bl  = true;
    cout << bl << endl;

    double d =1.23;
    cout << d << endl;

    int sizea  = sizeof(a);
    cout << "size of a is: "<<sizea << endl;

    int sizeb  = sizeof(b);
    cout << "size of b is: "<<sizeb << endl;

    int sizebl  = sizeof(bl);
    cout << "size of bl is: "<<sizebl << endl;

    int sized  = sizeof(d);
    cout << "size of size is: "<<sized << endl;

}