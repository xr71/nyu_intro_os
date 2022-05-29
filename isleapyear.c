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

    printf("%d\n", year);

    return 0;
}