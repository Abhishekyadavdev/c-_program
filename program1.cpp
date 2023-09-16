#include<iostream>
using namespace std;

void printarray(int arr[],int size) {
      cout<<"print the araay "<<endl;
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" "<<endl;
      }
      cout<<"done "<<endl;
}


int main(){
int arr[15]={3,4,5};
int size=15;
printarray(arr,15);


    // declartion array..........>
     int array[10];
    // accessing the value.......>
     cout<<"the access the index 2"<<array[2]<<endl;
    // initializtion
    int v[6]={2,3,4,5,6,7};
    cout<<"index 4:"<<v[4]<<endl;
    cout<<"size of v:"<<sizeof(v)<<endl;
      cout<<"size of v:"<<sizeof(v)/sizeof(v[0])<<endl;
      int third[15]={1,3,4};
      int n=15;
      for(int i=0; i<n; i++) {
        cout<<third[i]<<" ";
      }
      cout<<"print the araay "<<endl;
    return 0 ;
}
