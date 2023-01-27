//2. WAP which illustrates the use of public and private access modifiers.

#include<iostream>
using namespace std;
class data{
	private:
		int a=100;
		int b=90;
	public:
		void display(){
			cout<<a<<endl;
			cout<<b<<endl;
		}
};
main(){
	data obj;
	obj.display();
}
