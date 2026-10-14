//Driving school performance system
#include<iostream>//cout,cin
using namespace std;

int main()
{
	string studentname,testresults;
	float theorymarks;
	float practicalmarks;
	float Averagescore;
	
	cout<<"Enter studentname:"<<endl;
	cin>>studentname;
	
	cout<<"theorymarks:"<<endl;
	cin>>theorymarks;
	
	cout<<"practicalmarks:"<<endl;
	cin>>practicalmarks;
	
	Averagescore=(theorymarks+practicalmarks)/2;
	
	if(Averagescore >=50)
	{
		testresults='pass';
	}
	else
	{
		testresults='fail';
	}
	
	cout<<"============:"<<endl;
	cout<<"STUDENT RESULTS:"<<endl;
	cout<<"studentname:"<<studentname<<endl;
	cout<<"theorymarks:"<<theorymarks<<endl;
	cout<<"practicalmarks:"<<practicalmarks<<endl;
	cout<<"averagescore:"<<Averagescore<<endl;
	
	return 0;
}
	
	
	

