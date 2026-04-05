#include <stdio.h>

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < 3; i++)        // rows
    {
        for (int j = 0; j < 3; j++)    // columns
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
       
    }

     int det;

    det = arr[0][0] * (arr[1][1]*arr[2][2] - arr[1][2]*arr[2][1])
        - arr[0][1] * (arr[1][0]*arr[2][2] - arr[1][2]*arr[2][0])
        + arr[0][2] * (arr[1][0]*arr[2][1] - arr[1][1]*arr[2][0]);

    printf("Determinant = %d", det);

    return 0;
}

    