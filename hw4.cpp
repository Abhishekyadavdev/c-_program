#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for( int i=2;i<num;i++){
if(num%i==0){
    cout<<num<<"is not prime";
    break;
}
else{
    cout<<num<<"is prime";
    break;
}
    }
    return 0;
}