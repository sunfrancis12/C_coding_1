#include <stdio.h>

/*若a沒有被定義就定義它*/
#ifndef a
#define a 1
#endif

int main(){

	int b=0;
	int &na = b; //ref
	int *p = &b; //pointer

	#if (a == 1)
		printf("a == 1\n");
    
	#else
		printf("a != 1\n");
        cout<<"ds";
    
	#endif
	
	return 0;
    
}
