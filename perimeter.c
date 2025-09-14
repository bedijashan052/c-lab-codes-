/* WAP using ternary operator, the user should input the length and breadth of a rectangle,
one has to find out which rectangle has the highest perimeter. The minimum number of
rectangles should be three. */

#include <stdio.h>

int main() {
    int l1, b1, p1;
    int l2, b2, p2;
    int l3, b3, p3;
    int phigh;
    printf("enter length for rectangle 1 = ");
    scanf("%d %d", &l1);
    printf("enter breadth for rectangle 1 = ");
    scanf("%d",&b1);
    p1 = 2 * (l1 + b1);
    printf("enter length for rectangle 2 = ");
    scanf("%d %d", &l2);
    printf("enter breadth for rectangle 2 = ");
    scanf("%d",&b2);
    p2 = 2 * (l2 + b2);
    printf("enter length for rectangle 3 = ");
    scanf("%d %d", &l3);
    printf("enter breadth for rectangle 3 = ");
    scanf("%d",&b3);    
    p3 = 2 * (l3 + b3);
    phigh = (p1 > p2) ? 
            ((p1 > p3) ? p1 : p3) : 
            ((p2 > p3) ? p2 : p3) ;
    printf("\nPerimeter of Rectangle 1: %d\n", p1);
    printf("Perimeter of Rectangle 2: %d\n", p2);
    printf("Perimeter of Rectangle 3: %d\n", p3);
    printf("The highest perimeter is: %d\n", phigh);
    return 0;
}