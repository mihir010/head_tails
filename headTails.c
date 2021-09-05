#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void userName(char *p)
{
    gets(p);
}

int main(int argc, char const *argv[])
{
    printf("WELCOME TO HEAD AND TAILS\n");
    printf("--------------------------\n");

    char *p1, *p2;
    int n = 10;
    int choose, option, result;

    p1 = (char *)malloc(n * sizeof(int));
    p2 = (char *)malloc(n * sizeof(int));

    printf("Enter the name of PLAYER 1: \n");
    userName(p1);

    printf("\nEnter the name of PLAYER 2: \n");
    userName(p2);

    printf("Its %s v/s %s!!\n\n", p1, p2);
    printf("Press enter to continue\n\n");
    getchar();

    srand(time(NULL));

    printf("%s choose HEAD or TAILS!\n", p1);
    printf("1. Heads\n");
    printf("2. Tails\n");
    scanf("%d", &option);

    choose = rand() % 10;

    switch (option)
    {
    case 1:
        printf("%s ---> HEADS\n%s ---> TAILS\n\n", p1, p2);
        printf("Tossing the coin...");
        // delay(3000);
        printf("\n\nPress ENTER to see the result!\n\n");
        getchar();
        getchar();

        if (choose % 2)
        {
            result = 1;
            printf("It's HEADS!!\n\n");
        }

        else
        {
            result = 2;
            printf("It's TAILS!!\n\n");
        }

        break;

    case 2:
        printf("%s ---> TAILS\n%s ---> HEADS\n\n", p1, p2);
        printf("Tossing the coin...");
        // delay(3000);
        printf("\n\nPress ENTER to see the result!\n\n");
        getchar();

        if (choose % 2)
        {
            result = 1;
            printf("It's HEADS!!\n\n");
        }

        else
        {
            result = 2;
            printf("It's TAILS!!\n\n");
        }
        break;

    default:
        break;
    }

    if (result == option)
    {
        printf("%s WINS the toss!!", p1);
    }

    else
    {
        printf("%s WINS the toss!!", p2);
    }

    return 0;
}
