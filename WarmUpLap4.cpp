# include <iostream>
# include <math.h>
using namespace std;
double babyloianRoot(double n);

int main()
{
	char h;
	do
	{
		int n;
		cout<<"enter a vaule: ";
		cin>>n;
		cout<<"square root of "<<n<<" is "<<babyloianRoot(n)<<endl;
		cout<<"continue (y/n)"<<endl;
		cin>>h;
	}
	while(h!='n');
		return 0;
}

double babyloianRoot(double n)
{
	return sqrt(n);
}