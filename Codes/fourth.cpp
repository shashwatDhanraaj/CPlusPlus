#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<< "Enter value of a and b: "<< endl;
    cin >> a >> b;
    cout << "Value of a and b is "<< a <<" & "<< b << endl;
    if(a>b){

        cout<< a << " is greater than "<< b << endl;
    }
    else if(a<b){

        cout<< a << " is less than "<< b << endl;    }
    else{

        cout<< a << " is equal to "<< b << endl;
    }
}
