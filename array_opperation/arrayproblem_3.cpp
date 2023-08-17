//search if a giveb element is present in the array or not if it is not ptesent then return -1 else return index
#include<iostream>
using namespace std ;
int main (){
int key;
cout<<"enter the element you want to insert"<<endl;
cin>>key;
int ans=-1;//we initalise the ans with -1 so that it will easy for us to return ans as -1 directly in the else condition
int shelu[7]={1,4,6,3,7,8,5};
int size=sizeof(shelu)/sizeof(shelu[0]);


for(int i=0;i<7;i++){ //here we can also write the size  after calculating the size of array using sizeof operator'''''
    if(shelu[i]==key){
ans =i;
break;
}
}
cout<<ans;

return 0;
}
