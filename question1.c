#include <stdio.h>
// question
int main()
{

    // write a program to check if a number is diviible by 2 or not
    {
        int main()
        {
            int a;

            printf("enter the number : ");
            scanf("%d", &a); // we have to complusory put &

            printf("%d \n", a % 2 == 0);
        }
    }

    // to check the number is odd or even
    {
        int main()
        {
            // even -->1
            // odd --> 0
            // same as above one
        }
    }

    // write a program to average of 3 no.
    {
        float a;
        float b;
        float c;
        float d;
        printf("enter a no. a : \n", a);
        scanf("%f", &a);
        printf("enter a no. b : \n", b);
        scanf("%f", &b);
        printf("enter a no. c : \n", c);
        scanf("%f", &c);

        d = (a + b + c) / 3;

        printf("the average of three no. is  : %f \n", d);
    }

    // to check the if a charc is digit or not
    {
        char ch;
        printf("Enter a character: ");
        scanf("%c", &ch);

        if (ch >= '0' && ch <= '9')
        {
            printf("%c is a digit.\n", ch);
        }
        else
        {
            printf("%c is not a digit.\n", ch);
        }
    }

    {
        int num1, num2, smallest;

        // Input two numbers from the user

        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

        // Determine the smallest number

        if (num1 < num2)
        {
            smallest = num1;
        }
        else
        {
            smallest = num2;
        }

        // Print the smallest number

        printf("The smallest number is: %d \n", smallest);
    }
    return 0;
}
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


