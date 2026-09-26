#include<stdio.h>
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x=0;
        char s[5];
        scanf("%s",s);
        switch(s[0])
        {
            case '9':
                x+=10;
            case '8':
                x+=10;
            case '7':
                x+=10;
            case '6':
                x+=10;
            case '5':
                x+=10;
            case '4':
                x+=10;
            case '3':
                x+=10;
            case '2':
                x+=10;
        }
        for(int i=0;s[i]!='\0';i++)
        {
            x+=i+1;
        }
        printf("%d
",x);
    }
    return 0;
}