#include<iostream>
using namespace std;
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

            Fraction fnew(num,lcm);  /// parametised constructor called
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

		/// pre increment
		Fraction& operator++(){
			// reason of passing & ++ operator is in notes
		   numerator = numerator + denominator;
		   simplify();

		   return *this;
		   // we want to return the value so we do *this
		}

};


int main() {
	Fraction f1(10, 2);
	Fraction f2(15, 4);

    f1.print();

    Fraction f3 = ++(++f1);
    f1.print();
    f3.print();

	

     return 0;
}
