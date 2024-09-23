//Use switch-case to display Salaam when user enters 1, Aadaab when user enters 2, Hello when user
//enters 3 and Incorrect Option when user enters any other number.

#include <stdio.h>

int main()
{

    int x;

    printf("Press 1 for salam.\nPress 2 for Aadab.\nPress 3 for Sasriyakal.\n");
    scanf("%d",&x);

    switch(x)
    {
    case 1:
    printf("Salam");
    break;

    case 2:
    printf("Aadab");
    break;

    case 3:
    printf("Sasriyakal");
    break;

    default:
    printf("Incorrect Option");
    break;
    }

    return 0;

}
