#include <stdio.h>
int main ()
{
int d,m,yy,y,day,q,i,k,n;
printf("Enter date (dd/mm/yyyy):");
scanf("%d/%d/%d", &d, &m, &yy);

for(i=1;i<(m+1);i++)
{ k=i-1;
    switch(k){
    case 1 : y=31 ; break;
    case 2 : y+=28 ; break;
    case 3 : y+=31; break;
    case 4 : y+=30 ;break;
    case 5 : y+=31 ;break;
    case 6 : y+=30 ;break;
    case 7 : y+=31 ;break;
    case 8 : y+=31 ;break;
    case 9 : y+=30 ;break;
    case 10 : y+=31 ;break;
    case 11 : y+=30 ;break;
    case 12 : y+=31 ;break;
}}
if(m>2){n = (yy-2000)/4 + 1;}
else if (m<=2){n = (yy-2000)/4;}

day = d-1 + y + (yy-2000)*365 + n;

q = day%7;

switch (q){
case  0 : printf("Saturday"); break;
case  1 : printf("Sunday"); break;
case  2 : printf("Monday"); break;
case  3 : printf("Tuesday"); break;
case  4 : printf("Wednesday"); break;
case  5 : printf("Thursday"); break;
case  6 : printf("Friday"); break;
}


return 0;
}
