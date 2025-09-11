// take two number from user and perform logical operations.

# include <stdio.h>
int main() {
    int a,b,c,d,e;
    printf("enter a = ");
    scanf("%d",&a);
    printf("enter b = ");
    scanf("%d",&b);
    printf("a>0 && b>0 = %d\n",(a>0 && b>0));
    printf("a>0 || b<0 = %d\n",(a>0 || b<0));
    printf("!(a>b) = %d\n",!(a>b));
    printf("(a||b)&&!(a||b) = %d\n",(a||b)&&!(a||b));
    return 0;
}    