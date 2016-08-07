#include <iostream>
#include <string>
#include <random>

class Card
{
public:
  std::string name;
  std::string type;
  std::int number;
  std::string symbol;
  std::string describe;
  Card (std::string, std::string, std::int, std::string, std::string);
};

Card::Card (std::string n, std::string t, std::int m, std::string y, std::string d)
{
  name = n;
  type = t;
  number = m;
  symbol = y;
  describe = d;
}

void display(Card n)
{
  std::cout << "\n==============================\n";
  std::cout <<   "  "<< n.number << " " << n.name <<" \n";
  std::cout <<   "  "<< n.type << " (" << n.symbol << ") \n\n";
  std::cout <<   " "<< n.describe << "\n\n";
  std::cout << "\n==============================\n";
}

Card knight_of_blood ("Knight of Blood", "Sanguine", 1, "Shield", "A knight possessed of loving \n  protection, willing to give \n  their life to save Yours.");
Card jester_of_hearts ("Jester of Hearts", "Sanguine", 2, "Dice",  "A jovial jester, who seeks \n  only to lighten people's hearts\n  in these trying times.");
Card esper_of_air ("Esper of Air", "Sanguine", 3, "Cloud", "As a child they wanted to escape the\n  limits of their life and body.\n  As they grew, they learned... And succeeded.");
Card hopeful_vagabond ("Hopeful Vagabond", "Sanguine", 4, "Cloak", "Taking cloak in hand, they \n  rushed off in search and protest.\n  They will travel until they find a solution.");
Card playful_child ("Playful Child", "Sanguine", 5, "Ball", "There are few who appreciate play \n  as earnestly as they once did, before \n  reaching adulthood. They realized this, and\n  never stopped playing.");
Card witch_of_spring ("Witch of Spring", "Sanguine", 6, "Candle", "Some forget themselves in the\n  harsh cold of hardships. Their job is\n  to make them realize their folly.");
Card cleric_of_courage ("Cleric of Courage", "Sanguine", 7, "Axe", "They realized one day that\n  it is up to them to help those around \n  them. This did not diminish their faith, \n  but expand it.");
Card carefree_musician ("Carefree Musician", "Sanguine", 8, "Tree", "Music allowed them to forget\n  the troubles of their day. Mastering\n  it, they set out to share that boon with \n  all they met.");
Card rainforest_guardian ("Rainforest Guardian", "Sanguine", 9, "Flower", "Native and sibling to\n  the myraid of the rainforest, they know\n  more than most the dangers that beauty \n  can belie...");
Card sanguine_scholar ("Sanguine Scholar", "Sanguine", 10, "Pen", "The sum of their knowledge \n  always coursed through their veins. Their\n  memoirs, therefore, are written in\n  their own blood.");
Card knight_of_gall  ("Knight of Gall", "Choleric", 11, "Sword", "A knight possessed of fierce \n  desctruction, willing to take \n  Your life to save theirs.");
Card jester_of_livers  ("Jester of Livers", "Choleric", 12, "Mask", "Finding humour in the tragedies\n  of life, they sought true detachment from\n  the world. They received it... But only\n  in their head.");
Card esper_of_fire  ("Esper of Fire", "Choleric", 13, "Flame", "Burning with passions they \n  could scarcely express, they wrestled with \n  their powers for years before gaining \n  this tenuous control over themselves.");
Card restless_vagabond  ("Restless Vagabond", "Choleric", 14, "Fist", "Though wrested from their rightful\n  place in life, they march ever forward \n  towards reclaiming what was \n  once theirs.");
Card ambitious_child  ("Ambitious Child", "Choleric", 15, "Star", "Told often of their own greatness,\n  they have no doubts in their mind of the\n  wonders waiting for them to \n  claim as their own.");
Card witch_of_summer  ("Witch of Summer", "Choleric", 16, "Bell", "Though the days are filled with\n  work and strife, the coming of the\n  evening tolls a different kind of work:\n clandestine, illicit, and needed.");
Card cleric_of_leadership  ("Cleric of Leadership", "Choleric", 17, "Fork", "The people needed someone to\n  help them unite. Seeing this need, they\n   stepped up to help... Not knowing\n  what would be expected of them.");
Card angry_musician  ("Angry Musician", "Choleric", 18, "Paper", "Frustrated and scorned by those\n  who felt art was worthless, they took\n  their pains and shared them in song.");
Card desert_guardian  ("Desert Guardian", "Choleric", 19, "House", "Those who are born with nothing\n  have a greater respect for that\n  which they have had to trade for.");
Card choleric_scholar  ("Choleric Scholar", "Choleric", 20, "Crystal", "They had to believe it would\n  all be worth it. Right up to the\n  end. And then, the lies became crystal\n  clear to all.");
Card knight_of_tears  ("Knight of Tears", "Melancholic", 21, "Dragon", "A knight who won at great cost,\n  their bittersweet victory doing very\n  little to raise their spirits.");
Card jester_of_spleens  ("Jester of Spleens", "Melancholic", 22, "Arrow", "Believing more often than\n  not that a lot of truth is said in jest,\n  they sought out to make fun of\n  the issues of their day.");
Card esper_of_earth  ("Esper of Earth", "Melancholic", 23, "Mountain", "Trying to connect to those\n  around them proved fruitless. Instead, it\n  was much easier to connect with\n  the earth itself. So, they did.");
Card despondent_vagabond  ("Despondent Vagabond", "Melancholic", 24, "Trap", "Crestfallen and ruined, they sit\n  on the sidelines and wait for fate to\n  fall one way or another.\n  It is not death they seek, though... But life.");
Card quiet_child  ("Quiet Child", "Melancholic", 25, "Snowflake", "Too often, they would miss the\n  more important things that happened by being\n  distracted. So now, they sit,\n  keeping their thoughts to themsleves.");
Card witch_of_autumn  ("Witch of Autumn", "Melancholic", 26, "Moon", "With the hardest work behind them\n  they can focus on making use of what they\n  have already. Hardness dissolves\n  under their skillful hands.");
Card cleric_of_analysis  ("Cleric of Analysis", "Melancholic", 27, "Skull", "A watchful and thoughtful eye\n  towards detail can trump even the strongest of\n  foes. They know this is true, and refuse to \n  act rashly.");
Card serious_musician  ("Serious Musician", "Melancholic", 28, "Coin", "In everything they do, they\n  carry with them a degree of respect for their\n  own actions. This is what separates\n  true greatness from mere popularity.");
Card tundra_guardian  ("Tundra Guardian", "Melancholic", 29, "Needle", "When there is little time for growth\n  and development, every second becomes\n  precious.");
Card melancholic_scholar  ("Melancholic Scholar", "Melancholic", 30, "Book", "Unfortunately, they find that the\n  world is not as magical as it could have been.\n  This knowledge makes mundane creation into magic,\n  instead of the reverse.");
Card knight_of_plague  ("Knight of Plague", "Phlegmatic", 31, "Gate", "A knight who refused to lose,\n  their selfish ambitions driving them to\n  deeds far worse than those of\n  their enemies.");
Card jester_of_brains  ("Jester of Brains", "Phlegmatic", 32, "Net", "Without a modicum of intelligence\n  it's impossible to understand their words. This\n  makes them unpopular to most, but\n  priceless to some.");
Card esper_of_water  ("Esper of Water", "Phlegmatic", 33, "Wave", "Long ago, they and those dear to them were\n  stuck in a sink or swim situation. They found\n  that they could swim, in ways the others could not.");
Card peaceful_vagabond  ("Peaceful Vagabond", "Phlegmatic", 34, "Cave", "They ask for little more than\n  solitude and freedom. Leave them alone, and they\n will do the same for you.");
Card thoughtful_child  ("Thoughtful Child", "Phlegmatic", 35, "Question", "Because of their youth, others\n  thought it was safe to speak freely around them.\n  Though they didn't understand at first, they learned quickly.");
Card witch_of_winter  ("Witch of Winter", "Phlegmatic", 36, "Pot", "Though there is little left of\n  substance in the dead of winter, they always have\n  means to see to those around them.");
Card cleric_of_patience  ("Cleric of Patience", "Phlegmatic", 37, "Bricks", "Taking things one step at a time, even\n  the most inexperienced of people can build great\n  things. This is what they preach, and they practice it\n  dutifully.");
Card calm_musician  ("Calm Musician", "Phlegmatic", 38, "Sign", "An empty mind can be filled\n  as the situation demands. They clear their thoughts\n  of all else but their craft, and so can play\n  anything at all.");
Card taiga_guardian  ("Taiga Guardian", "Phlegmatic", 39, "Cloth", "Though the cold prevents bountiful\n  growth, they still can get by, knowing their\n  limits and resources. Common\n  knowledge takes you far.");
Card phlegmatic_scholar  ("Phlegmatic Scholar", "Phlegmatic", 40, "Tower", "With a clear head\n  and a relaxed body, they prolifically create\n  records of all around them.");
