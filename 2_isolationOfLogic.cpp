#include<bits/stdc++.h>
#include "2_Sample_class.cpp"
using namespace std;
int main(){

///statically creating objects
student s1;
student s2;
student s3,s4,s5;

// creating  objects dynamically
student *s6 = new student;


// input values using DOT OPERATOR 

// FOR STATIC OBJECT
s1.age = 23;
s1.rollno = 21003;
cout<<s1.age<<" "<<s1.rollno<<endl;

// FOR DYNAMIC OBJECT
// M1 
(*s6).age = 27;
// M2
s6->rollno = 1234;
cout<<s6->age<<" "<<s6->rollno<<endl;

// if we try to intialize the staic object with arrow we GET AN ERROR
// base operand of student has no pointer type student





return 0;
}