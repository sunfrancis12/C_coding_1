#include <stdio.h>
#include <string.h>

#define SENT_LEN 100
int main(void)
{
  
  char sentence [SENT_LEN+1];

  printf("Enter a sentence:\n");
  scanf("%s", sentence);
  //gets(sentence);
  printf("%s", sentence);

  return 0;
}
