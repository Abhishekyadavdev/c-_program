#include<iostream>
using namespace std;
class hero {
//   propreties
public:
int health ;
char level;
// void print(){
    // cout<<level<<endl;
// }
};
int main(){
hero ramesh;
ramesh.health =20;
ramesh .level ='a';
cout<<"health:"<<ramesh.health<<endl;
cout<<"size of ramesh is:"<<sizeof(ramesh)<<endl;
cout<<"health:"<<ramesh.level<<endl;
cout<<"health:"<<sizeof(ramesh.level)<<endl;
    return 0 ;
}
