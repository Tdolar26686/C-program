//student admission
/*NAME:TDOLAR KNOWEN
  REG. NO.:CT101/G/26686/25
  COURSE:COMPUTER SCIENCE
  YEAR:2.1*/
#include<iostream>
using namespace std;

int main()
{
	string studentname;
	int age;
	float studentscore;
	int num;
	char studentadmitted;
	char studentNotAdmitted;
	
	cout<<"Enter studentname:"<<endl;
	cin>>studentname;
	cout<<"Enter age:"<<endl;
	cin>>age;
	cout<<"Enter studentscore:"<<endl;
	cin>>studentscore;
	
	if(num >=18)
	{
		if (studentscore >= 50)
		{
			cout<<"Admitted:"<<endl;
		}
		else {
			cout<<"NotAdmitted:Lowscore:"<<endl;
		}
		}else 
		{
			cout<<"UnderAge:"<<endl;
		}
	
	if(studentadmitted)
	{
		cout<<"studentadmitted:"<<studentadmitted<<endl;
		
	}
	
	else{
		cout<<"studentNotAdmitted:"<<studentNotAdmitted<<endl;
	}
	
	return 0;
}
