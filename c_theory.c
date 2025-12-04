#include <stdio.h>
#include <stdlib.h>

// Safe integer input
int readInt() {
    int x;
    while (scanf("%d", &x) != 1) {
        printf("Invalid input! Enter integer: ");
        while (getchar() != '\n');
    }
    return x;
}

int main() {
    int M, N, P;

    printf("Enter M, N, P (Matrix dimensions): ");
    M = readInt();
    N = readInt();
    P = readInt();

    if (M <= 0 || N <= 0 || P <= 0) {
        printf("Error: Dimensions must be positive!\n");
        return 1;
    }

    // Allocate memory for matrices A, B, C
    int *A = (int*) malloc(M * N * sizeof(int));
    int *B = (int*) malloc(N * P * sizeof(int));
    int *C = (int*) malloc(M * P * sizeof(int));

    printf("\nEnter elements of Matrix A (%d x %d):\n", M, N);
    for (int i = 0; i < M * N; i++)
        A[i] = readInt();

    printf("\nEnter elements of Matrix B (%d x %d):\n", N, P);
    for (int i = 0; i < N * P; i++)
        B[i] = readInt();

    // Perform matrix multiplication
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            int sum = 0;
            for (int k = 0; k < N; k++) {
                sum += A[i * N + k] * B[k * P + j]; // Pointer arithmetic
            }
            C[i * P + j] = sum;
        }
    }

    // Output the result matrix
    printf("\nResult Matrix (C = A x B):\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            printf("%d ", C[i * P + j]);
        }
        printf("\n");
    }

    free(A);
    free(B);
    free(C);

    return 0;
}
