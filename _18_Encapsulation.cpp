//Encapsulation: COMBINING DATA MEMBERS AND ITS PROPERTIES .
// this is done via class
//This method encapsulates the data and function together
// inside a class which also results in data abstraction. 


#include <iostream>
using namespace std;
 
class EncapsulationExample {
private:
    // we declare a as private to hide it from outside
    int a; 
 
public:
    // set() function to set the value of  a
    void set(int x) 
    {
        a = x;
    }
 
    // get() function to return the value of a
    int get() 
    {
        return a;
    }
};


//In the this program, the variable a is made private so that
// this variable can be accessed and manipulated only by using 
//the methods get() and set() that are present within the class.
// Therefore we can say that, the variable a and the methods set() as
// well as get() have binded together that is nothing but encapsulation.
 
// main function
int main() 
{
    EncapsulationExample e1;
 
    e1.set(10);
 
    cout<<e1.get();
    return 0;
}

