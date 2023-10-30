#include <iostream>
using namespace std;
//The concept of abstraction only shows necessary information to users.
// It reduces the complexity of the program by hiding the underlying
// implementation complexities of programs.

// FOR EG IN-BUILT SORT FUNCTION
// WE DONT KNOW THE INTERNAL IMPLEMENtation of the function
// we just know how to call that's all 
// which is an example of ABSTRACTION

// REASONS TO HIDE
// -> to avoid making errors / changes in inbuilt fnction
// -> to reduce the complexity for the end user



class Summation {
private:
	// private variables
	int a, b, c; 
public:
	void sum(int x, int y)
	{
		a = x;
		b = y;
		c = a + b;
		cout<<"Sum of the two number is : "<<c<<endl;
	}
};
int main()
{
	Summation s;
	s.sum(5, 4);
	return 0;
}
