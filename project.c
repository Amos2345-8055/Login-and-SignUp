
#include<stdio.h>
#include<conio.h>
void main()
int age, i, same;
float mark1, mark2, totall, average;
char name[30], name1 [30], password [50], password1 [50], ch,ch1; clrscr();
printf("DO You want to singnUP:y/n");
scanf("%c", &ch);
for(;;)
{
{
if(ch=='y')
printf("ENTER YOUR NAME:");
scanf("%s", &name);
printf("ENTER YOUR AGE: ");
scanf("%d", &age);
if(age>18)
{
printf("ENTER YOUR PASSWORD: ");
scanf("%s", &password);
printf("CONFIRM YOUR PASSWORD: ");
scanf("%s", &password1);
for(i=0; password[i]!= '\0'||password1[i]!= '\0';i++)
if(password[i]!=password1[i])
f
same=0;
break;
}
else
same-1;
if(same--0)
printf("WRONG MATCH");
} else
printf("REGISTRATION SUCCESFULL");
}
}
else
printf("SIGN UP FAIL");
}
}
printf("\nDO YOU WANT TO SIGN UP AGAIN:y/n"); scanf("%c", &ch);
if(ch'n')
printf("ENTER YOUR NAME");
scanf("%s", &name1);
printf("ENTER YOUR PASSWORD: ");
scanf("%s", &password);
for (i=0;name[1]!='\0'||name[i]!= '\0';i++)
if(name[i]-namel[i])
same-0; break;
else
same-1;
}
}
for (1-8; password1[1]!= '\0'||password[i]!= '\0';i++)
{
if(password1[i]!=password[i])
{
same-0;
break;
}
else
{
same-1;
}
}
if(same==0)
{
printf("USER NAME or PASSWORD IS INCORRECT");
}
else
{
printf("LOGIN SUCCESFULL");
printf("ENTER YOUR ENGLISH MARK: "); scanf("%f",&mark1);
printf("ENTER YOUR TAMIL MARK: ");
scanf("%f",&mark2);
totall-mark1+mark2;
average totall/2;
printf("YOUR AVERAGE MARK IS: %.2f", average); break;
getch();