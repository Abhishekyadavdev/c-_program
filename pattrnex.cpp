#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while (j<=n)
        {
            // you can also print'a'+i-1beacuse with an int
            // 'a' will get typecasted to 65
            cout<<(char)(65+i-1)<<" ";
            j=j+1;
        }
        i=i+1;
        cout<<endl;

    }
    return 0;
}