#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  int unique_characters_count = 0;
  string username;
  vector<char> unique_character = {};

  getline(std::cin, username);

  for (int i = 0; i < username.length(); i++)
  {
    char character = username[i];

    bool is_unique = true;

    for (int j = 0; j < unique_character.size(); j++)
    {
      if (character == unique_character[j])
      {
        is_unique = false;
        break;
      }
    }

    if (is_unique)
    {
      unique_character.push_back(character);
      unique_characters_count++;
    }
  }

  if (unique_characters_count % 2 == 0)
  {
    cout << "CHAT WITH HER!";
  }
  else
  {
    cout << "IGNORE HIM!";
  }
}