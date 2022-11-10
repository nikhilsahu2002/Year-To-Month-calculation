#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("Enter the month number ");
scanf("%d",&a);
if(a==1)
printf("jan");
else if (a==2)
printf("feb");
else if (a==3)
printf("MAR");
else if (a==4)
printf("APRAIL");
else if (a==5)
printf("MAY");
else if (a==6)
printf("JUN");
else if (a==7)
printf("JUL");
else if (a==8)
printf("AUG");
else if (a==9)
printf("SEP");
else if (a==10)
printf("OCT");
else if (a==11)
printf("NOV");
else if (a==12)
printf("DEC");
else
printf("PLASE ENTER THE VALID INPUT");
getch();
}