#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;  
    // for loop
    for(int i=0;i<=5; i++){
        int elemnt;
        cin>>elemnt;
        v.push_back(elemnt);
    }
    for(int i=0;i<=v.size(); i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    v.insert(v.begin()+2,6);
    for(int ele:v){
        cout<<ele<<" ";
    }
     v.erase(v.end()-2);
  cout<< endl;
    
   
    cout<<endl;
    // while loop
    // int idx=0;
    // while(idx<v.size()){
    //     cout<<v[idx]<<" ";
    // }
return 0;
}