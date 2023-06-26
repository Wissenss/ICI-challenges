#include <iostream>
using namespace std;

int main()
{
	long long n, x, d, sorryKido = 0;
	char status;

	cin>>n>>x;

	for(int i=0; i<n; i++)
	{
		cin>>status>>d;

		if(status == '+')
		{
			x += d;
		}
		else
		{
			if(d > x)
			{
				sorryKido++;
			}
			else
			{
				x -= d;
			}
		}
	}

	cout<<x<<' '<<sorryKido;
}