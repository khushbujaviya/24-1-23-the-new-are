//1. WAP to create a class in which Read and Print House details along with Room details.
#include<iostream>
using namespace std;

class House{
	private:
		int room;
		int windo;
		int door;
		int chair;
	public:
		void read(){
			cout<<"enter room: ";
			cin>>room;
			
			cout<<"enter windo: ";
			cin>>windo;
			
			cout<<"enter door: ";
			cin>>door;
			
			cout<<"chair: ";
			cin>>chair;
		}
		
		void print()
			{
		cout<<room<<endl;
		cout<<windo<<endl;
		cout<<door<<endl;
		cout<<chair<<endl;
	}	

};
main(){
	House obj1;
	obj1.read();
	obj1.print();
	}
