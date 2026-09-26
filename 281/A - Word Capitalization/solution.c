#include<stdio.h>
int main()
{
    char a[1000];
    gets(a);
    if(a[0]>='a')
      {
          a[0]='A'+(a[0]-'a');
      }
    puts(a);
    return 0;
}