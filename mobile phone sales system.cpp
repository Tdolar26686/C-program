//Mobile Phone Sales System
/*NAME:TDOLAR KNOWEN
  REG NO.:CT101/G/26686
  COURSE:COMPUTER SCIENCE
  YEAR:2.1*/
#include<iostream>//cout,cin
using namespace std;

int main()
{

string customername;
string phonemodel;
int quantity,totalsales;
float price;


//prompt user
cout<<"Enter customername:"<<endl;
cin>>customername;

cout<<"Enter phonemodel:"<<endl;
cin>>phonemodel;

cout<<"Enter quantity:"<<endl;
cin>>quantity;

cout<<"Enter price:"<<endl;
cin>>price;

//calculate total sales
totalsales= quantity*price;

//Display results
cout<<"SALES RECEIPT:"<<endl;
cout<<"==============:"<<endl;
cout<<"customername:"<<customername<<endl;
cout<<"phonemodel:"<<phonemodel<<endl;
cout<<"quantity:"<<quantity<<endl;
cout<<"priceperphone:"<<price<<endl;
cout<<"==============:"<<endl;
cout<<"totalsales:"<<totalsales<<endl;
cout<<"=============:"<<endl;

return 0;
}


