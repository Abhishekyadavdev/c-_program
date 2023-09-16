#include<iostream>
using namespace std;
class employee
{
    public:
    employee()
    {
        cout<<"constructor called"<<endl;
    }
    ~ employee()
    {
        cout<<"distructor called"<<endl;
    }
};
int main(void){
    employee e1;
    employee e2;
    return 0;

}