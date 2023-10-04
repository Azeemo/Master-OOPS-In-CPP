#include<iostream>
using namespace std;
class Student{
int age;

  public :

      /// default constructor
      Student (){
         cout<<"Construtor called "<<endl;
      }

      /// parametersied constructor
      Student(int r){
          cout<<"Constructor 2 called"<<endl;
         rollNumber = r;
      }

      int rollNumber;

    void display(){
       cout<<age<<" "<<rollNumber<<endl;
    }

    int getAge(){
      return age;
    }
    void setAge(int a){
       age = a;
    }
};


int main() {
//  TO GET THE ADDRESS OF THE STUDENT OBJECT
    Student s1(10,100);
    cout<<"Address of s1 "<<&s1<<endl;

    Student s2(20,200);
    cout<<"Add of s2 "<<&s2<<endl;
 
  Student s1;
   s1.display();

   Student s2;
   s2.display();

   Student *s3 = new Student;
   s3->display();

   cout<<"Parameterised constructor demo"<<endl;
   Student s4(10);
   s4.display();

   Student *s5 = new Student(20);
   s5->display();

  Student s6(10,100);
  s6.display();
  

   return 0;
}
