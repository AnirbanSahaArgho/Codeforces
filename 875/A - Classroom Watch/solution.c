#include <stdio.h>
 
int sum_dig(int n)
{
    int sum = 0;
    while(n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
 
    return sum;
}
 
int num_dig(int n)
{
    int num = 0;
    while(n != 0)
    {
        num++;
        n /= 10;
    }
 
    return num;
}
 
int main()
{
    int n, arr[1000], k = 0;
    scanf("%d", &n);
 
    int dig = num_dig(n), loop = n - 9 * dig + 1;
 
    for(int i = n - 1; i >= loop && i != 0; i--)
    {
        if(n == i + sum_dig(i))
        {
            arr[k] = i;
            k++;
        }
    }
 
    printf("%d
", k);
 
    if(k != 0)
    {
        for(int i = k - 1; i != -1; i--)
            printf("%d
", arr[i]);
    }
 
    return 0;
}