#include<iostream>
using namespace std;
int main (){
int arr[4];
int size;
cout<<"enter the element of an array";
cin>>size;
for (int idx=0; idx<size;idx++){
    cin>>arr[idx];// it will store in the index of an array
}

cout<<"the entered value is "<<endl;
for( int idx=0; idx<4; idx++){
    cout<<arr[idx]<<endl;
}

return 0;
}