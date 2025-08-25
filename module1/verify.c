#include <stdio.h>
#include <stdlib.h>

#define rows 2
#define cols 4

void printMatrix(double matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        printf("[ ");
        for (int j = 0; j < cols; j++)
        {
            printf("%7.2f", matrix[i][j]);
        }
        printf(" ]\n");
    }
}

int main() 
{
    double a[rows][cols] = {
        {1.0, 3.0, 4.0, 7.0},
        {3.0, 9.0, 7.0, 6.0}
    };
    printf("Initial state\n");
    printMatrix(a);

    for (int j = 0; j < cols; j++)
    {
        a[1][j] = a[1][j] - 3.0 * a[0][j];
    }
    printf("\nAfter R2 = R2 - 3*R1:\n");
    printMatrix(a);

    double stepConst = -1.0/5.0;
    for (int j = 0; j < cols; j++)
    {
        a[1][j] = stepConst * a[1][j];
    }
    printf("\nAfter R2 = (-1/5)*R2:\n");
    printMatrix(a);

    for (int j = 0; j < cols; j++)
    {
        a[0][j] = a[0][j] - 4.0 * a[1][j];
    }
    printf("\nAfter R1 = R1 - 4*R2 (Reduced Row Echelon Form):\n");
    printMatrix(a);

}
