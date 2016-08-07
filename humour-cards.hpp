#include <iostream>
#include <string>
#include <random>

class Card
{
public:
  std::string name;
  std::string type;
  int number;
  std::string symbol;
  std::string describe;
  Card (std::string, std::string, int, std::string, std::string);
};

Card draw_card(int);
void card_text_display(Card);



