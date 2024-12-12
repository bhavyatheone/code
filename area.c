#include <stdio.h>

int main()
{

    // area of square
    {
        float side;
        printf("enter the value  of side  \n", side);
        scanf("%f", &side);

        float area = (side * side);
        printf("the area of square is %f", area);
    }

    // area od circle
    /*        {
                float radius;
                // float a = 3.14;  //optional
                        printf("enter the value of side :\n", radius);
                            scanf("%f", &radius);

                // float area = a*radius*radius;
                float area = 3.14 * radius * radius;
                        printf("the area of cicle is %f", area);

            }*/
    return 0;
}
