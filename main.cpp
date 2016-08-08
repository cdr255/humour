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
  int optnum = 0;
  
  
  while ((optnum = getopt(argc, argv, "d:hi:")) != -1)
    {
      switch (optnum) {
      case 'd':
	for(int drawnumber = atoi(optarg);drawnumber > 0;drawnumber--)
	  {
	    int x = distribution(generator);
	    card_text_display(draw_card(x));
	  }
	break;
      case 'h':
	print_help();
	break;
      case 'i':
	{
	  int cardnumber = atoi(optarg);
	  if (cardnumber > 0 && cardnumber < 41)
	    card_text_display(draw_card(cardnumber));
	  else
	    print_help();
	  break;
	}
      default: /* '?' */
	print_help();
	break;
      }
    }
  return 0;
}



void print_help()
{
  std::cout << "Usage: humour [-dh]\n\nAvailable Options:\n\n";
  std::cout << "   -d <num>: Draw <num> random card(s).\n   -h: Print this help message\n   -i <1-40>: display info for card <num>\n";
}
