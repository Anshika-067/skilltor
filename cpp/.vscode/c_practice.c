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
  int a;
  scanf("%d",&a);
  if(a%2==0){
    printf("EVEN \n");
  }
    else{
  printf("ODD\n");
    }

  
    5.LARGEST NO. AND DESCENDING ORDER
  int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
  if(a>b && a>c){
    printf("%d is the greatest",a);
    if(b>c){
      printf("%d > %d > %d",a,b,c); 
    }
    else{
       printf("%d > %d > %d",a,c,b);
    }
   
  }
  else if(b>a && b>c){
    printf("%d is the greatest",b);
    if(a>c){
      printf("%d > %d > %d",b,a,c);
    }
    else{
       printf("%d > %d > %d",b,c,a);
    }
  }
  else{
    printf("%d is the greatest",c);
    if(a>b){
       printf("%d > %d > %d",c,a,b);
    }
    else{
       printf("%d > %d > %d",c,b,a);
    }
  }


  6. VOWEL OR CONSONENT
char c;
scanf("%c",&c);
if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
  printf("vowel");
}
else{
  printf("consonent");
}


7. INPUT CHAR AND CHECK WHETHER ITS CHAR , NO. OR SPECIAL CHAR

char ch;
scanf("%c",&ch);
if((65<=ch && ch<=90) ||(97<=ch && ch<=122)){
  printf("alphabet");
}
else if('0'<=ch && ch<='9'){
  printf("number");
}
else{
  printf("special alphabet");
}


8. SUM OF DIGITS USING LOOP
int n;
int sum=0;
int last_digit;
scanf("%d",&n);
while(n>0){
  last_digit=n%10;
  sum+=last_digit;
  n=n/10;
}
printf("sum of digits is %d",sum);


 WITHOUT USING LOOP
int n;
scanf("%d",&n);
int first_digit=n%10;
int sec_digit=(n/10)%10;
int third_digit= (n/100)%10;
int fourth_digit=n/1000;
int sum=first_digit+sec_digit+third_digit+fourth_digit;
printf("sum of digits is %d",sum);
 

9. FIBONACCI SERIES WITHOUT USING LOOP

int f_d=0;
int s_d=1;
int t_d=s_d+f_d;
int fo_d=t_d+s_d;
int fi_d=fo_d+t_d;
int si_d=fi_d+fo_d;
printf("%d%d%d%d%d%d",f_d,s_d,t_d,fo_d,fi_d,si_d);                                            


int a1,a2,a3;
int sum=a1+a2+a3;
printf("enter the angles");
scanf("%d%d%d",&a1,&a2,&a3);
if(a1+a2+a3=180){
  printf("valid\n");
  if(sum==180){
    printf("equilateral triangle");
  }
  else if((s1==s2 && s2!=s3) || (s1==s3 && s1!=s2)){
    printf("isoceles traingle");
  }
  else{
    printf("scalene");
  }
}


TO PRINT NEXT OR PREVIOUS CHAR
char c;
char new_c;
scanf("%c",&c);
if(65<=c && c<=90){
  new_c=c+1;
  printf("next char is %c",new_c);
}
else if(97<=c && c<=122){
  new_c=c-1;
  printf("previous char is %c",new_c);
}
else{
  printf("invalid");
}



TO INPUT INTEGER AND CHECK WHETHER ITS A THREE DIGIT NO.. IF SO FIND FIRST,LAST DIGIT AND CALC. PRODUCT
int n;
scanf("%d",&n);
if(100<=n && n<=999){
  int first_digit=n/100;
  int last_digit=n%10;
  printf("its three digit no. .  first digit is %d and last digit is %d and product is %d",first_digit,last_digit,first_digit*last_digit);
}
else{
  printf("not a three digit no."); 
}


 TO PRINT ASCII VALUES
char c;
scanf("%c",&c);
int a=c;
printf("%d",a);


UPPERCASE TO LOWERCASE AND VICE VERSA
char c;
scanf("%c",&c);
if(65<=c && c<=90){
  c+=32;
  printf("lowercase is %c",c);
}
else if(97<=c && c<=122){
    c-=32;
  printf("uppercae is %c",c);
}
else{
  printf("invalid");
}


 INPUT CHAR AND CHECK WHETHER ITS DIGIT OR NOT
char c;
scanf("%c",&c);
if(c>='0' && c<='9'){
  printf("digit");
}
else{
  printf("not a digit");
}


TO CALC SURCHARGE,BILL
float units;
float bill=0;
float surcharge=0;
float net_bill;
scanf("%f",&units);
if(units<=50){
  bill=0.2*units;
}
else if(units<=150){
  bill=(50*0.5)+((units-50)*0.75);
}
else if(units<=250){
  bill=(50*0.5)+(100*0.75)+((units-150)*1.20);
}
else{
  bill=(50*0.50)+(100*0.75)+(100*1.2)+((units-250)*1.5);
}
surcharge=(bill*20)/100;
net_bill=surcharge+bill;
printf("net bill is %.2f",net_bill);


TO  INPUT AN INTEGER AND PRINT LAST DIGIT
int n;
int ld=0;
scanf("%d",&n);
ld=n%10;
printf("%d",ld);


MIDDLE DIGIT OF THREE DIGIT NO.
int n;
scanf("%d",&n);
int md=(n/10)%10;
printf("%d",md);


int n;
scanf("%d",&n);
int fd=n/1000;
printf("%d",fd);


TO INPUT 5 DIGIT NO. AND MIDDLE NO.   . IF ODD FIND SQUARE ELSE FIND SQ.ROOT
int n;
scanf("%d",&n);
if(n%2!=0){
  int sq=n*n;
  printf("odd and square is %d \n",sq);
}
else{
  float sq_rt=sqrt(n);
  printf("even and sq root is %f \n",sq_rt);
}
if(n/10000==1){
  printf("its a five digit no.\n");
  for(int i=1;i<=2;i++){
    n=n/10;
  }
  int md=n%10;
  printf("middle no. is %d\n",md);
}
else{
  printf("not a five digit no.\n");
}


int n;
scanf("%d",&n);
int ld=n%10;
int fd=0;
printf("%d\n",ld);
for(int i=1;i<=n;i++){
  n=n/10;
  if(n/10==0){
    fd=n%10;
    printf("%d\n",fd);
    break;
  }
}
int temp=0;
temp=fd;
fd=ld;
ld=temp;
printf("after swap value of fd is %d and ld is %d",fd,ld);


int n;
scanf("%d",&n);
int sum=0;
while(n>0){
  sum+=n%10;
  n=n/10;
}
printf("%d",sum);

*/
int n;
scanf("%d",&n);
int ld=n%10;
int fd=0;
while(n>0){
  fd=n%10;
  n=n/10;
}
printf("%d",fd);
    return 0;
}