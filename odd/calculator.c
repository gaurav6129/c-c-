#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c, choice;
    printf("1..Addition");
    printf("2..subtract");
    printf("3..multiplication");
    printf("4..divide");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter any two number");
        scanf("%d%d%d", &a, &b, &c);
        c = a + b;
        printf("%d", c);

        break;

    case 2:
        printf("Enter any two number");
        scanf("%d%d%d", &a, &b, &c);
        c = a - b;
        printf("%d", c);
        break;
    case 3:
        printf("enter the number");
        scanf("%d%d%d", &a, &b, &c);
        c = a * b;
        printf("%d", c);
        break;
    case 4:
        printf("enter any two number");
        scanf("%d%d%d", &a, &b, &c);
        c = a / b;
        printf("%d", c);
        break;

    default:
        printf("calculator crash");
    }
    return 0;
}