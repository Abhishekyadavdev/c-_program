#include<iostream>
using namespace std;
class A {
    private:
   static int x;

    public:
    void dispaly_x(){
        cout<<"x="<<x<<endl;
    }
    void change_x(){
        x=5;
    }
    
};
int A::x=2;
int main(){
   A a1,a2;
   a1.dispaly_x();
   a2.dispaly_x();
   a1.change_x();
    a2.change_x();
    return 0;
}