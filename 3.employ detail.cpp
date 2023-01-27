/*3. WAP to get and display 5 Employees' information using class and object by including below mentioned attributes:- 
 emp_id
 emp_name
 emp_role
 emp_age
 emp_salary
 emp_experience
 emp_city
 emp_company_name*/

#include <iostream>
using namespace std;

	class data{
		private:
			int emp_id;
			char emp_name[100];
			int emp_age;
 			int emp_salary;
			char emp_role[100];
 			char emp_experience[100];
		 	char emp_city[100];
		 	char emp_company_name[100];
		public:
			void read(){

			cout<<"enter id: ";
			cin>>emp_id;
			cout<<"enter name: ";
			cin>>emp_name;
			cout<<"emp_age: ";
			cin>>emp_age;
			cout<<"enter salary: ";
			cin>>emp_salary;
			cout<<"enter role: ";
			cin>> emp_role;
			cout<<"enter experience: ";
			cin>>emp_experience;
			cout<<"enter city: ";
			cin>>emp_city;
			cout<<"enter company_name: ";
			cin>>emp_company_name;

		}
		void print(){
			cout<<emp_id<<endl;
			cout<<emp_name<<endl;
			cout<<emp_age<<endl;
			cout<<emp_salary<<endl;
			cout<<emp_role<<endl;
			cout<<emp_experience<<endl;
			cout<<emp_city<<endl;
			cout<<emp_company_name;
			cout<<endl<<endl;
		}
	};
	main(){
		data obj1,obj2,obj3,obj4,obj5;
		obj1.read();
		obj1.print();

		obj2.read();
		obj2.print();

		obj3.read();
		obj3.print();

		obj4.read();
		obj4.print();

		obj5.read();
		obj5.print();
	}
