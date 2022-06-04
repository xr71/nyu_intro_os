#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{

    if (argc > 2)
    {
        printf("More than 2 args not allowed\n");

        return 1;
    }

    int year = atoi(argv[1]);
    if (year % 400 == 0)
    {
        printf("%d was a leap year\n", year);
        return 0;
    }

    if (year % 4 == 0 && year % 100 != 0)
    {
        printf("%d was a leap year\n", year);
        return 0;
    }

    printf("%d was not a leap year\n", year);
    return 0;
}
