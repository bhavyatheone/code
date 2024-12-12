#include <stdio.h>
// break statement
int main()
{

                for(int i = 1; i <= 5; i++)
                             {

                                    if (i == 3)
                                {
                                        break;
                                }
                                            printf("%d\n", i);
                             }
                    printf("end");

// keep takinf number as input from user until user enter an odd number
#include <stdio.h>

// break statement
int main()
{
       int n;
       do
       {
              printf("enter the number :");
              scanf("%d", &n);
              printf("%d\n", n);

              if (n % 2 != 0)
              {
                     break;
                     ;
              }

       }

       while (1);
       printf("thank you ");

       return 0;
}
