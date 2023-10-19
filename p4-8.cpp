#include<iostream>
using namespace std;
class x{
	int a=5;
	friend class y;
};
class y{
	
	public:
	void display(x &x1)
	{
		cout<<"this value of x -> "<<x1.a;
	}
};
int main()
{
		cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	x x1;
	y y1;
	y1.display(x1);
}
