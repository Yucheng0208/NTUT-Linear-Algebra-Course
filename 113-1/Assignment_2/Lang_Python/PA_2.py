import numpy as np

# Function to calculate eigenvalues and eigenvectors
def calculate_eigen(matrix):
    # Use numpy to calculate eigenvalues and eigenvectors
    eigenvalues, eigenvectors = np.linalg.eig(matrix)
    return eigenvalues, eigenvectors

# Function to print results for a matrix
def print_results(matrix, eigenvalues, eigenvectors, matrix_name):
    print(f"Results for Matrix {matrix_name}:")
    print("Matrix:")
    print(np.array(matrix))
    print("\nEigenvalues:")
    print(f"Lambda1: {eigenvalues[0]:.2f}")
    print(f"Lambda2: {eigenvalues[1]:.2f}")
    print("\nEigenvectors:")
    print(f"Eigenvector for Lambda1: {eigenvectors[:, 0]}")
    print(f"Eigenvector for Lambda2: {eigenvectors[:, 1]}\n")

# Define matrices A, B, C, X, and Z
A = np.array([[1, 6], [5, 2]])
B = np.array([[2, 3], [3, -6]])
C = np.array([[7, 2], [-4, 1]])
X = np.array([[1, 1], [-1, 1]])
Z = np.array([[0, 0], [0, 0]])

# List of matrices and their names
matrices = [("A", A), ("B", B), ("C", C), ("X", X), ("Z", Z)]

# Process and print results for each matrix
for name, matrix in matrices:
    eigenvalues, eigenvectors = calculate_eigen(matrix)
    print_results(matrix, eigenvalues, eigenvectors, name)
