#include<stdio.h>
#include<string.h>
#define MAX 20

//GRADE VALUE_CALC
double grade_func(char grd[2])
{
if(grd[0]=='A'|| grd[0]=='a')			//grade a
{
if(grd[1]=='+')
return 10;
else
return 9;
}
else if(grd[0]=='B' || grd[0]=='b')		//grade b
{
if(grd[1]=='+')
return 8.25;
else
return 7.5;
}
else if(grd[0]=='C'|| grd[0]=='c')		//grade c
{
if(grd[1]=='+')
return 6.75;
else
return 6;
}
else if(grd[0]=='D' || grd[0]=='d'){		//grade d
return 5;
}
else if(grd[0]=='F' || grd[0]=='f'){
return 0;
}
else{
printf("Invalid grade.\n");
return -1;
}
}

//WELCOME MESSAGE PRINTER
int welcome()
{
int l;
char welmsg[]="\tWelcome to GPA calculator";
printf("\t");
for(l=0;l<strlen(welmsg)+3;l++){
printf("*");
}
printf("\n\t* Welcome to GPA calculator *\n");
printf("\t");
for(l=0;l<strlen(welmsg)+3;l++){
printf("*");
}
printf("\n\n");
return 0;
}

//MAIN FUNCTION
int main()
{
char grade[2];
int sub[MAX],i,n,cred;
double totcred=0,totgrade=0,gpa=0;
welcome();
printf("Enter total number of courses: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Subject %d\n",i);
printf("Enter course credit: ");
scanf("%d",&cred);
printf("Enter grade for subject number: ");
scanf("%s",grade);
if(grade_func(grade)==-1){
i--;
}
totgrade+= (double)(cred * grade_func(grade));
totcred+= cred;
gpa=totgrade/totcred;
}
printf("\nYOUR GPA IS %.3lf\n",gpa);
return 0;
}
