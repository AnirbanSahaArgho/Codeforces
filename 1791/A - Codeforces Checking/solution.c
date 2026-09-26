#include <stdio.h>
 
int main()
{
    int t;
    char s[] = "codeforces";
    scanf("%d", &t);
 
    while (t--)
    {
        char c;
        int x = 0;
 
        scanf(" %c", &c);
 
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == c)
            {
                x = 1;
                break;
            }
        }
        if (x == 0)
        {
            printf("NO
");
        }
        else
        {
            printf("YES
");
        }
    }
    return 0;
}