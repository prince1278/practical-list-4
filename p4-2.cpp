#include<iostream>
using namespace std;
class demo{
	
	static int count;
	public:
	
	static increment()
	{
		count++;
	}
	
};
int demo::count=3;
int main()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	demo p;
	demo::increment();
	demo::increment();
	demo::increment();
	
	cout<<"this count->"<<p.increment();
	
}
