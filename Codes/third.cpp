#include<iostream>
using namespace std;

int main(){
    int a;
    cout<< "Enter value of a: ";
    cin >> a;

    if(a>0){

        cout<< a << " is Positve "<< endl;
    }
    else if(a<0){

        cout<< a << " is Negative "<< endl;
    }
    else{

        cout<< a << " is ZERO "<< endl;
    }
}
