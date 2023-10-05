#include<iostream>
using namespace std;

class Fraction {
  private:
      int numerator;
      int denominator;

  public:
    // we have created a prametized constructor
    // we dont want fraction to contain garbage values

    Fraction(int numerator,int denominator){
        this->numerator = numerator;
        this->denominator = denominator;   /// mandatory
    }

// here object will call the print function
    // and its address will be stored in this keyword
    void print(){
      cout<<this->numerator<<"/"<<denominator<<endl; /// optional
    }

// HERE IS THE ADD FUNCTION
    // THIS FUNCTION WILL ADD F2 IN F1
    // F1 = F1+F2 AND F2 REMAIN unchanged
    //  HeRE we will pass f2 as argument 
    // f1 is stored in this keyword

// PURELY LOGICAL 
    // x and y created to find numerator
    void add(Fraction const &f2){
       int lcm = this->denominator * f2.denominator;  /// optional
       int x = lcm/this->denominator;   /// optional
       int y = lcm/f2.denominator;
       int num = x*numerator + y*f2.numerator;

       /// store result in f1
       this->numerator = num;   /// optional
       this->denominator = lcm;

       simplify();
       // actually it is this->simplify()
    }

    void multiply(Fraction const &f2){
      int num = this->numerator*f2.numerator;
      int den = this->denominator*f2.denominator;
      this->numerator=num;
      this->denominator=den;
      simplify();
    }

    void simplify(){
       int gcd = 1;
       int j = min(this->numerator,this->denominator);  /// optional
       for(int i=1;i<=j;i++){
        if(numerator%i==0 && denominator%i==0){
            gcd = i;
        }
       }
       
     /// inbuilt function for gcd   =    __gcd(a,b);
     /// int c = __gcd(a,b);  
    /// simplify
    numerator = numerator/gcd;
    denominator = denominator/gcd;
    }

} ;

int main(){

  /// WE HAVE ADDED CONST &F2 IN THE FUNCTION
  // THIS IS BCAUSE WE DONT WANT ANYONE TO CHANGE THE VALUE OF F2
  // we not want f2=-1
  // so in order to avoid this we pass CONST &F2 
  //this WILL AVOID CHANGE IN THE FRACTION F2

   Fraction f1(10,2);
   Fraction f2(15,4);

   f1.add(f2);
   f1.print();
   f2.print();

 Fraction f3(10,2);
   Fraction f4(15,4);
   f3.multiply(f4);
    f3.print();
   f4.print();


   return 0;
}
