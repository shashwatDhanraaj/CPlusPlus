# C++


## Programs

1. [Hello World](#hello-world)
2. [Dtypes](#dtypes)
3. [PosNeg](#posneg)
4. [Comp](#comp)
5. [LowerUpperNumeric](#loweruppernumeric)
6. [PrimeOrNot](#primeornot)
7. [Pattern1](#pattern1)
8. [Pattern2](#pattern2)
9. [Pattern3](#pattern3)
10. [Pattern4](#pattern4)
11. [Pattern5](#pattern5)
12. [Pattern6](#pattern6)
13. [](#)
14. [](#)
15. [](#)
16. [](#)




***

1.  ### Hello World
```cpp
#include<iostream>
using namespace std;
int main(){
    cout<<"Hello World!";
}
```
output
```
Hello World!              
```
***
 2. ### Dtypes
```cpp
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
```
output
```
123
v
1
1.23
size of a is: 4
size of b is: 1
size of bl is: 1
size of size is: 8
```
***
3. ### PosNeg
```cpp
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

```
output
```
Enter value of a: 56
56 is Positve
```
***
4. ### Comp

```cpp
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
```
output

```
Enter value of a and b: 
105
56
Value of a and b is 105 & 56
105 is greater than 56

```
***

5. ### LowerUpperNumeric

```cpp
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
```
output
```
Enter the character to identify: A
A is upper case alphabet
```

6. ### PrimeOrNot
```cpp
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;

    int i = 2;

    while(i<n){
        if(n%i==0){
            cout<<"not prime for"<< i << endl;
        }
        else{
            cout<<"prime for "<< i << endl;

        }
        i++;
    }
}
```
output
```
7
prime for 2
prime for 3
prime for 4
prime for 5
prime for 6
```
7. ### Pattern1
```cpp
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i =1;
    

    while(i<=n){
        int j = 1;
        while (j<=n)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
}
```
output
```
5
*****
*****
*****
*****
*****
```
8. ### Pattern2
```cpp
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i =1;
    

    while(i<=n){
        int j = 1;
        while (j<=n)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
}
```
output
```
5
11111
22222
33333
44444
55555
```
9. ### Pattern3
```cpp
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i =1;
    
    while(i<=n){

        int j=1;

        while (j<=n)
        {
            cout<<j<<" ";
            j++;
        }
        i++;
        cout<<endl;
        
    }

}
```
output
```
5
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5
```
10. ### Pattern4
```cpp
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i =1;
    int count = 1;
    while(i<=n){

        int j = 1;
        while ( j<=n)
        {   
            if(count<10){
                cout<<" "<<count<<" ";

            }
            else{
                cout<<count<<" ";
            }
            count++;
            j++;
        }
        
        cout<<endl;
        
        i++;
        
    }

}
```
output
```
5
 1  2  3  4  5 
 6  7  8  9 10 
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25
```
11. ### Pattern5
```cpp
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row =1;

    while (row<=n)
    {
        int col = 1;
        while(col<=row)
        {
            cout<<"* ";
            col++;
        }
        row++;
        cout<<endl;
    }
    
}
```
output
```
5
* 
* * 
* * * 
* * * * 
* * * * *
``` 
12. ### Pattern6

```cpp
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
```
output
```
8
1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1 
6 5 4 3 2 1 
7 6 5 4 3 2 1 
8 7 6 5 4 3 2 1
```
