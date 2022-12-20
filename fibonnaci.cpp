#include<iostream>
using namespace std;

int main(){


    int n;
    cout<< "Fibonnaci series till whioch term? (45>=n>1) ";
    cin>>n;
    int a =0;
    int b= 1;

    cout<< a << " "<< b;

    int nextNum;
    for (int i = 3; i <= n; i++)
    {
        nextNum = a+b;
        cout<< " " << nextNum;

        a = b;
        b = nextNum; 
    }

}