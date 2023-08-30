#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c, choice;
    printf("1..addition\n");
    printf("2..substraction\n");
    printf("3..divide\n");
    printf("rahul your choice\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case1:
        printf("enter the number");
        scanf("%d%d", &a, &b);
        c = a + b;
        printf("%d", c);
        break;

    case2:
        printf("enter the number");
        scanf("%d%d", &a, &b);
        c = a - b;
        printf("%d", c);
        break;

    case3:
        printf("enter the number");
        scanf("%d%d", &a, &b);
        c = a / b;
        printf("%d", c);
        break;
    default:

        printf("crash");
    }
    return 0;
}