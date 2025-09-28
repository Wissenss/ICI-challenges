#include <iostream>
#include <string>
using namespace std;

int main()
{
  string input;

  getline(cin, input);

  if (input[0] > 90)
  {
    input[0] = input[0] - 32;
  }

  cout << input;
}