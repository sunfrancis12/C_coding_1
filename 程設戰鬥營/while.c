#include <stdio.h>

int main()
{
    int num = 51;

    printf("無格式化的結果:\n");

    // count=1
    int count = 1;
    while (count <= num)
    {
        printf("%d ", count);
        if (count % 10 == 0)
            printf("\n");

        count++;
    }

    printf("\n有格式化的結果:\n");

    count = 1;

    while (count <= num)
    {
        printf("%2d ", count);
        if (count % 10 == 0)
            printf("\n");
        count++;
    }
}