//Employee salary program
/*NAME:TDOLAR KNOWEN
  REG NO.:CT101/G/26686/25
  COURSE:COMPUTER SCIENCE
  YEAR:2.1*/
#include <iostream> //cout,cin
using namespace std;

float CalculateTax(int gross_salary)
{
	float Tax_amount;
	
	if(gross_salary<30000)
	{
		Tax_amount=0.05*gross_salary;
	}
	else if(gross_salary>=30000 && gross_salary<=59999)
	{
		Tax_amount=0.1*gross_salary;
	}
	else
	{
		Tax_amount=0.15*gross_salary;
	}
}

int main()
{
	int gross_salary;
	int net_salary;
	float tax_amount,result;
	
	//prompt user
	cout<<"enter gross_salary:"<<endl;
	cin>>gross_salary;
	
	//call function
	result=CalculateTax(gross_salary);
	
	//calculate net_salary
	net_salary=gross_salary-tax_amount;
	
	//Display results
	cout<<"EMPLOYEE SALARY PROGRAM:"<<endl;
	cout<<"=======================:"<<endl;
	cout<<"gross_salary:"<<gross_salary<<endl;
	cout<<"tax_amount:"<<tax_amount<<endl;
	cout<<"net_salary:"<<net_salary<<endl;
	cout<<"=======================:"<<endl;
	
	return 0;
}

