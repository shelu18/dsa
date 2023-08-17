#include<iostream>
using namespace std;
int main (){
int arr[4];
int size;
cout<<"enter the element of an array";
cin>>size; 
for (int idx=0; idx<size;idx++){
    cin>>arr[idx];
}

cout<<"the entered value is "<<endl; //using for each loop...
for( int ele:arr){
    cout<<ele<<endl;
}

return 0;
}