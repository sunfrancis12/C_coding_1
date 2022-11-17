/* Deals a random hand of cards */
//我這題只有80分布要看比較好
//我這題只有80分布要看比較好
//我這題只有80分布要看比較好
//我這題只有80分布要看比較好
//我這題只有80分布要看比較好
//我這題只有80分布要看比較好
//我這題只有80分布要看比較好
//我這題只有80分布要看比較好
//我這題只有80分布要看比較好
//我這題只有80分布要看比較好
//我這題只有80分布要看比較好
 
#include <stdbool.h>   /* C99 only */
#include <stdio.h>
 
#define NUM_SUITS 4
#define NUM_RANKS 13
 
int main(void)
{
  bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
  int mysuit[20]={0,2,1,2,2,0,1,1,3,3,2,0,1,2,3,2,0,1,3,0};
  int myrank[20]={3,1,10,1,5,4,6,2,12,0,11,1,5,7,0,12,2,8,5,10};
  int num_cards, rank, suit,count_suit=0,count_rank=0;
  const char rank_code[] = {'2','3','4','5','6','7','8',
                            '9','t','j','q','k','a'};
  const char suit_code[] = {'c','d','h','s'};

  scanf("%d", &num_cards);
  scanf("%d", &count_suit);
  scanf("%d", &count_rank);
 
  while (num_cards > 0) {
    suit = mysuit[count_suit]% NUM_SUITS;    /* x/4picks a random suit */
    rank = myrank[count_rank] % NUM_RANKS;    /*   x/13 3  picks a random rank */



    count_suit++;
    count_rank++;

    if (!in_hand[suit][rank]) {
      in_hand[suit][rank] = true;
      num_cards--;
      if(num_cards==0){
        printf("%c%c", rank_code[rank], suit_code[suit]);
        break;
      }
      printf("%c%c ", rank_code[rank], suit_code[suit]); //1,6
    }
  }
  return 0;
}
