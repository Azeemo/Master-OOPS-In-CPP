#include<iostream>
#include "student.cpp"
using namespace std;

int main() {

    Student s1(10,100); /// parameterised constructor user defined
    cout<<"S1 :";
    s1.display();

    Student s2(s1);   /// copy inbuilt
    cout<<"S2 :";
    s2.display();
    
    Student *s3 = new Student(20,200);
    cout<<"S3 :";
    s3->display();
    
    Student s4(*s3);
    Student *s5 = new Student(*s3);
    Student *s6 = new Student(s1);

   return 0;
}
