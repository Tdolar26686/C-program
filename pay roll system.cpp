#include<iostream>
#include<string>
using namespace std;

string EmployeeName;
float BasicSalary,overtimeHours,NetSalary;
float overtimePay,NetSalay,RatePerHour;

void getEmployeeDetails()
{
	cout<<"Enter EmployeeName:"<<endl;
	cin>>EmployeeName;
	
	cout<<"Enter BasicSalary:"<<endl;
	cin>>BasicSalary;
	
	cout<<"Enter overtimeHours:"<<endl;
	cin>>overtimeHours;
}
//calculate overtime  pay
float calculateovertimePay()
{
	overtimePay=overtimeHours* RatePerHour;
}

//calculate Net Salary
float calculateNetSalary()
{
	NetSalary=BasicSalary+overtimePay;
}
//Display Pay Slip
void displayPaySlip()
{

cout<<"===PAYSLIP===:"<<endl;
cout<<"================" <<endl;
cout<<"EmployeeName:"<<EmployeeName<<endl;
cout<<"BasicSalary:"<<BasicSalary<<endl;
cout<<"overtimeHours:"<<overtimeHours<<endl;
cout<<"overtimePay:"<<overtimePay<<endl;
cout<<"NetSalary:"<<NetSalary<<endl;
cout<<"===========:"<<endl;
}

int main()
{
	
	// call function
	getEmployeeDetails();
	calculateovertimePay();
	calculateNetSalary();
	
	
	return 0;
}
