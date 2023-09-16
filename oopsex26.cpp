#include<iostream>
using namespace std;
class employee{
    public:
    int id;
    string name;
    float salary;

void insert(int i, string n, float s){
    id =i;
    name =n;
    salary =s;

}
void display(){
                cout<<id<<"  "<<name<<salary<<endl;    
        }    


};
int main(){
    employee e1; //creating an object of Student   
    employee e2; //creating an object of Student  
    e1.insert(201, "Sonoo",99999999);    
    e2.insert(202, "Nakul",8888888);    
    e1.display(); 
    e2.display();  
}