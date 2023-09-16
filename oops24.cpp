#include<iostream>
using namespace std;
class hero {
//   propreties
private:
int health ;
public:
char level;
// constructor
hero(){
cout<<"constructir called" <<endl;
}
// paramterisesd constructor
hero(int health){
    cout<<"this->"<<this<<endl;
 this->   health =health;
}
hero(int health,char level){
    this->level =level;
    this-> health =health;
}
// void print(){
//     cout<<level<<endl;
// }
int gethealth(){
    return health;
}


char getlevel()
{
    return level;
}
void sethealth(int h){
    health =h;
}
void setlevel(char a){
    level= a;
}
};
int main(){
// object created satsically  
hero ramesh(30);
cout<<"Address of ramesh"<<&ramesh<<endl;
ramesh.gethealth();
// dynamically
// hero*h =new hero;
hero*h =new hero(11);

hero temp(8,'b');


// hero ramesh;
// cout<<"hi"<<endl;
// hero ramesh;
// cout<<"hello"<<endl;

























// hero ramesh;
// ramesh.sethealth(50);
// cout<<"ramesh health is :"<<ramesh.gethealth()<<endl;
// cout<<"health:"<<ramesh.gethealth()<<endl;
// hero a;
// a.sethealth(60);
// a.setlevel('b');
// cout<<"level is"<<a.level<<endl;
// cout<<"health is "<<a.gethealth()<<endl;
// // dyanamically
// hero*b=new hero;
// b->setlevel('a');
// b->sethealth(80);
// cout<<"level is"<<(*b).level<<endl;
// cout<<"health is "<<(*b).gethealth()<<endl;
    return 0;
}
