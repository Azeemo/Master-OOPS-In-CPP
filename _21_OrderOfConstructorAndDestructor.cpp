#include <iostream>
using namespace std;

/// CLASS 1 

class Vehicle {
	private :
		int maxSpeed;

	protected :
		int numTyres;

	public :
		string color;

	
    Vehicle(){
		   cout<<"Vehicle default constructor"<<endl;
		}
		
		~Vehicle(){
		   cout<<"Vehicle destructor"<<endl;
		}

};

// CLASS 2 
class Car : public Vehicle{
   public:
       int numGears;
        Car() {
          cout<<"Car default construtor"<<endl;
        }
        ~Car(){
           cout<<"Car destructor called "<<endl;
        }
       void print(){
           cout<<"Num Tyres : "<<numTyres<<endl;
           cout<<"Color : "<<color<<endl;
           cout<<"Num Gears :"<<numGears<<endl;
       }
};


int main() {
   Vehicle v1;
   Car c1;



	return 0;
}

