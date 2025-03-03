#include <stdio.h>
int main()
{
    int M;
    printf("Enter the marks - ");
    scanf("%d",&M);
    if (M<34)
    {
        printf("Fail");
    }
    else if (M>=35 && M<=45)
    {
        printf("Grade C");
    }
    else if (M>=46 && M<=60)
    {
        printf("Grade B");
    }
    else if (M>=61 && M==100)
    {
        printf("Grade A");
    }
    else
    {
        printf("Enter Valid Marks");
    }
    return 0;
    
}

