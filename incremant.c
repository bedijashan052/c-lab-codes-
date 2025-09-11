// take a number from user and perform incremant and decremant operators.

# include <stdio.h>
int main() {
    int a;
    printf("enter a = ");
    scanf("%d",&a);
    printf("++a = %d\n",++a);
    printf("a++ = %d\n",a++);
    printf("--a = %d\n",--a);
    printf("a-- = %d\n",a--);
    return 0;
}