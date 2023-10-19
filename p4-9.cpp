#include<iostream>
using namespace std;
class add{
		int x,y;
		friend void getdata(add &n);
	public:
		void putdata()
		{
			cout<<"this answer-> "<<x+y;
		}
};
void getdata(add &n)
{
	cout<<"enter the number->";
	cin>>n.x;
	cout<<"enter the number->";
	cin>>n.y;
}
int main()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	add p;
	getdata(p);
	p.putdata();
	
	return 0;
}


