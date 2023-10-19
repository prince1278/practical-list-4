#include<iostream>
using namespace std;
class demo{
	int m,n;
	public:
		demo(int l,int b)
		{
			m=l;
			n=b;
		} 
		demo(demo &r){
		m=r.m;
		n=r.n;
		cout<<"this area of rectangle-> "<<m*n<<endl;
		cout<<"copy constructor";
		}
};
int main()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	demo p1(5,5),p2(p1);
}
