// Use of pow function
#include <stdio.h>
#include <math.h>
int main()
{
    int base,exp,result;
    printf ("Enter the number: ");
    scanf ("%d",&base);
    printf ("Enter the power: ");
    scanf ("%d",&exp);
    result = pow(base,exp);
    printf ("\nResult of %d^%d = %d",base,exp,result);
    return 0;
}
// for loop
#include <stdio.h>
int main()
{
    int i,num,power,ans=1;
    printf ("Enter the number: ");
    scanf ("%d",&num);
    printf ("Enter the power: ");
    scanf ("%d",&power);
    for (i=1; i<=power; i++)
    {
        ans*=num;
    }
    printf ("\nResult of %d^%d = %d",num,power,ans);
    return 0;
}
// while loop
#include <stdio.h>
int main()
{
    int i=1,num,power,ans=1;
    printf ("Enter the number: ");
    scanf ("%d",&num);
    printf ("Enter the power: ");
    scanf ("%d",&power);
    while (i<=power)
    {
        ans*=num;
        i++;
    }
    printf ("\nResult of %d^%d = %d",num,power,ans);
    return 0;
}
// do-while loop
#include <stdio.h>
int main()
{
    int i=1,num,power,ans=1;
    printf ("Enter the number: ");
    scanf ("%d",&num);
    printf ("Enter the power: ");
    scanf ("%d",&power);
    do
    {
        ans*=num;
        i++;
    }
    while  (i<=power);
    printf ("\nResult of %d^%d = %d",num,power,ans);
    return 0;
}
// Using Recursion 
#include <stdio.h>
int ans=1;
int pow (int a, int b)
{
    if (b==0)
        return 1;
    return a*pow(a,b-1);
}
int main()
{
    int base,expo;
    printf("Enter the base number: ");
    scanf("%d",&base);
    printf("Enter the exponential number: ");
    scanf("%d",&expo);
    printf("Result of %d^%d: %d\n",base,expo,pow(base,expo));
    return 0;
}
