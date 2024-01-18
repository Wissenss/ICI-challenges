#include <iostream>
using namespace std;

int main()
{
	int max = 0;
	int a, b, c;
	int solutions[4];

	cin>>a;
	cin>>b;
	cin>>c;

	solutions[0] = a*b*c;
	solutions[1] = (a+b)*c;
	solutions[2] = a*(b+c);
	solutions[3] = a+b+c;

	for(int i=0; i<4; i++)
	{
		if (solutions[i] > max)
		{
			max = solutions[i];
		}
	}

	cout<<max;
}