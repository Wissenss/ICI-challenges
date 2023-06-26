#include <iostream>
using namespace std;

int main()
{
	int n, h, currentHeight;
	int minimumWidth = 0;

	cin>>n>>h;

	for(int i=0; i<n; i++)
	{
		cin>>currentHeight;

		if(currentHeight<=h)
			minimumWidth += 1;
		else
			minimumWidth += 2;
	} 

	cout<<minimumWidth;
}