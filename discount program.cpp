//Discount Program
/*NAME:TDOLAR KNOWEN
  REG NO.:CT101/G/26686/25
  COURSE:COMPUTER SCIENCE
  YEAR: 2.1*/
  
#include <iostream> //cout,cin
using namespace std;

float calculateDiscount (int purchase_amount)
{
	float discount;
	
	if( purchase_amount<5000)
	{
		discount=0.05*purchase_amount;
	}
	else if(purchase_amount>=5000 && purchase_amount<=9999)
	{
		discount=0.1*purchase_amount;
	}
	else
	{
		discount=0.15*purchase_amount;
	}
}
	int main()
	{
		int purchase_amount;
		float result,final_amount_payable;
		float discount;
		//Prompt user
		cout<<"enter purchase_amount:"<<endl;
		cin>> purchase_amount;
		
		//call function
		result=calculateDiscount(purchase_amount);
		
		//Display results
		cout<<"DISCOUNT PROGRAM:"<<endl;
		cout<<"=================:"<<endl;
		cout<<"purchase_amount:"<<purchase_amount<<endl;
		cout<<"discount:"<<discount<<endl;
		cout<<"final_amount_payable:"<<final_amount_payable<<endl;
		cout<<"================:"<<endl;
		
		return discount;
	}
	
	
	
	
	

