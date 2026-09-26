#include <stdio.h>
 
int main() {
int m,n;
scanf("%d%d",&m,&n);
if(m<=n&&m%2==0)
printf("Malvika");
else if(m<=n&&m%2!=0)
printf("Akshat");
else if(n<=m&&n%2==0)
printf("Malvika");
else if(n<=m&&n%2!=0)
printf("Akshat");
}