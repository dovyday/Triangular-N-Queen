#include "Queen.h"
#include <stdio.h>
#include <stdlib.h>

void solve(FILE *input) {
    int N;
    while (fscanf(input, "%d", &N) == 1) {
        Queen queens[1000]; 
        int k = (2 * N + 1) / 3;
        printf("%d %d\n", N, k);

        int queen_count = 0;
        if (N == 1) {
            queens[queen_count].row = 1;
            queens[queen_count].col = 1;
            queen_count++;
        } else if (N == 2) {
            queens[queen_count].row = 1;
            queens[queen_count].col = 1;
            queen_count++;
        } else if (N == 3) {
            queens[queen_count].row = 1;
            queens[queen_count].col = 1;
            queen_count++;
            queens[queen_count].row = 3;
            queens[queen_count].col = 2;
            queen_count++;
        } else {
            int a = N / 3;
            int s = a + 1;
            int q1 = (k + 1) / 2;
            int q2 = k - q1;
            for (int i = 0; i < q1; i++) {
                int row = s + i;
                if (row > N) break;
                int col = 1 + 2 * i;
                queens[queen_count].row = row;
                queens[queen_count].col = col;
                queen_count++;
            }
            int start_second = s + q1;
            for (int i = 0; i < q2; i++) {
                int row = start_second + i;
                if (row > N) break;
                int col = 2 + 2 * i;
                queens[queen_count].row = row;
                queens[queen_count].col = col;
                queen_count++;
            }
        }

        
        for (int i = 0; i < queen_count; i++) {
            printf("[%d,%d]", queens[i].row, queens[i].col);
            if ((i + 1) % 8 == 0 || i == queen_count - 1) {
                printf("\n");
            } else {
                printf(" ");
            }
        }
        printf("\n");

        
        for (int i = 1; i <= N; i++) {
            for (int j = 0; j < N - i; j++) {
                printf(" ");
            }
            
            for (int j = 1; j <= i; j++) {
                int is_queen = 0;
                for (int q = 0; q < queen_count; q++) {
                    if (queens[q].row == i && queens[q].col == j) {
                        is_queen = 1;
                        break;
                    }
                }
                printf("%c ", is_queen ? 'Q' : '.');
            }
            printf("\n");
        }
        printf("\n");
    }
}