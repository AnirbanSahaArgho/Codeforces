#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int m, a, b, c;
        scanf("%d %d %d %d", &m, &a, &b, &c);
        int sum_a = (a > m) ? m : a;
        int sum_b = (b > m) ? m : b;
        int vacant_in_row1 = m - sum_a;
        int vacant_in_row2 = m - sum_b;
        int c_in_row1 = (c > vacant_in_row1) ? vacant_in_row1 : c;
        c -= c_in_row1;
        int c_in_row2 = (c > vacant_in_row2) ? vacant_in_row2 : c;
        int total = sum_a + sum_b + c_in_row1 + c_in_row2;
 
        printf("%d
", total);
    }
    return 0;
}