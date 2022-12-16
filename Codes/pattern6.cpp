#include<iostream>
using namespace std;

int main(){

        int n;
        cin>>n;

        int row = 1;
        while(row<=n){
            int count =row;
            while (count>=1)
            {
               cout<< count << " ";
               count--;
            }
            cout << endl;
            row++;
        }
}