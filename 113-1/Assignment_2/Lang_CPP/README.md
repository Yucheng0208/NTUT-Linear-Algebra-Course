# Eigenvalue and Eigenvector Calculator in C++

This program, written in C++, calculates eigenvalues and corresponding eigenvectors for predefined 2x2 matrices. It uses object-oriented programming concepts to perform linear algebra computations in a user-friendly way.

## Features

1. **Eigenvalue Calculation**:
   - Computes the eigenvalues for 2x2 matrices using the characteristic equation.
2. **Eigenvector Calculation**:
   - Determines the eigenvectors corresponding to each eigenvalue.
3. **Predefined Matrices**:
   - Includes five 2x2 matrices (A, B, C, X, Z) for demonstration.
4. **Readable Output**:
   - Clearly displays matrices, eigenvalues, and eigenvectors for each calculation.

## How to Use

1. Compile the program:
   ```bash
   g++ PA_2.cpp -o eigenvalue_calculator -lm
   ```

2. Run the executable:
   ```bash
   ./eigenvalue_calculator
   ```

3. The program will compute and display the eigenvalues and eigenvectors for each predefined matrix.

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
[1 6]
[5 2]

Eigenvalues:
Lambda1: 7.00
Lambda2: -4.00

Eigenvectors:
Eigenvector for Lambda1: [-6.00, 1.00]
Eigenvector for Lambda2: [-6.00, 1.00]
```

## Dependencies

- **Math Library**:
  - Required for functions like `sqrt`. Ensure to include `-lm` during compilation.

## Customization

Modify the matrices in the `main` function to calculate eigenvalues and eigenvectors for different 2x2 matrices.
