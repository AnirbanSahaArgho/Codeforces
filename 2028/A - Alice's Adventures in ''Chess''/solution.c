#include <stdio.h>
#include <string.h>
 
#define MAX_T 500
#define MAX_N 10
 
// Helper function to check if Alice will meet the Red Queen
const char* will_alice_meet_red_queen(int n, int a, int b, char *moves) {
    int x = 0, y = 0; // Initial position of Alice
 
    // First pass through the moves to see if Alice reaches (a, b) in one cycle
    for (int i = 0; i < n; i++) {
        if (moves[i] == 'N') y++;
        else if (moves[i] == 'E') x++;
        else if (moves[i] == 'S') y--;
        else if (moves[i] == 'W') x--;
 
        // Check if Alice reaches the Red Queen's position
        if (x == a && y == b) {
            return "YES";
        }
    }
 
    // After one full sequence of moves
    if (x == 0 && y == 0) {
        return "NO"; // Alice is in a loop that doesn't include (a, b)
    }
 
    // If Alice’s movement is not a cycle, repeat the sequence multiple times
    for (int repeat = 0; repeat < 100; repeat++) { // Arbitrarily large repeat count
        for (int i = 0; i < n; i++) {
            if (moves[i] == 'N') y++;
            else if (moves[i] == 'E') x++;
            else if (moves[i] == 'S') y--;
            else if (moves[i] == 'W') x--;
 
            if (x == a && y == b) {
                return "YES";
            }
        }
    }
 
    return "NO";
}
 
int main() {
    int t;
    scanf("%d", &t);
 
    for (int i = 0; i < t; i++) {
        int n, a, b;
        char moves[MAX_N + 1]; // to hold the moves string
 
        // Read input for each test case
        scanf("%d %d %d", &n, &a, &b);
        scanf("%s", moves);
 
        // Check if Alice meets the Red Queen and print result
        printf("%s
", will_alice_meet_red_queen(n, a, b, moves));
    }
 
    return 0;
}