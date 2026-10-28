//Classes and Objects
/*Name:Tdolar Knowen
  Reg.NO:CT101/G/26686/25
  Course:Computer Science
  Year:2.1*/
#include <iostream>
using namespace std;

class Car{
	
	 public:
	 	string brand,model;
	 	float price;
	 	int mileage;
	 	
     public:
     	void display(){
     		cout<<"brand:"<<brand<<endl;
     		cout<<"model:"<<model<<endl;
     		cout<<"price:"<<price<<endl;
     		cout<<"mileage:"<<mileage<<endl;
		 }
	    void drive(int distancedriven)
	    {
	    	mileage=mileage+distancedriven;
	    	cout<<"distanedriven:"<<distancedriven<<endl;
	    	cout<<"updtedmileage:"<<mileage<<endl;
	    }
};
   int main()
   {
   	Car car1;
   	car1.brand="Toyota";
   	car1.model="Corolla";
   	car1.price=20000;
   	car1.mileage=5000;
   	
   	car1.display();
   	 car1.drive(150);
   	 car1.drive(300);
   }
