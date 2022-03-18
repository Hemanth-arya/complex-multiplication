#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
		void getvalue()
		{
			cout<<"Enter the value of Complex Numbers a,b:";
			cin>>a>>b;
		}	
		complex operator*(complex ob)
		{
			complex t;
			t.a=a*ob.a-b*ob.b;
			t.b=a*ob.b+b*ob.a;
			return(t);
		}
		void display()
		{
			cout<<a<<"+"<<b<<"i"<<"\n";
		}
};

int main()
{
	complex obj1,obj2,result;

	obj1.getvalue();
	obj2.getvalue();

	result = obj1*obj2;

	cout<<"Input Values:\n";

	obj1.display();
	obj2.display();

	cout<<"Result:"<<endl;

	result.display();

	return(0);
}1
