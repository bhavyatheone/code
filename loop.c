#include <stdio.h>
// while loop
int main()
{
*
        int i=1;
            while(i<=5)
                {
                    printf("hello world \n");
                    i++;
                    }
                  
        // print the no. from 0 to n , if n= 4
          int n;
            printf("enter the number :");
                scanf("%d",&n);
           
           int i=0;     // we have to start from

            while(i <= n)
        {
            printf("%d \n ",i);
            i++;
        }



return 0;
}

#include <stdio.h>

int main()
{
 int i=5;
    do 
        {
            printf("%d \n",i);
                i--;
        }
         while (i>=1);
     */
        // print the sum of first n natural numbers

   int n;
                    printf("enter the number :");
                        scanf("%d",&n);
           int sum =0;
                    for(int i=1;i<=n;i++)
                    {
                                
                 sum =sum +i ;
                    }
                        printf("%d \n",sum);

             for(int i=n;i>=1;i--)
                 { 
                      printf("%d\n",i);
                 }

  // shortcut method 
                    int n;
                    printf("enter the number :");
                    scanf("%d",&n);
                 int sum=0;
                 int j;
                  for(j; j=n ;j--)
                    {    
                 sum =sum + j;
                 printf("%d\n",j);
                    }
                        printf("%d \n",sum);
 
                 return 0;
}

#include <stdio.h>
// for loop structure
int main()
{

    // for loop for(initialisation (i=0) ;condition (i<5);upadation(i++))
    // i =iterator ;counter

    for (int i = 1; i <= 15; i = i + 1)
    {
        printf("%d \n", i);
    }

    for (int i = 10; i >= 1; i = i - 1)
    {
        printf("%d \n", i);
    }

    // questiion to print no.  0 to 10

    for (int i = 0; i <= 10; i++) // i++ written as i+1
    {
        printf("%d \n", i);
    }

    // increment operator
    //  ++i    pre increment operator
    //  i++    post increment operator

    int i = 1;
    printf("%d \n", i++); // first use or print , then increase intenally
    printf("%d \n", i);

    // ++i
    int i = 1;
    printf("%d \n", ++i); // first increase then use

    printf("%d \n", i);

    // decrement operator

    // --i pre decremnet
    // i-- post decrement

    int i = 1;
    printf("%d \n", i--); // first use or print , then dencrease intenally
    printf("%d \n", i);   // show decrement

    int i = 1;
    printf("%d \n", --i); // first decrease then use
    printf("%d \n", i);

    // loop counter can be flaot or charcter

    for (float i = 1.0; i <= 5.0; i++)
    {
        printf("%f \n", i);
    }

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c \n", ch);
    }
    // infinte loop

    for (int i = 1; i <= 2; i++)
    {
        printf("hello world \n ", i);
    }

    return 0;
}
