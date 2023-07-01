#include <stdio.h>

int main()
{
    char catsaid[10];

    printf("What did the cat say?: ");
    scanf("%10s", catsaid);

    printf("The cat said: %s\n", catsaid);

    return 0;
}
