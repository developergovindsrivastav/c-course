#include<iostream>
using namespace std;
void funcout(int b,string a = "cout are dispayed"){
 cout<<a<<b<<endl;
}
class shop{
    int id,price;
    public:
    void setdata(int a,int b){
        id=a;
        price=b;
    }
    void getdata(){
        cout<<"the id of the product is "<<id<<endl;
        cout<<"the price of the product is "<<price<<endl;
    }
};
int main(){
int p,q;
shop *ptr = new shop[5];
shop *ptrtemp = ptr;
for(int i=1;i<5;i++){
    cout<<"enter the id and price of the product"<<endl;
    cin>>p>>q;
    (*ptr).setdata(p,q);
    ptr++;
}
for(int i=1;i<5;i++){
    ptrtemp->getdata();
    ptrtemp++;
}
return 0;   
}