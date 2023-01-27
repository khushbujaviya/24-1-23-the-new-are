/*4. WAP to get and display 4 Cars information using class and object by including below mentioned attributes:
 car_id
 car_company_name
 car_color
 car_model
 car_release_year*/

#include<iostream>
using namespace std;

class car
{
	private:
		int car_id;
		char car_company_name[100];
		char car_color[20];
		char car_model[30];
		int car_release_year;
		
	public:
		void read()
		{
			cout<<"enter car id: ";
			cin>>car_id;
			
			cout<<"enter car company name: ";
			cin>>car_company_name;
		
			cout<<"enter car color: ";
			cin>>car_color;
			
			cout<<"enter car model: ";
			cin>>car_model;
			
			cout<<"enter car release year: ";
			cin>>car_release_year;
		}
		void print()
		{
		cout<<car_id<<endl;
		cout<<car_company_name<<endl;
		cout<<car_color<<endl;
		cout<<car_model<<endl;
		cout<<car_release_year<<endl;
		cout<<endl<<endl;	
		}
	};
	main(){
		car obj1,obj2,obj3,obj4;
		obj1.read();
		obj1.print();
		
		obj2.read();
		obj2.print();
		
		obj3.read();
		obj3.print();
		
		obj4.read();
		obj4.print();
		
	}

	
	
	
