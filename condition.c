#include <stdio.h>
// condition  statement
int main()
{
    // if else
    {
        int age;
        printf("enter age : ");
        scanf("%d", &age);

        if (age >= 18) //  curly braces are used for multiple statement
        {
            printf("you  are adult");
            printf("so you can vote and drive \n \n");
        }
        else
        {
            printf("you  are not adult \n");
            printf("so you  can`t vote and drive \n \n");
        }

        printf("thank you \n \n");
    }
    // else if statement
    {
        int age;
        printf("enter age : ");
        scanf("%d", &age);

        if (age >= 18) //  curly braces are used for multiple statement
        {
            printf("you  are adult \n");
        }
        else if (age > 13 && age < 18)
        {
            printf("you  are teenager \n");
        }
        else
        {
            printf("you are child \n");
        }

        printf("thank you \n \n");

        return 0;
    }

    // ternary condition

    {
        int age;
        printf("enter age : ");
        scanf("%d", &age);
        age >= 18 ? printf("adult \n") : printf("not adult");

        // ternary for single statement we use
        return 0;
    }

    // switch statement
    {
        char day; // 1--mon,2--tue
        printf("enter day(1-7) : ");
        scanf("%s", &day);
        switch (day)
        {
        case 'm':
            printf("monday \n");
            break;
        case 't':
            printf("tuesday \n");
            break;
        case 'w':
            printf("wednesday \n");
            break;
        case 'T':
            printf("thursday \n");
            break;
        case 'f':
            printf("friday \n");
            break;
        case 's':
            printf("saturaday \n");
            break;
        case 'S':
            printf("sunday \n");
            break;

        default:
            printf("not a valid day! \n");
            break;
        }
    }

    // nested if code
    {
        int number;
        printf("enter number :");
        scanf("%d", &number);

        if (number > 0)
        {
            printf("the number is postive \n");
            if (number % 2 == 0)
            {
                printf("the number is even \n");
            }
            else
            {
                printf("the number is odd \n");
            }
        }
        else if (number = 0)
        {
            printf("the number is neither positve nor negative \n");
            printf("but the  number is even");
        }
        else
        {
            printf("the number is negative \n");
        }
    }
}
