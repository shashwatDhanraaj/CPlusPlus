#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int row = 1;
    int count =1;
    while (row<=n)
    {
        //space
        int space = n-row;
        while (space)
        {
            cout<<"   ";
            space--;
        }
        //number
        int col = 1;
        while (col<=row)
        {
            if(count<10){
                cout<<"  "<<count;
            }
            else{
                cout<<" "<<count;
            }
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }
}