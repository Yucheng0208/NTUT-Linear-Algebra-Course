# Matrix Operations in Python

This Python program leverages the NumPy library to perform matrix operations such as addition, subtraction, transpose, property checks (diagonal and symmetric), and advanced operations including multiplication and inversion. It supports multilingual interaction with options for Chinese, English, and Bahasa Indonesia.

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
5. **Matrix Multiplications**:
   - Computes \( M = A \times B \) and \( N = B \times A \).
   - Computes \( P = C^T \times B^T \) and \( Q = (B \times C)^T \).
6. **Matrix Inversion**:
   - Attempts to calculate the inverse of matrices \( A \) and \( F \).

## How to Use

1. Ensure you have Python and NumPy installed:
   ```bash
   pip install numpy
   ```

2. Run the script:
   ```bash
   python PA_1.py
   ```

3. The program will execute all matrix operations and display results for predefined matrices.

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
[[-4. -2.]
 [ 3.  1.]]

Matrix Subtraction C - B * E^T:
[[-5.28 -1.30]
 [-4.56 -2.00]]

Transpose of A:
[[ 2.  3.]
 [-2. -5.]]

Is A diagonal? False
Is B diagonal? True
Is F diagonal? False
Is I diagonal? True
```

## Customization

Modify the predefined matrices in the `MatrixOperations` class to experiment with different values and configurations. Extend functionality by implementing additional matrix operations as needed.

## Dependencies

- **NumPy**: Install via `pip install numpy`.