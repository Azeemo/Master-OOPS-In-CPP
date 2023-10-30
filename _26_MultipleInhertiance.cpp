#include<bits/stdc++.h>
using namespace std;
class teacher{
public:
string name;
int age;

void print(){
	cout<<"Teacher "<<endl;
}
};

class student {
public:
int identity_no;

void print(){
	cout<<"Student"<<endl;
}

};

class person : public teacher, public student{
public:
	int weight;
};

int main(){

person a;
// ORDER OF CONSTRUCTOR CALL
//ONE WRITTEN FIRST , ITS CONSTRUCTOR WILL BE CALLED FIRST
// SO HERE THE TECHER CONSTRUCTER CALLED FIRST


a.teacher::print();
// now if we call the PRINT FUNCTION
// we will get the ERROR AS AMBIGUITY
// AS WHICH PRINT FUNCTION TO CALL

// so for calling for specific class
// we use the scope resoluion operator

// if it has ots own print then it will be called 

// IMP POINT :
// IF WE HAVE SAME ATTRIBUTE AS
// string name
// string name
// in both we will get error as AMBIGUITY




return 0;
}