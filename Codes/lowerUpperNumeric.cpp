#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the character to identify: ";
    cin>> ch ;

    if(isdigit(ch)){
        cout<< ch <<" is number"<< endl;
    }
    else if(islower(ch)){
        cout<< ch <<" is lower case alphabet"<< endl;
    }
    else{
        cout<< ch <<" is upper case alphabet"<< endl;
    }


}