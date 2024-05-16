#include<stdio.h>
int main()
{
int a1,a2,a3,count=0;
printf("QUIZ\n");
printf("Q1. NATIONAL ANTHEM OF INDIA\n");
printf("\n");
printf("1) jana gana mana\n");
printf("2) aekla cholo re\n");
printf("3) rastra geet\n");
printf("4) ham sab bhaartiya hai\n");
printf("chouse answer\n");
scanf("%d",&a1);
switch (a1==1)
{
case 1:
printf("RIGHT ANSWER\n");
count++;
break;
default:
printf("WRONG ANSWER\n");
break;
}
printf("\n");
printf("Q2. What is a National bird of india\n");
printf("\n");
printf("1)hen\n2)crow\n3)peacock\n4)pegion\n");
printf("chouse answer\n");
scanf("%d",&a2);
switch (a2==3)
{
case 1:
printf("RIGHT ANSWER\n");
count++;
break;
default:
printf("WRONG ANSWER\n");
break;
}
printf("\n");
printf("Q3. Whats is the national animal of india\n");
printf("\n");
printf("1)Lion\n");
printf("2)Tiger\n");
printf("3)Giraffe\n");
printf("4)Elephant\n");
printf("Chouse answer\n");
scanf("%d",&a3);
switch (a3==2)
{
case 1:
printf("RIGHT ANSWER\n");
count++;
break;
default:
printf("WRONG ANSWER\n");
break;
}
printf("Your Score is %d",count);
return 0;
}
