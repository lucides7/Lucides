#include <iostream>
using namespace std;
// NDL
int main()

{
	int x =3,a,b;
	if ( a < 0)
	{
		if ( b < 0)
		{
			x++;
		}
		else if ( b>0)
		{
			x--;
		}
		else 
		{
			x = x *2;
		}
	}
	if (a < 5)
	{
		if (b < 5)
		{
			x--;
		}
		if ( b == 0)
		{
			x = x* 2;
		}
	}
	else {
		x = x * 2;
	}
}