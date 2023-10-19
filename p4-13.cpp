#include<iostream>
using namespace std;
class demo{
		int l,b;
	public:
		demo()
		{
			cout<<"enter the length is-> ";
			cin>>l;
			cout<<"enter the breath is->";
			cin>>b;
			
			cout<<"this len and bre -> "<<l*b;
		} 
		~demo(){};
};
int main()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	demo p1;
}
