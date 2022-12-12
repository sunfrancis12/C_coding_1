
#include <stdio.h>
#include <stdlib.h>



#define STACK_SIZE 100

static int contents[STACK_SIZE];
static int top = 0;

static void terminate(const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

void make_empty(void)
{
  top = 0;
}

bool is_empty(void)
{
  return top == 0;
}

bool is_full(void)
{
  return top == STACK_SIZE;
}

void push(int i)
{
  if (is_full())
    terminate("Error in push: stack is full.");
  contents[top++] = i;
}

int pop(void)
{
  if (is_empty())
    terminate("Error in pop: stack is empty.");
  return contents[--top];
}


int main(void)
{

  int n;
  int x,y, z; 
  while (1) {
  	 
  	printf("Enter a number: (-99 for end input)");
  	
  	scanf(" %d", &x);
  	if (x==-99)
  	   break;
  	else 
  		push(x);
  }
  

  


  n = pop();
  printf("Popped %d from stack\n", n);
  n = pop();
  printf("Popped %d from stac\n", n);
  n = pop();
  printf("Popped %d from stac\n", n);
  
  while ( !is_empty()) {
  	n=pop();
  	printf("Popped %d from stac\n", n);
  }
     

     

  return 0;
}
