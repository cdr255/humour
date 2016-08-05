#include <iostream>
#include <string>
#include <random>

using namespace std;

class Card
{
public:
  string name;
  string type;
  int number;
  string symbol;
  string describe;
  Card (string, string, int, string, string);
};

Card::Card (string n, string t, int m, string y, string d)
{
  name = n;
  type = t;
  number = m;
  symbol = y;
  describe = d;
}

void display(Card n)
{
  cout << "\n==============================\n";
  cout <<   "  "<< n.number << " " << n.name <<" \n";
  cout <<   "  "<< n.type << " (" << n.symbol << ") \n\n";
  cout <<   " "<< n.describe << "\n\n";
  cout << "\n==============================\n";
}

Card knight_of_blood ("Knight of Blood", "Sanguine", 01, "Shield", "A knight possessed of loving \n  protection, willing to give \n  his life to save Yours.");
Card knight_of_gall  ("Knight of Gall", "Choleric", 11, "Sword", "A knight possessed of fierce \n  desctruction, willing to take \n  Your life to save his.");

int main(int argc, char** argv)
{
  default_random_engine generator;
  uniform_int_distribution<int> distribution(1,2);
  int x = distribution(generator);
  
  switch (x)
    {
    case 1:
      display(knight_of_blood);
      break;
    case 2:
      display(knight_of_gall);
      break;
    default:
      cout << "Error: Non-card Result!\n";
    }
  
  return 0;
}
