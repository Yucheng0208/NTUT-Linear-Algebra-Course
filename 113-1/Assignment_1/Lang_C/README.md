# Matrix Operations in C

This program, written in C, performs various matrix operations, including addition, subtraction, transpose, and checks for matrix properties such as diagonal and symmetric matrices. It also introduces eigenvalue and eigenvector calculations for selected matrices.

## Features

1. **Matrix Addition**:
   - Computes \( A + 3B \).
2. **Matrix Subtraction**:
   - Computes \( C - B \times E^T \).
3. **Matrix Transpose**:
   - Calculates the transpose of matrix \( A \).
4. **Property Checks**:
   - Checks if a matrix is diagonal.
   - Checks if a matrix is symmetric.
5. **Eigenvalues and Eigenvectors**:
   - Calculates eigenvalues and corresponding eigenvectors for 2x2 matrices.

## How to Use

1. Compile the program:
   ```bash
   gcc PA_1.c -o matrix_operations -lm
   ```

2. Run the executable:
   ```bash
   ./matrix_operations
   ```

3. Select a language:
   - `1` for Chinese
   - `2` for English
   - `3` for Bahasa Indonesia

4. The program will execute matrix operations and display results based on the input language.

## Input Matrices

- \( A \): `[[2, -2], [3, -5]]`
- \( B \): `[[-2, 0], [0, 2]]`
- \( C \): `[[-1, 2, 0], [2, 0, 3]]`
- \( E \): `[[2, -1], [\pi, \log_{10}(2)], [-2, 3]]`
- \( F \): `[[1, 2, 3], [2, 3, 4], [3, 5, 7]]`
- \( I \): Identity matrix `[3x3]`

## Sample Output

```plaintext
Matrix Addition A + 3B:
-4.00 -2.00 
3.00 1.00 

Matrix Subtraction C - B * E^T:
-5.28 -1.30 
-4.56 -2.00 

Transpose of A:
2.00 3.00 
-2.00 -5.00 

Is A diagonal? No
Is B diagonal? Yes
Is F diagonal? No
Is I diagonal? Yes
Is A symmetric? No
Is B symmetric? Yes
Is F symmetric? No
Is I symmetric? Yes
```

## Dependencies

- **Math Library**: Required for mathematical functions like `log10` and constants like \( \pi \).
  - Include `-lm` during compilation.

## Customization

Modify the matrix values in the `main` function to test different scenarios. You can also extend the program to handle larger matrices or additional operations.