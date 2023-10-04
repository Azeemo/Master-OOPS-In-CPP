#include<iostream>
#include<cstring>
using namespace std;

class Student{
   int age;

   public:
       char *name;

          // OUR OWN COPY CONSTRUCTOR
       Student(Student const &s){
          this->age = s.age;
          /// this->name = s.name;  /// shallow copy

          /// deep copy
          this->name = new char[strlen(s.name) + 1];
          strcpy(this->name, s.name);

       }


       Student(int age, char *name){
          this->age = age;

          /// this->name = name;   shallow copy

          /// Deep copy
          this->name = new char[strlen(name) + 1];
          // CREATE AN EMPTY STRING OF SIZE NAME +1
// 1 SIZE IS TO STORE THE NULL CHARACTER

          strcpy(this->name,name);
          // COPYING THE CONTENT INTO ITS LOCAL PARAMETERS
        }

       void display(){
          cout<<name<<" "<<age<<endl;
       }
};

int main()
{
   char name[] = "abcd";
   Student s1(20,name);
   s1.display();

   Student s2(s1);  /// copy constructor called
   s2.name[0] = 'x'; // made changes in the name

    // printing both the objects
   s1.display(); 
   s2.display();
// WE ARE GETTING changed output in both of them 
   // INspite of making shallow copy
// THIS IS BECUASE
   // INBUILT COPY CONSTRUCTOR MAKE SHALLOW COPY

// SO WHENEVER WE HAVE DYNAMIC ARRAY AS PARAMETER
   // ALWAYS USE INBUILT COPY CONSTRUCTOR 










   /*
   name[3] = 'e';
   Student s2(30,name);
   s2.display();

   s1.display();
   */
  return 0;
}
