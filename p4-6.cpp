
#include <iostream>
using namespace std;
class Product 
{
public:
    int MFYear;
    int expYear;

    Product(int mYear, int eYear)
	 {
        MFYear = mYear;
        expYear = eYear;
    }

    int calDifference() {
        return expYear - MFYear;
    }
};

int main() 
{
    cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	int MFYear, expYear;
    cout << "Enter manufacture year-> ";
    cin >> MFYear;
    cout << "Enter expiry year->";
    cin >> expYear;

    Product p(MFYear, expYear);

    
    int dif = p.calDifference();
    
	if(MFYear>expYear)
    {
    	cout<<"Invalid Entered Year Check This Again ->)";
	}
	else
	{
	cout << "The difference between manufacture year and expiry year is->" << dif << " years" <<endl;
	}
	
    return 0;
}


