#include <stdio.h>
#include <math.h>

// Function: Calculate the eigenvalues of a 2x2 matrix
void calculateEigenvalues(double matrix[2][2], double *lambda1, double *lambda2) {
    double trace = matrix[0][0] + matrix[1][1]; // Trace of the matrix
    double determinant = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]; // Determinant of the matrix

    // Eigenvalue formula
    double discriminant = sqrt(trace * trace - 4 * determinant);
    *lambda1 = (trace + discriminant) / 2;
    *lambda2 = (trace - discriminant) / 2;
}

// Function: Calculate the eigenvector corresponding to an eigenvalue
void calculateEigenvector(double matrix[2][2], double lambda, double eigenvector[2]) {
    double a = matrix[0][0] - lambda;
    double b = matrix[0][1];

    if (b != 0) {
        eigenvector[0] = -b;
        eigenvector[1] = a;
    } else if (a != 0) {
        eigenvector[0] = 1;
        eigenvector[1] = 0;
    } else {
        eigenvector[0] = 0;
        eigenvector[1] = 1;
    }
}

// Function: Print matrix, eigenvalues, and eigenvectors
void printResults(double matrix[2][2], double lambda1, double lambda2, double eigenvector1[2], double eigenvector2[2], const char *matrixName) {
    printf("Results for Matrix %s:\n", matrixName);
    printf("Matrix:\n");
    printf("[%.2f %.2f]\n", matrix[0][0], matrix[0][1]);
    printf("[%.2f %.2f]\n\n", matrix[1][0], matrix[1][1]);

    printf("Eigenvalues:\n");
    printf("Lambda1: %.2f\n", lambda1);
    printf("Lambda2: %.2f\n\n", lambda2);

    printf("Eigenvectors:\n");
    printf("Eigenvector for Lambda1: [%.2f, %.2f]\n", eigenvector1[0], eigenvector1[1]);
    printf("Eigenvector for Lambda2: [%.2f, %.2f]\n\n", eigenvector2[0], eigenvector2[1]);
}

int main() {
    // Define matrices A, B, C, X, and Z
    double A[2][2] = {{1, 6}, {5, 2}};
    double B[2][2] = {{2, 3}, {3, -6}};
    double C[2][2] = {{7, 2}, {-4, 1}};
    double X[2][2] = {{1, 1}, {-1, 1}};
    double Z[2][2] = {{0, 0}, {0, 0}};

    // Variables for eigenvalues and eigenvectors
    double lambda1, lambda2;
    double eigenvector1[2], eigenvector2[2];

    // Calculate and print results for matrix A
    calculateEigenvalues(A, &lambda1, &lambda2);
    calculateEigenvector(A, lambda1, eigenvector1);
    calculateEigenvector(A, lambda2, eigenvector2);
    printResults(A, lambda1, lambda2, eigenvector1, eigenvector2, "A");

    // Calculate and print results for matrix B
    calculateEigenvalues(B, &lambda1, &lambda2);
    calculateEigenvector(B, lambda1, eigenvector1);
    calculateEigenvector(B, lambda2, eigenvector2);
    printResults(B, lambda1, lambda2, eigenvector1, eigenvector2, "B");

    // Calculate and print results for matrix C
    calculateEigenvalues(C, &lambda1, &lambda2);
    calculateEigenvector(C, lambda1, eigenvector1);
    calculateEigenvector(C, lambda2, eigenvector2);
    printResults(C, lambda1, lambda2, eigenvector1, eigenvector2, "C");

    // Calculate and print results for matrix X
    calculateEigenvalues(X, &lambda1, &lambda2);
    calculateEigenvector(X, lambda1, eigenvector1);
    calculateEigenvector(X, lambda2, eigenvector2);
    printResults(X, lambda1, lambda2, eigenvector1, eigenvector2, "X");

    // Calculate and print results for matrix Z
    calculateEigenvalues(Z, &lambda1, &lambda2);
    calculateEigenvector(Z, lambda1, eigenvector1);
    calculateEigenvector(Z, lambda2, eigenvector2);
    printResults(Z, lambda1, lambda2, eigenvector1, eigenvector2, "Z");

    return 0;
}
