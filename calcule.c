#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, i = 2, b, r = 1;
    float x, s = 0;
    char d;
    printf("enter le premier nombre \n");
    scanf("%d", &a);
    do
    {
        printf("enter le symbole de l'operation * ,-, /, + ou enter q si vous voulez sortir de programme \n");
        scanf("%s", &d);
        switch (d)
        {
        case '*':
            printf("enter le %d nombre \n", i);
            scanf("%d", &b);
            s = a * b;
            printf("la resultat est %.2f \n", s);
            printf("si vous voulez avoir le resulat enter 'q' si vous voulez continuer enter 1 \n");
            scanf("%s", &r);
            break;
        case '-':
            printf("enter le %d nombre \n", i);
            scanf("%d", &b);
            s = a - b;
            printf("la resultat est %.2f \n", s);
            printf("si vous voulez avoir le resulat enter 'q' si vous voulez continuer enter 1 \n");
            scanf("%s", &r);
            break;
        case '/':
            printf("enter le %d nombre \n", i);
            scanf("%d", &b);
            s = a / b;
            printf("la resultat est %.2f\n", s);
            printf("si vous voulez avoir le resulat enter 'q' si vous voulez continuer enter 1 \n");
            scanf("%s", &r);
            break;
        case '+':
            printf("enter le %d nombre \n", i);
            scanf("%d", &b);
            s = a + b;
            printf("la resultat est %.2f\n", s);
            printf("si vous voulez avoir le resulat enter 'q' si vous voulez continuer enter 1 \n");
            scanf("%s", &r);
            break;
        case 'q':
        exit(0);
        break;
        }
        i++;
        a = s;
    } while ((d == '*' || d == '-' || d == '/' || d == '+') && (r != 'q'));
    printf("la resultat est %.2f", s);
    return 0;
}