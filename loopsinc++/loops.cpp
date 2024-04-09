#include<iostream>
using namespace std;
int main(){
    // for loop
    int a = 5;
    for (int i = 0; i <5; i++)
    {
        cout<<a+i<<endl;
            }



    // while loop
    while (a<10)
    {
        cout<<a<<endl;
        a++;
    }


    
    // do while loop

    int b=1;
    do
    {
        b++;
        cout<<b<<endl;
    } while (b<10);




    // for each loop
    int arr[]={1,2,3,4,5};
    for (int i : arr)
    {
        cout<<i<<endl;
    }
    // break and continue



    for (int i = 0; i < 10; i++)
    {
        if (i==5)
        {
            break;
        }
        cout<<i<<endl;
    }
    for (int i = 0; i < 10; i++)
    {
        if (i==5)
        {
            continue;
        }
        cout<<i<<endl;
    }
    
}