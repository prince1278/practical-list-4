 
#include<iostream>
using namespace std;
class friends{
		int a;
		friend void getdata(friends &f);
	
	public:
		void putdata()
		{
			cout<<"Value of a -> "<<a;
		}
};
void getdata(friends &f)
{

	cout<<"Enter the value of a-> ";
	cin>>f.a;
}
int main()
{
    cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	friends f;
	getdata(f);
	f.putdata();
}
