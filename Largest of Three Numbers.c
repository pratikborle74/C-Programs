#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("enter 3 numbers , 1st no : ");
    scanf("%d", &a);
    printf("enter 3 numbers , 2nd no : ");
    scanf("%d", &b);
    printf("enter 3 numbers , 3rd no : ");
    scanf("%d", &c);
    if(a>b){
        if(a>c){
            printf("a is the largest");
        }else {
            printf("c is the largest");
        }
    }else{
        if(b>c){
            printf("b is the largest");
        }else {
            printf("c is the largest");
        }
    }
    return 0;
}
