// HOW TO ACCESS PRIVATE PROPERTIES 
// TO ACCESS PRIVATE PROPERTIES WE CAN DO THIS WITH THE HELP OF FUNCTIONS

#include<bits/stdc++.h>
using namespace std;
class student{
public:
	int rollno;
private:
	int age;

public:
	void display(){
		cout<<rollno<<" "<<age<<endl;
	}

 void setage(int n){
 	// we can add constraints on private properties
 	// one of the benifits of being private property
 	if(age>100){
 		return ;
 	}
 	age = n;
 } 

};
using namespace std;
int main(){
student s1;
s1.rollno=21;
// s1.age =34 ccant be done as it is a private property 
// so it can only be done using th functions

student *s2= new student;
s2->rollno =23;
//s1->age = 12;
// cant be done as age being a private property

// here if we call
s1.display();
// age will contain a garbage value 

s1.setage(34);
s2->setage(12);

s1.display();
s2->display();

}