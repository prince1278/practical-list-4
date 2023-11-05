#include <iostream>
using namespace std;
class A 
{
public:
   int n=100;
   char ch='A';
   
   
   void disp(A a)
   {
      cout<<a.n<<endl;
      cout<<a.ch<<endl;
   }
};
int main() 
{
    cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
   A obj;
   obj.disp(obj);
   return 0;
}
