#include <stdio.h>


int main(const int argc, const char** argv)
{

        printf("%s", "Enter number: ");
        int a;
        scanf("%d", &a);
        int prime = 1;

        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
             prime = 0;
             break;
            }
        }

         if (prime==1)
         {
           printf(" prime number ");
         }

         else
         {
            printf("%s not a prime number ");
         }

    return 0;
}
