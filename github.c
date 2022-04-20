#include <stdio.h>
int main()
{
    int amount,bill,quotient,reminder;
    scanf("%d %d",&amount,&bill);
    if (5<=amount<=2500 && 5<=bill<=2500)
    {quotient=amount/bill;reminder=amount%bill; 
    printf("%d\n",quotient);
    printf("%d",reminder);}
    else
    {return 0;}   
    return 0;
}
