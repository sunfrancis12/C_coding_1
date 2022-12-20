#include<stdio.h>
#include<string.h>

char *strcat_1(char *s1, const char *s2) {
	  char *p = s1;

	  while (*p != '\0')
	    p++;
	  while (*s2 != '\0') {
	    *p = *s2;
	    p++;
	    s2++;
	  }
	  *p = '\0';
	  return s1;
}

char *strcat_2(char *s1, const char *s2) {
	  char *p = s1;
	 
	  while (*p)
	    p++;
	  while (*p++ = *s2++)
	    ;
	  return s1;
}

int main(){

    char s1[100],s2[100];

    gets(s1);
    gets(s2);

    strcat_1(s1,s2);

    puts(s1);

}