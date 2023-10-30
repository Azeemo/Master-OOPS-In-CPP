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

       }
};

class Truck:public Vehicle{
  public :
  string truckColor;
};

class cycle:public Vehicle{
  public :
  string cyclerims;
};



int main() {
 
cycle c ;   
	return 0;
}

