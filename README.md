#C++


## Programs
1. [Hello World](#hello-world)
2. [Dtypes](#dtypes)
3. [PosNeg](#posneg)
4. [Comp](#comp)
5. ...

 Hello World
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
 Dtypes
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
PosNeg
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
Comp

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
