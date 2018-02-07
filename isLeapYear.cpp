# include <iostream>
using namespace std;
bool isLeapYear(int year);

int main()
{
	char y;
	do
	{
		int year;
		cout<<"enter a year value: ";
		cin>>year;
		if(isLeapYear(year)==true)
			cout<<year<<" is a leap year"<<endl;
		else
			cout<<year<<" is not a leap year"<<endl;
		cout<<"continue (y/n): ";
		cin>>y;
	}
	while(y!='n');
	return 0;
}

bool isLeapYear(int year)
{
	if((year % 100 != 0)&&(year % 4 == 0)||(year % 400 ==0))
		return true;
	else
		return false;
}