import java.util.Arrays;

public class EigenvalueCalculator {

    // Method to calculate eigenvalues of a 2x2 matrix
    public static double[] calculateEigenvalues(double[][] matrix) {
        double trace = matrix[0][0] + matrix[1][1]; // Trace of the matrix
        double determinant = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]; // Determinant of the matrix

        // Eigenvalue formula
        double discriminant = Math.sqrt(trace * trace - 4 * determinant);
        double lambda1 = (trace + discriminant) / 2;
        double lambda2 = (trace - discriminant) / 2;

        return new double[]{lambda1, lambda2};
    }

    // Method to calculate the eigenvector for a given eigenvalue
    public static double[] calculateEigenvector(double[][] matrix, double lambda) {
        double a = matrix[0][0] - lambda;
        double b = matrix[0][1];

        if (b != 0) {
            return new double[]{-b, a};
        } else if (a != 0) {
            return new double[]{1, 0};
        } else {
            return new double[]{0, 1};
        }
    }

    // Method to print the results
    public static void printResults(double[][] matrix, double[] eigenvalues, double[] eigenvector1, double[] eigenvector2, String matrixName) {
        System.out.println("Results for Matrix " + matrixName + ":");
        System.out.println("Matrix:");
        System.out.printf("[%.2f %.2f]\n", matrix[0][0], matrix[0][1]);
        System.out.printf("[%.2f %.2f]\n\n", matrix[1][0], matrix[1][1]);

        System.out.println("Eigenvalues:");
        System.out.printf("Lambda1: %.2f\n", eigenvalues[0]);
        System.out.printf("Lambda2: %.2f\n\n", eigenvalues[1]);

        System.out.println("Eigenvectors:");
        System.out.printf("Eigenvector for Lambda1: [%.2f, %.2f]\n", eigenvector1[0], eigenvector1[1]);
        System.out.printf("Eigenvector for Lambda2: [%.2f, %.2f]\n\n", eigenvector2[0], eigenvector2[1]);
    }

    public static void main(String[] args) {
        // Define matrices A, B, C, X, and Z
        double[][] A = {{1, 6}, {5, 2}};
        double[][] B = {{2, 3}, {3, -6}};
        double[][] C = {{7, 2}, {-4, 1}};
        double[][] X = {{1, 1}, {-1, 1}};
        double[][] Z = {{0, 0}, {0, 0}};

        // Arrays to hold eigenvalues and eigenvectors
        double[] eigenvalues;
        double[] eigenvector1;
        double[] eigenvector2;

        // Calculate and print results for Matrix A
        eigenvalues = calculateEigenvalues(A);
        eigenvector1 = calculateEigenvector(A, eigenvalues[0]);
        eigenvector2 = calculateEigenvector(A, eigenvalues[1]);
        printResults(A, eigenvalues, eigenvector1, eigenvector2, "A");

        // Calculate and print results for Matrix B
        eigenvalues = calculateEigenvalues(B);
        eigenvector1 = calculateEigenvector(B, eigenvalues[0]);
        eigenvector2 = calculateEigenvector(B, eigenvalues[1]);
        printResults(B, eigenvalues, eigenvector1, eigenvector2, "B");

        // Calculate and print results for Matrix C
        eigenvalues = calculateEigenvalues(C);
        eigenvector1 = calculateEigenvector(C, eigenvalues[0]);
        eigenvector2 = calculateEigenvector(C, eigenvalues[1]);
        printResults(C, eigenvalues, eigenvector1, eigenvector2, "C");

        // Calculate and print results for Matrix X
        eigenvalues = calculateEigenvalues(X);
        eigenvector1 = calculateEigenvector(X, eigenvalues[0]);
        eigenvector2 = calculateEigenvector(X, eigenvalues[1]);
        printResults(X, eigenvalues, eigenvector1, eigenvector2, "X");

        // Calculate and print results for Matrix Z
        eigenvalues = calculateEigenvalues(Z);
        eigenvector1 = calculateEigenvector(Z, eigenvalues[0]);
        eigenvector2 = calculateEigenvector(Z, eigenvalues[1]);
        printResults(Z, eigenvalues, eigenvector1, eigenvector2, "Z");
    }
}
