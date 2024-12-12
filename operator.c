#include <stdio.h>
// arthimetic operator
int main()
{

    {
        int a = (int)1.999999;
        printf("%d\n", a);
    }

    {
        // printf("%d",4+9*10);
        printf("%d", 4 * 3 / 6 * 2); // assoiativity oprerator
                                     // left to right  or same precedence
    }

    // practice queation

    {
        printf("%d \n", 5 * 2 - 2 * 3);
        printf("%d \n", 5 * 2 / 2 * 3);
        printf("%d \n", 5 * (2 / 2) * 3);
        printf("%d \n", 5 + 2 / 2 * 3); //  5+((2/2)*3)
    }
    return 0;
}
