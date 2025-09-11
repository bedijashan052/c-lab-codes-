// take two number from user and perform ternary operators.

# include <stdio.h>
int main() {
    int a,b;
    printf("enter a = ");
    scanf("%d",&a);
    printf("enter b = ");
    scanf("%d",&b);
    (a>b) ? printf("a is greater\n") : printf("b is greater\n");
    return 0;
}