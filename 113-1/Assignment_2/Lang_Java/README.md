# Eigenvalue and Eigenvector Calculator in Java

This program, written in Java, calculates eigenvalues and corresponding eigenvectors for predefined 2x2 matrices. It utilizes simple numeric computations to demonstrate linear algebra concepts in an easy-to-understand manner.

## Features

1. **Eigenvalue Calculation**:
   - Computes eigenvalues for 2x2 matrices using the characteristic equation.
2. **Eigenvector Calculation**:
   - Determines eigenvectors corresponding to each eigenvalue.
3. **Predefined Matrices**:
   - Includes matrices A, B, C, X, and Z for demonstration.
4. **Readable Output**:
   - Provides clear and formatted results for matrices, eigenvalues, and eigenvectors.

## How to Use

1. Compile the program:
   ```bash
   javac PA_2.java
   ```

2. Run the program:
   ```bash
   java EigenvalueCalculator
   ```

3. The program will display the eigenvalues and eigenvectors for each predefined matrix.

## Input Matrices

- **Matrix A**: `[[1, 6], [5, 2]]`
- **Matrix B**: `[[2, 3], [3, -6]]`
- **Matrix C**: `[[7, 2], [-4, 1]]`
- **Matrix X**: `[[1, 1], [-1, 1]]`
- **Matrix Z**: `[[0, 0], [0, 0]]`

## Sample Output

```plaintext
Results for Matrix A:
Matrix:
[1.00 6.00]
[5.00 2.00]

Eigenvalues:
Lambda1: 7.00
Lambda2: -4.00

Eigenvectors:
Eigenvector for Lambda1: [-6.00, 1.00]
Eigenvector for Lambda2: [-6.00, 1.00]
```

## Customization

Modify the predefined matrices in the `main` method to test different matrices. Extend the program by adding support for larger matrices or additional operations.