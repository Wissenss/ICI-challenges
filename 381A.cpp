#include <iostream>
using namespace std;

int main()
{
	int n, left, right, p1, p2, max;
	cin>>n;

	left = 0;
	right = n-1;

	int cards[n];
	for(int i=0; i<n; i++)
	{
		cin>>cards[i];
	}

	for(int i=0; i<n; i++)
	{
		if(cards[left]>cards[right])
		{
			max = cards[left];
			left++;
		}
		else
		{
			max=cards[right];
			right--;
		}

		if(i%2)
		{
			p1 += max;
		}
		else
		{
			p2+= max;
		}
	}

	cout<<p2<<" "<<p1;
}