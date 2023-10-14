
#include <iostream>
class Student {
   
 // THE REASON for static properties as
// property like totalStudents, average are not individual
   // it a PROPERTY OF CLASS
   // these attributes are termed as STATIC MEMEBERS
   // CAN ONLY BE ACCESSED BY CLASS ONLY

  public :

  int rollNumber;
  int age;
    static int totalStudents; /// total number of students present

// IT IS DONE 
    Student(){
       totalStudents++;
    }
    
    int getRollNumber(){
      return rollNumber;
    }
    
   // STATIC FUNCTION PROPERTIES
  // -> static function can only access static data member
    // and can only call static function
    // if in getTotalStudents
   // we return age then we will get error

    // -> static function do not have this keyword
    // becuase we dont need object to call the function

    static int getTotalStudents(){
       return totalStudents;
    }

};
// STATIC PROPERTY CAN ONLY BE INTITALIZED OUTSIDE THE CLASS

int Student::totalStudents = 0;  /// initialize static data members

using namespace std;
int main() {
  Student s1;
  Student s2;
  Student s3,s4,s5;

/// HOW TO CALL THE STATIC MEMBER OF CLASS
cout<<Student::totalStudents<<endl;
// :: IS CALLED THE scope resoultion operator


 return 0;
}
