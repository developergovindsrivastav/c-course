#include<iostream>
using namespace std;
class shop{
int price[100];
    int product[100];
    int counter = 0;
    public:
      void initcounter(){counter = 0;}
      void setprice(){
          cout<<"enter the productid of the product" <<counter+1<<endl;
          cin>>product[counter];
          cout<<"enter the price of the product"<<endl;
          cin>>price[counter];
          counter++;
      }
      void getprice(){
          for(int i=0;i<counter;i++){
              cout<<"the price of the product with productid "<<product[i]<<" is "<<price[i]<<endl;
          }
      }
};
int main(){
    shop dukaaan;
    dukaaan.initcounter();
    for (int i = 0; i < 5; i++)
    {
        dukaaan.setprice();
    }
    
    dukaaan.setprice();
    dukaaan.getprice();
return 0;
}