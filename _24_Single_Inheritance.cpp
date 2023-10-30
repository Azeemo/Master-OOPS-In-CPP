#include<bits/stdc++.h>
using namespace std;

class teacher{
public:
	string name;
	int age;

 void print(){
 	cout<<"Print function of teacher"<<endl;
 }

};

class student : public teacher{
public:
	int rollno;

 void print(){
 	cout<<"Print function of teacher"<<endl;
 }
 
 };
int main(){

student s1;

return 0;
}