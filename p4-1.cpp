m#include<iostream>
using namespace std;
class employee{
	private:
		int emp_ID;
		string emp_name;
	public:
		void getdata ()
		{
		cout<<"enter the id->";
		cin>>emp_ID;
		cout<<"enter the name->";
		cin>>emp_name;
		}
		
		void putdata()
		{
			cout<<"enter id->"<<emp_ID<<endl;
			cout<<"enter name->"<<emp_name<<endl;
		}
};
int main()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
		
	int n;
	employee p[10];
	cout<<"enter the size of array ->";
	cin>>n;
	for (int i=0;i<n;i++)
	{
		p[i]. getdata();
	}
	for (int i=0;i<n;i++)
	{
		p[i]. putdata();
	}
}
