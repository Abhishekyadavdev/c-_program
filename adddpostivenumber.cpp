#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter a number:";
    cin>>n;
   while(n>=0){
    sum+=n;
    cout<<"enter  number:";
    cin>>n;
   }
cout<<"\nthe sum is"<<sum<<endl;
    return 0;

}