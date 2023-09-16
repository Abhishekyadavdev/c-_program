#include<iostream>
using namespace std;
int main (){
 int n;
    cin>>n;
    int i=4;
    while(i<=n){
      int j=1;
        while(j<=n){
            cout<<n-j+1<<" ";
            j= j+1;
            
        }
        cout<<endl;
        i=i+1;

    }
    return 0;
}
