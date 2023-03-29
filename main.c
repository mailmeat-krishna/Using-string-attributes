#include<stdio.h>
#include<string.h>
int main()
{
char name[50];
char surname[50];
int lengthofname,lengthofsurname,i=0,x=0;

printf("Enter your name : ");
scanf("%s",name);
printf("Enter your surname : ");
scanf("%s",surname);
printf("Your full name is %s %s",name,surname);
while(i<=6)
{
        if(surname[i]=='a')
        {
                x++;
        }
        i++;
}
lengthofname=strlen(name);
lengthofsurname=strlen(surname);
printf("\nLength in name is : %d",lengthofname);
printf("\n%s",strcat(name,surname));
printf("\n%s",strupr(name));
printf("\n%s",strlwr(name));
printf("\n%s",strrev(name));
printf("\n%s",strcpy(name,surname));
printf("\n%d",x);





}
