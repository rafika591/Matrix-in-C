#include<stdio.h>
int main() {
    int matrix[3][3] = {
        {0, 1, 0},
        {4, 0, 6},
        {0, 8, 0}
    };

    int count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] == 0) {
                count++;
            }
        }
    }

    printf("Total number of zeros: %d\n", count);

    return 0;
}
