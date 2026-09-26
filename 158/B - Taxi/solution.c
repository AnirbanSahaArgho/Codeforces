#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
 
    int groups[5] = {0};
    int s, taxis = 0;
 
    for (int i = 0; i < n; i++) {
        scanf("%d", &s);
        groups[s]++;
    }
    
    taxis += groups[4];
 
    int min_3_and_1 = groups[3] < groups[1] ? groups[3] : groups[1];
    taxis += groups[3];
    groups[1] -= min_3_and_1;
 
    taxis += groups[2] / 2;
    if (groups[2] % 2 != 0) {
        taxis++;
        groups[1] -= 2;
    }
 
    if (groups[1] > 0) {
        taxis += (groups[1] + 3) / 4;
    }
 
    printf("%d
", taxis);
    return 0;
}