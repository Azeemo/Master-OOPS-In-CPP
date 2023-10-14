#include<iostream>
using namespace std;
// OPERATOR OVERLOADING
// TO ENHANCE THE FUNCTIONALITY OF OPERATORS WE USE
// THE CONCEPT OF OPERATOR OVERLOADING
class Fraction {
	private :

		int numerator;
		int denominator;

	public :

		Fraction(int numerator, int denominator) {
			this -> numerator = numerator;
			this -> denominator = denominator;
		}

		void print() {
			cout << this -> numerator << " / " << denominator << endl;
		}

		void simplify() {
			int gcd = 1;
			int j = min(this -> numerator, this -> denominator);
			for(int i = 1; i <= j; i++) {
				if(this -> numerator % i == 0 && this -> denominator % i == 0) {
					gcd = i;
				}
			}
			this -> numerator = this -> numerator / gcd;
			this -> denominator = this -> denominator / gcd;
		}

		Fraction add(Fraction const &f2) const{
			int lcm = denominator * f2.denominator;
			int x = lcm / denominator;
			int y = lcm / f2.denominator;

			int num = x * numerator + (y * f2.numerator);

            /// numerator = num;
            /// denominator = lcm;

            Fraction fnew(num,lcm);  
            /// parametised constructor called
            fnew.simplify();
            return fnew;
		}

		Fraction operator+(Fraction const &f2) const {
			int lcm = denominator * f2.denominator;
			int x = lcm / denominator;
			int y = lcm / f2.denominator;

			int num = x * numerator + (y * f2.numerator);

            /// numerator = num;
            /// denominator = lcm;

            Fraction fnew(num,lcm);  /// parametised constructor called
            fnew.simplify();
            return fnew;
		}
		void multiply(Fraction const &f2) {
			numerator = numerator * f2.numerator;
			denominator = denominator * f2.denominator;

			simplify();
		}

		// FIRST CONST IS TO AVOID ILLEGAL CHANGES in f2
		// & is used to avoid calling the copy constructor
		// next CONST is used to avoid changes in any object
		// it passes the criteria of CONST 
		// as it does not make any changes and rerturn a new fraction
		Fraction operator*(Fraction const &f2) const {
		   int n = numerator * f2.numerator;
		   int d = denominator * f2.denominator;

		   Fraction fnew(n,d);
		   fnew.simplify();
		   return fnew;
		}

		bool operator==(Fraction const &f2) const {
		   return (numerator == f2.numerator && denominator == f2.denominator);
		}

};

int main() {
	Fraction f1(10, 2);
	Fraction f2(15, 4);

	// TO DO THIS WE NEED TO MAKE AN ADD FUNCTION
	// WHICH WILL RETURN A NEW FRACTION
	Fraction f3 = f1.add(f2);
  


// HERE THE CONCEPT OF OPERTATOR OVERLOADING COMES 
    Fraction f4 = f1 + f2;
// f1 is stored in the this keyword 
   // f2 is passed as argument in the function
    // and we have + as operator functiomn


	f1.print();
	f2.print();
	f3.print();
	f4.print();

	Fraction f5 = f1 * f2;
	f5.print();

	if(f1==f1){
        cout<<"equal"<<endl;
	}else{
	    cout<<"Not equal"<<endl;
	}

     return 0;
}
