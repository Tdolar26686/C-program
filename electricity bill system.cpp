//Electricity Bill
/*NAME:TDOLAR KNOWEN
  REG:CT101/G/26686/25
  COURSE:COMPUTER SCIENCE
  YEAR:2.1*/
#include <iostream> //cout,cin
using namespace std;

float CalculateBill(int unitsconsumed)

{
   float Bill;
  if (unitsconsumed<=100)
  {
	Bill=unitsconsumed*10;
	}
	else if(unitsconsumed>100 && unitsconsumed<200)
	{
		Bill=100*10+(unitsconsumed-100)*15;
	}
	else {
		Bill=100*10+(unitsconsumed-100)*15+(unitsconsumed-200)*20;
	}
}
int main( )
{
	int unitsconsumed;
	float TotalBill;
	
	//Prompt user 
	cout<<"enter unitsconsumed:"<<endl;
	cin>>unitsconsumed;
	
	//Call function
	TotalBill=CalculateBill(unitsconsumed);
	
	//Display results
	cout<<"ELECTRICITY BILL:"<<endl;
	cout<<"unitsconsumed:"<<unitsconsumed<<endl;
	cout<<"TotalBill:"<<TotalBill<<endl;
	cout<<"============:"<<endl;
	
	return TotalBill;
}
