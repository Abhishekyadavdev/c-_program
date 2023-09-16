#include<iostream>
using namespace std;
class addtion{ 
    
    int num1,num2,sum;
    public:
   int input_number();
  int  find_num();
   int print_sum();
};
    
    int addtion:: input_number(){
        cout<<"enter the number: ";
        cin>>num1>>num2;
    }
    int addtion:: find_num(){
        sum= num1+num2;
    }
    int addtion:: print_sum(){
        cout<<"sum of the : "<<sum;
    }


int main(){
    addtion a1;
 a1.input_number();
 a1.find_num();
 a1.print_sum();
    return 0;
}