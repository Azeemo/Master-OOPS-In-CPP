#include<iostream>
using namespace std;
class Student{
      int age;

  public :
          /// default constructor
         /*Student(){
             cout<<"Construtor 1 called "<<endl;
          }
          */

          /// parameterized constructor
          Student(int rollNumber){
              cout<<"Constructor 2 called"<<endl;
              this->rollNumber = rollNumber;  /// mandatory to use this
        }
        Student(int a,int r){
            cout<<"this "<<this<<endl;
            cout<<"Constructor 3 called"<<endl;
           this->age = a;  /// optional
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
    ~Student(){      /// our destructor will be called
       cout<<"Destructor called "<<endl;
    }

};


int main() {
    Student s1(10,100);
    Student s2(20,200);
    Student *s3 = new Student(30,300);

    s2 = s1; /// copy assignment operator
    *s3 = s1;
    s2 = *s3;

  delete s3;
   return 0;
}
