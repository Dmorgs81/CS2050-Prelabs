#include <stdio.h>
#include <stdlib.h>

#define ROWS 5
#define COLS 10

int **allocateArray()
{
    int **arr = malloc(ROWS * sizeof(int *));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    for (int i = 0; i < ROWS; i++) {
        arr[i] = malloc(COLS * sizeof(int));
        if (arr[i] == NULL) {
            printf("Memory allocation failed\n");
            exit(1);
        }
    }

    return arr;
}

void setupArray(int **arr)
{
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            arr[i][j] = 10+j*3;
        }
    }
}

void freeArray(int **arr)
{
    for (int i = 0; i < ROWS; i++) {
        free(arr[i]);
    }
    free(arr);
}

int main()
{
    int **arr = allocateArray();
    setupArray(arr);

    // Example: print first row
    for (int j = 0; j < COLS; j++) {
        printf("%d ", arr[0][j]);
    }
    printf("\n");

    freeArray(arr);
    return 0;
}
