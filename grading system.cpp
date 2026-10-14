// grading system
/*NAME:TDOLAR KNOWEN
 REG. No.:CT101/G/26686/25
 COURSE:COMPUTER SCIENCE
 YEAR: 2.1*/
#include<iostream> //cout,cin
using namespace std;

int main( ){
	string studentname;
	char grade;
	float exammarks;
	
	cout<<"Enter student name:"<<endl;
	cin>>studentname;
	
	cout<<"Enter exam marks:"<<endl;
	cin>> exammarks;
	
	if(exammarks>=70)
	{
		grade='A';
		}
	else if (exammarks>=60)
	{
		grade = 'B';
		}
	else if(exammarks>=50)
	{
		grade = 'C';
		}
	else if (exammarks>=40)
	{
	    grade = 'D';
		}
	else{
	    grade = 'E';
		}
	cout<<"student name:"<<studentname<<endl;
	cout<<"exam marks:"<<exammarks<<endl;
	cout<<"Grade:"<<grade<<endl;
	cout<<".........."<<endl;
	
	return 0;
}

	
	
	
	

