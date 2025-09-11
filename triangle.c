/* WAP to take check if the triangle is valid or not. If the validity is established, do check if the
triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from
a user */

# include <stdio.h>
int main() {
    int a,b,c;
    printf("enter first side = ");
    scanf("%d",&a);
    printf("enter second side = ");
    scanf("%d",&b);
    printf("enter third side = ");
    scanf("%d",&c);
    if ((a+b)>c || (b+c)>a || (c+a)>b) {
        printf("triangle is valid\n");
        if("a==b || b==c || c==a"){
            printf("triangle is isosceles\n");
        }if(a==b && b==c){
            printf("triangle is equilateral\n");
        }if(a!=b && b!=c){
            printf("triangle is scalene\n");
        }if((a*a)==((b*b)+(c*c)) || (b*b)==((a*a)+(c*c)) || (c*c)==((b*b)+(a*a))){
            printf("triangle is right angle\n");
        }
    }else{
        printf("triangle is not valid");
    }
    return 0;
}