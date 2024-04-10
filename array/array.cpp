#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
// value we can find 
cout<<arr[0]<<endl;
cout<<arr[1]<<endl;
// we can change the value
arr[2]=100;
cout<<arr[2]<<endl;
cout<<arr[3]<<endl;
cout<<arr[4]<<endl;




// value through loop
for(int i=0;i<5;i++){
    cout<<arr[i]<<endl;
}
// pointers of array
int (*p)[5] = &arr;
printf("%d",*p);
return 0;
}