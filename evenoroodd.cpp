#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr the number:";
    cin>>n;
    int i;
    for(i=1;i<=n;i++){
        if(i%2==0){
         continue;
        }
        cout<<i<<endl;
    }
    return 0;
}