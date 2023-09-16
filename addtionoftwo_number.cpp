#include<iostream>
using namespace std;
class addtion{ 
    public:
    int num1,num2,sum;
    public:
    int input_number(){
        cout<<"enter the number: ";
        cin>>num1>>num2;
    }
    int find_num(){
        sum= num1+num2;
    }
    int print_sum(){
        cout<<"sum of the : "<<sum;
    }
};

int main(){
    addtion a1;
 a1.input_number();
 a1.find_num();
 a1.print_sum();
    return 0;
}