/* WAP to compute the BMI Index of the person and print the BMI values as per the following
ranges. You can use the following formula to compute BMI=
weight(kgs)/Height(Mts)*Height(Mts) */

# include <stdio.h>
int main() {
    float a,b,c;
    printf("enter weight (in kg's) = ");
    scanf("%f",&a);
    printf("enter height (in metres) = ");
    scanf("%f",&b);
    if(a>0 && b>0){
        c = (a)/((b*b));
        printf("%.2f\n",c);
    if(c<=15){
        printf("starvation");
    }else if(c>15 && c<=17.5){
        printf("anorexic");
    }else if(c>17.5 && c<=18.5){
        printf("underweight");
    }else if(c>18.5 && c<=24.9){
        printf("ideal");
    }else if(c>24.9 && c<=25.9){
        printf("overweight");
    }else if(c>25.9 && c<=39.9){
        printf("obese");
    }else if(c>39.9){
        printf("morbidity obese");
    }
    }else{
        printf("enter a valid height/weight");
    }
    return 0;
}