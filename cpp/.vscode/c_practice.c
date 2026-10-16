# include <stdio.h>
# include <math.h>
int main(){

    /* 1. CONVERT FAHRENHEIT TO CELSIUS
    float f;
    scanf("%f",&f);
    float cel=((f-32)*5)/9;
    printf("temperature is %f",cel);


      2. ROOTS OF A QUADRATIC EQN.
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float d=sqrt(pow(b,2)-4*a*c);
    float r_1=(-b+d)/(2*a);
    float r_2=(-b-d)/(2*a);
    printf("roots are %.2f %.2f",r_1,r_2);


    float a,b,temp=0;
    scanf("%f%f",&a,&b);
    printf("before swapping a is %f and b is %f \n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping a is %f and b is %f",a,b);


    3. WITHOUT USING THIRD VARIABLE
   float a,b;
   scanf("%f%f",&a,&b);
   printf("before swapping a is %f and b is %f \n",a,b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("after swapping a is %f and b is %f \n",a,b);


   4. EVEN OR ODD
   */
  int a;
  scanf("%d",&a);
  if(a%2==0){
    printf("EVEN \n");
  }
    else{
  printf("ODD\n");
    }
  


    return 0;

}