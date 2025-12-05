#include <iosfwd>
//
// Created by ESINF 2-004805 on 4/12/25.
//

#include <iostream>
#include <string>
using namespace std;

void probar (int &x) {
    x=10;
}

int main() {
    int x = 10;
    cout << x <<endl;
    cout << &x << endl;
    cin.get();


    // ejemplo 3
    int * p;
    int x1= 1;
    int *o;
    p=&x1;
    *p= *p + 3;
    cout<< *p <<endl;




    //Ejemplo #1
    int xa= 10;
    int &y=xa;
    y=5;
    cout<< xa;
    cout<< y;
    return 0;

// ejemplo 2
  //  int x = 10;
 //   int *p;
 //   p = &x;
 //  cout << "x: "<<x <<endl;
   // cout <<"&x: "<< &x << endl;
  //  cout <<"p: " <<p << endl;
 //   cout << "*p: "<<*p << endl;
    //return 0;


    probar(y);

}

