//calculate the sum of all the elements in the given array
#include<iostream>
using namespace std;
int main (){

int shelu[]={3,4,10,10};
int size = sizeof(shelu)/sizeof(shelu[0]);    //this is how we calculate the size of any array
int sum = 0;

for (int i=0; i<size; i++){

sum+=shelu[i];       //we are adding all the values in the sum of the array
}
cout<<sum<<endl;


return 0;
}