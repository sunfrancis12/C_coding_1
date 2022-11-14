#include <stdio.h>
#include <string.h>

int main(){
    // strcat
    char s1[8] = "hi ", s2[8] = "sky";
    strcat(s1, s2);
    printf("%s\n\n", s1);

    // strncat
    char s3[8], s4[8];
    scanf("%s%s", s4, s3);
    printf("s3: %s\ns4: %s\n", s3, s4);
    strncat(s4, s3, 4);
    printf("s3: %s\ns4: %s\n", s3, s4);

    return 0;
}