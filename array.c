#include <stdio.h>

#define ROWS 3
#define COLS 3

/* Function declaration to input and print two dimensional array */
void inputMatrix(int matrix[][COLS], int rows, int cols);
void printMatrix(int matrix[][COLS], int rows, int cols);



int main()
{
    int matrix[ROWS][COLS];
    int i, j;

    /* Input elements in matrix */
    printf("Enter elements in %dx%d matrix.\n", ROWS, COLS);
    inputMatrix(matrix, ROWS, COLS);


    /* Print elements in matrix */
    printf("Elements of %dx%d matrix.\n", ROWS, COLS);
    printMatrix(matrix, ROWS, COLS);


    return 0;
}
