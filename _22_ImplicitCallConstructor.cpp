#include <iostream>
using namespace std;

class Vehicle {
	private :
		int maxSpeed;

	protected :
		int numTyres;

	public :
		string color;

		/*Vehicle(){
		   cout<<"Vehicle default constructor"<<endl;
       // as created parametrized 
       soo default is NO LONGER AVALAIBLE
		}
		*/

		Vehicle(int z){
           cout<<"Vehicle parameterised constructor"<<endl;
		   maxSpeed = z;
		}
		~Vehicle(){
		   cout<<"Vehicle destructor"<<endl;
		}

};

class Car : public Vehicle{
   public:
       int numGears;
       
       // here ->  : is used to IMPLICITY CALLING THE 
       // -> PARAMETRIZED CONSTRUCTOR OF VEHICLE

       // NOW HERE ONE PROPERTY IS INTIALIZED BY VEHICLE AS IT IS OF IT
       // AND OTHER BY  THE CAR ITSELF


    Car(int x,int y): Vehicle(x) {
         numGears = y;
          cout<<"Car parameterised construtor"<<endl;
        }
        ~Car(){
           cout<<"Car destructor"<<endl;
        }
       void print(){
           cout<<"Num Tyres : "<<numTyres<<endl;
           cout<<"Color : "<<color<<endl;
           cout<<"Num Gears :"<<numGears<<endl;

       }
};

class HondaCity:public Car{
   public:
       HondaCity(int x,int y):Car(x,y) {
          cout<<"HondaCity parameterised constructor"<<endl;
       }
       ~HondaCity(){
           cout<<"HondaCity destructor"<<endl;
       }
};
int main() {
   Car c(100 , 6);
   
	return 0;
}

