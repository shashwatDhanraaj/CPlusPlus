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
13. [Pattern7](#pattern7)
14. [Pattern8](#pattern8)
15. [Pattern9](#pattern9)
16. [Pattern10](#pattern10)
17. [Pattern11](#pattern11)
18. [Patttern12](#pattern12)
19. [Pattern13](#pattern13)
20. [](#)




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

13. ### Pattern7
```cpp
#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int row = 1;

    while(row <= n) {

        int col = row;

        while(col <2*row) {
            
            cout<<col;
            col++;
            
        }
        cout<<endl;
        row++;

    }
    return 0;
}
```
output
```
5
1
23
345
4567
56789
```
14. ### Pattern8
```cpp
#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;

    int row = 1;
    while (row<=n)
    {
        int col =1;
        
        while (col<=n)
        {
            char ch ='A'+ row -1;
            cout<<ch;
            col++;
        }
        cout<<endl;
        row++;
    }

}
```
output
```
7
AAAAAAA
BBBBBBB
CCCCCCC
DDDDDDD
EEEEEEE
FFFFFFF
GGGGGGG
```
15. ### Pattern9
```cpp
#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int row = 1;

    while (row<=n)
    {
        //space
        int space = n-row;
        while (space)
        {
            cout<<" ";
            space--;
        }
        
        //star
        int col = 1;
        while (col<=row)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
        

    }
    
}
```
output
```
5
    *
   **
  ***
 ****
*****
```
16. ### Pattern10
```cpp
#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int row = 1;

    while (row<=n)
    {
        //space
        
        int space = row-1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        //star
        int col = 1;
        while (col<=n-row+1)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
        
        

    }
    
}
```
output
```
7
*******
 ******
  *****
   ****
    ***
     **
      *
```
17. ### Pattern11
```cpp
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
```
output
```
10
                             1
                          2  3
                       4  5  6
                    7  8  9 10
                11 12 13 14 15
             16 17 18 19 20 21
          22 23 24 25 26 27 28
       29 30 31 32 33 34 35 36
    37 38 39 40 41 42 43 44 45
 46 47 48 49 50 51 52 53 54 55
```
18. ### Pattern12
```cpp
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
```
output
```
5
    1
   121
  12321
 1234321
123454321
```
19. ### Pattern13
```cpp
#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int row = 1;
    while (row<=n)
    {
        //1st space
        int count =1;
            while (count<=(n+1)-row)
            {
               cout<< count << " ";
               count++;
            }
        
        int count2 = (row -1)*2;
            while (count2)
            {
               cout<< "* ";
               count2--;
            }

        int count3 = (n+1)-row;
            while (count3>=1)
            {
               cout<< count3 << " ";
               count3--;
            }

        cout<<endl;
        row++;
    }
}
```
output
```
9
1 2 3 4 5 6 7 8 9 9 8 7 6 5 4 3 2 1 
1 2 3 4 5 6 7 8 * * 8 7 6 5 4 3 2 1 
1 2 3 4 5 6 7 * * * * 7 6 5 4 3 2 1 
1 2 3 4 5 6 * * * * * * 6 5 4 3 2 1 
1 2 3 4 5 * * * * * * * * 5 4 3 2 1 
1 2 3 4 * * * * * * * * * * 4 3 2 1 
1 2 3 * * * * * * * * * * * * 3 2 1 
1 2 * * * * * * * * * * * * * * 2 1 
1 * * * * * * * * * * * * * * * * 1 
```
20. ### 
```cpp

```
output
```

```

