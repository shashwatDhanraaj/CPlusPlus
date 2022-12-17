#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int row = 1;
    while (row<=n)
    {
        //1st space
        int space = n-row;
        while(space){
            cout<<" ";
            space--;
        }


        //2nd number
        int count = 1;
        while (count<=row)
        {
            
            cout<<count;
            count++;
            
        }
        int start = row-1;
        while (start)
        {
            cout<<start;
            start--;
        }
        
        



        //3rd rest part
        
        
        cout<<endl;
        row++;
    }
}