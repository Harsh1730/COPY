#include <stdio.h>

#include <math.h>

int main()

{

    int A, B, C, D;

    printf("for equation of type ax2+bx+c=d\n");

    printf("Enter value of a:");

    scanf("%d", &A);

    printf("Enter value of b:");

    scanf("%d", &B);

    printf("Enter value of c:");

    scanf("%d", &C);

    printf("Enter value of d:");

    scanf("%d", &D);

    float a = A * 1.0;

    float b = B * 1.0;

    float c = C * 1.0;

    float d = D * 1.0;
    printf("entered eqn is %fx2+%fx+%f=%f\n", a, b, c, d);

    c = c - d;

    float dit = (pow(b, 2) - 4 * a * c);

    int cs = 0;

    if (a == 0)

        cs = 1;

    else if (dit == 0)

    {

        cs = 2;
    }

    else if (dit > 0)

    {

        cs = 3;
    }

    else if (dit < 0)

    {

        cs = 4;
    }

    switch (cs)

    {

    case 1:
        printf("not a quadratic for this linear eqn root is %f", (d - c) / b);

        break;

    case 2:
        printf("eqn with repeated roots and the roots are %f and %f", -b / (2 * a), -b / (2 * a));

        break;

    case 3:
        printf("eqn with distinct real roots and the roots are %f and %f", (-b - sqrt(dit)) / (2 * a), 1.0 * (-b + sqrt(dit)) / (2 * a));

        break;

    case 4:
        printf("eqn with distinct imaginary roots and the roots are %f-%fi and %f+%fi", -b / (2 * a), sqrt(-dit) / (2 * a), -b / (2 * a), sqrt(-dit) / (2 * a));

        break;
    }
}
