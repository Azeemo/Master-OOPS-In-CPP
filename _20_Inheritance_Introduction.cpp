#include <iostream>
using namespace std;

class Vehicle {
	private :
		int maxSpeed;

	protected :
		int numTyres;

	public :
		string color;

};

class Car : public Vehicle{
   public:
       int numGears;

       void print(){
           cout<<"Num Tyres : "<<numTyres<<endl;
           cout<<"Color : "<<color<<endl;
           cout<<"Num Gears :"<<numGears<<endl;
          // cout<<"Max speed : "<<maxSpeed<endl;
       }
};
int main() {
    Vehicle v;
    v.color = "Blue";
    //v.maxSpeed = 4; //  private property
    //v.numTyres = 4; // protected so cant be accesed in main class

    Car c;
    c.color = "Black";
    //c.numTyres = 4; // protected so cant be assesed
    c.numGears = 5;

	return 0;
}

