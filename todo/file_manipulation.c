//File Manipulation
#include<stdio.h>
#include<string.h>
#include<conio.h>
struct
{
char name[15];
int regno;
int m1,m2,m3,m4,m5;
}
srec;
FILE *str1,*str2;  
void main()
{
int i,n,total;  
char result [5];
str1=fopen("student","w");

printf("\nEnter the total records");
scanf("%d",&n);  
printf("%d",n);
for(i=1;i<=n;i++)
{
printf("\nEnter the name:");  
scanf("%s",&srec.name);  
printf("%s",srec.name); 
printf("\nEnter the reg no:");
scanf("%d",&srec.regno);  
printf("%d",srec.regno);  
printf("\nEnter the five subjects mark: ");
scanf("%d%d%d%d%d",&srec.m1,&srec.m2,&srec.m3,&srec.m4,&srec.m5);
printf("%d\t%d\t%d\t%d\t%d",srec.m1,srec.m2,srec.m3,srec.m4,srec.m5);
fprintf(str1,"\n");
fprintf(str1,"\n%s\t%d\t%d\t%d\t%d\t%d\t%d",srec.name,srec.regno,srec.m1,srec.m2,srec.m3,srec.m4,srec.m5);
}
fclose(str1);
str1=fopen("student","r");
str2=fopen("list","w");
for(i=0;i<=70;i++)
{
fprintf(str2,"=");
fprintf(str2,"\n");
fprintf(str2,"\nName\tRegno\tEnglish\tTamil\tMajor\tAllided1\tAllied2\tTotal\tResult\n");
}
for(i=0;i<=75;i++)
{
fprintf(str2,"=");
fprintf(str2,"\n");
}
do
{
fscanf(str1,"\n%s\t%d\t%d\t%d\t%d\t%d\t%d",&srec.name,&srec.regno,&srec.m1,&srec.m2,&srec.m3,&srec.m4,&srec.m5);
total=srec.m1+srec.m2+srec.m3+srec.m4+srec.m5;
if((srec.m1>=40)&&(srec.m2>=40)&&(srec.m3>=40)&&(srec.m4>=40)&&(srec.m5>=40))
strcpy(result,"pass");
else
strcpy(result,"fail");
fprintf(str2,"\n%s\t%d\t%d\t%d\t%d\t%d\t%d",srec.name,srec.regno,srec.m1,srec.m2,srec.m3,srec.m4,srec.m5);
fprintf(str2,"\n");
}
while(!feof(str1));
	fprintf(str2,"\n");
for(i=0;i<80;i++)
	fprintf(str2,"=");

}




