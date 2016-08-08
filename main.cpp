#include "humour-cards.hpp"
#include<unistd.h>
using namespace std;

random_device rd;
default_random_engine generator;
uniform_int_distribution<int> distribution(1,40);

void print_help();

int main(int argc, char** argv)
{
  generator.seed(rd());
  int x = distribution(generator);
  int optnum = 0;
  
  
  while ((optnum = getopt(argc, argv, "dh")) != -1)
    {
      switch (optnum) {
      case 'd':
	card_text_display(draw_card(x));
	break;
      case 'h':
	print_help();
	break;
      default: /* '?' */
	print_help();
	break;
      }
    }
  return 0;
}



void print_help()
{
  std::cout << "Usage: humour [-dh]\n\nAvailable Options:\n\n   -d: Draw random card.\n   -h: Print this help message\n";
}
