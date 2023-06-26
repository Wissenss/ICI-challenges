#include <iostream>
using namespace std;

int main()
{
	int shoes[4];
	int shoesToBuy = 0;
	for(int i=0; i<4; i++)
	{
		cin>>shoes[i];
		for(int j=0; j<i; j++)
		{
			if(shoes[j] == shoes[i])
			{
				shoesToBuy++;
				break;
			}
		}
	}

	cout<<shoesToBuy;
}