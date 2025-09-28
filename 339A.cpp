#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  string input;

  getline(cin, input);
  
  // input = "3+2+1+2"

  vector<int> numbers = {};

  for (int i = 0; i < input.length(); i = i + 2)
  {
    numbers.push_back(input[i] - 48);
  }

  // numbers = [3, 2, 1, 2]

  // insertion sort

  for (int i = 1; i < numbers.size(); i++)
  {
    int key = numbers[i];

    int j = i - 1;

    while (j >= 0 && key < numbers[j])
    {
      numbers[j + 1] = numbers[j];
      j = j - 1;
    }

    numbers[j + 1] = key;
  }

  for(int i = 0; i < numbers.size(); i++)
  {
    cout << numbers[i];

    if (i != numbers.size() - 1)
    {
      cout << "+";
    }
  }
}