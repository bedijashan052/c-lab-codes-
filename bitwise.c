// take two number from user and perform bitwise operations.

# include <stdio.h>
int main() {
    int a,b,c,d,e;
    printf("enter a = ");
    scanf("%d",&a);
    printf("enter b = ");
    scanf("%d",&b);
    c = a&b;
    printf("a & b = %d\n",c);
    d = a|b;
    printf("a | b = %d\n",d);
    e = a^b;
    printf("a ^ b = %d",e);
    return 0;
}