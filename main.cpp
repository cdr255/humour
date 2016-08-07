#include "humour-cards.hpp"
using namespace std;

int main(int argc, char** argv)
{
  random_device rd;
  default_random_engine generator;
  generator.seed(rd());
  uniform_int_distribution<int> distribution(1,40);
  int x = distribution(generator);

  card_text_display(draw_card(x));
  
  return 0;
}



