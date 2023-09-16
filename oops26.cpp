#include<iostream>
using namespace std;
class student{
    public:
    int id;
    string name;

void insert(int i, string n){
    id = i;
    name =n;
}

void display(){
       cout<<id<<"  "<<name<<endl;    
        }    


};
int main(){
    student s1; //creating an object of Student   
    student s2; //creating an object of Student  
    s1.insert(201, "Sonoo");    
    s2.insert(202, "Nakul");    
    s1.display();    
    s2.display();  
    return 0;  
 
}