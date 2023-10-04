#include<iostream>
using namespace std;
class Student{
      int age;

  public :
          ~Student(){      /// our destructor will be called
              cout<<"Destructor called "<<endl;
          }
          /// default constructor
          Student(){
             cout<<"Construtor 1 called "<<endl;
          }
          /// parameterized constructor
          Student(int rollNumber){
              cout<<"Constructor 2 called"<<endl;
              this->rollNumber = rollNumber;  /// mandatory to use this
         }
         Student(int a,int r){
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
};


int main() {
    Student s1;  /// constructor 1 called
    
    Student s2(100);   /// constructor 2 called
    
    Student s3(10,100);  /// constructor 3 called
    
    Student s4(s3);  /// copy constructor called
    
      s1 = s2;    /// copy assignment operator called
      
      Student s5 = s3;   /// copy constructor is called
   return 0;
}
