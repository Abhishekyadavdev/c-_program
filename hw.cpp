# include<iostream>
using namespace std;

int main (){
char ch;
cin>>ch;
if (ch>='a'&&ch <='z'){
    cout<<"this is lower case";

}
else if (ch>='A'&&ch<='Z'){
    cout<<"this is upar case";
} 
else{

  cout <<"this is numeric";  
}
return 0;
}