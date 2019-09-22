#include <iostream>
#include "bits/stdc++.h"

using namespace std;

int main()
{
    cout << "Smart pointers !" << endl;



    int * ip= new int(10) ;
    shared_ptr<int> spi(ip);
    //spi.reset(ip);


    //spi=ip; //throws error

    //the right way to assign raw pointer to  shared pointer is this
    /*
    controller block  is created in this case and not when shared pointer or weak pointer is passed;
   quote:
   Constructing more than one std::shared_ptr
from a single raw pointer gives you a complimentary ride on the particle accelerator
of undefined behavior, because the pointed-to object will have multiple control
blocks. Multiple control blocks means multiple reference counts, and multiple reference
counts means the object will be destroyed multiple times (once for each reference
count). That means that code like this is bad, bad, bad:


    */

    cout<<" the shared pointer value is :"<<*spi;


    return 0;
}
