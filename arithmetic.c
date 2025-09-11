// take two number from user and do +,-,/,*

# include <stdio.h>
int main() {
    int a,b,c,d,e,f,g;
    printf("enter a = ");
    scanf("%d",&a);
    printf("enter b = ");
    scanf("%d",&b);
    c = a+b;
    printf("sum = %d\n",c);
    d = a-b;
    printf("difference = %d\n",d);
    e = a*b;
    printf("multipliaction = %d\n",e);
    f = a/b;
    printf("division = %d",f);
    g = a%b;
    printf("remainder = %d",g);
    return 0;
}