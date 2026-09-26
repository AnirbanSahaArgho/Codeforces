#include <stdio.h>
#include <stdbool.h>
 
bool is_composite(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return true;
    }
    return false;
}
 
int main() {
    int n;
    scanf("%d", &n);
 
    for (int x = 4; x < n; x++) {
        int y = n - x;
        if (is_composite(x) && is_composite(y)) {
            printf("%d %d
", x, y);
            return 0;
        }
    }
 
    return 0;
}