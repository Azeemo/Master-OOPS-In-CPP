#include <iostream>
using namespace std;
class ComplexNumbers
{
    int RealPart;
    int ImaginaryPart;
public:
    ComplexNumbers(int real,int img){
          RealPart=real;
          ImaginaryPart=img;
    }

    void add(ComplexNumbers c2){
        int real_ans=this->RealPart + c2.RealPart;
        int img_ans=this->ImaginaryPart+c2.ImaginaryPart;
        this->RealPart=real_ans;
        this->ImaginaryPart=img_ans;
        
    }

    void multiply(ComplexNumbers c2){
         int real_ans=this->RealPart * c2.RealPart;
        int img_ans=this->ImaginaryPart*c2.ImaginaryPart;
         this->RealPart=real_ans;
        this->ImaginaryPart= ((-1) * img_ans);
      
    }

    void print(){
        cout<<this->RealPart<<" + j"<<this->ImaginaryPart<<endl;
    }
    

};

int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.add(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }   
}