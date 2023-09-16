#include<iostream>
using namespace std;
class addtion {
    int num1,num2, sum;

    public:
    void input_number();
    void find_sum();
    void print_sum();

    void input_number(){
        cout<<"enter the two number"<<endl;
        cin>>num1>>num2;
    }
    void find_sum(){
        sum= num1+num2;
    }
    void print_sum(){
cout<<"addtion="<<sum;
    }
    
};
int main(){
    addtion a1;
    a1.input_number();
    a1.find_sum();
    a1.print_sum();
    return 0;
}