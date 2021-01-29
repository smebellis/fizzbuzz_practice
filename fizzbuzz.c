#include <stdlib.h>
#include <stdio.h>

int main()
{
    for (int i = 0; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("fizz\n");
        }
        if (i % 5 == 0)
        {
            printf("buzz\n");
        }
        printf("%d \n", i);
    }

    return 0;
}