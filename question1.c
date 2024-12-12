question
#include <stdio.h>

int main()
{
        {
                int marks;
                printf("enter the marks between 0-100 \n");
                scanf("%d", &marks);

                if ((marks > 30) && (marks <= 100))
                {
                        printf("pass \n");
                }
                else if (marks > 100)
                {
                        printf("enter the valid marks \n");
                }
                else
                {
                        printf("fail \n");
                }
        }
        // another method
        int marks;

        marks <= 30 ? printf("fail \n") : printf("pass \n");

        // another question

        int marks;
        if (marks >= 90 && marks <= 100)
        {
                printf("you get A+ \n");
        }
        else if (marks >= 70 && marks < 90)
        {
                printf(" you get A \n");
        }
        else if (marks >= 30 && marks < 70)
        {
                printf(" you get B \n");
        }
        else if (marks < 30)
        {
                printf("you get c \n");
        }
        else
        {
                printf("you have entered wrong marks \n");
        }
        // to check whether it will give error or any result

        {
                int x = 2;
                if (x = 1) // inital x=2 , but after apply on x=1, it interchange
                {
                        printf("x is equal to 1 \n");
                }
                else
                {
                        printf(" x is not equal to 1 \n");
                }
        }

        // to check the charcater are uppercase or lowercase

        {
                char ch;
                printf("enter charc : \n");
                scanf("%c", &ch);

                if (ch >= 'A' && ch <= 'Z')
                {
                        printf("UPPERCASE \n ");
                }

                else if (ch >= 'a' && ch <= 'z')
                {
                        printf("lower case \n");
                }
                else
                {
                        printf("not english letter");
                }
        }
        return 0;
}
#include <stdio.h>
// table method
int main()
{
    int n;
            printf("enter the number :");
            scanf("%d",n);
    
          for(int i=1; i<=10;i++)
                {
                    printf("%d \n",n*i);

                }


    return 0;
}
