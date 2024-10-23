import java.util.Scanner;

public class MatrixOperations {

    // 矩陣加法 A + 3B (中文)
    // Matrix addition A + 3B (English)
    // Penjumlahan matriks A + 3B (Bahasa Indonesia)
    public static void matrixAddition(double[][] A, double[][] B) {
        System.out.println("Matrix A + 3B:");
        for (int i = 0; i < A.length; i++) {
            for (int j = 0; j < A[0].length; j++) {
                System.out.printf("%.2f ", A[i][j] + 3 * B[i][j]);
            }
            System.out.println();
        }
    }

    // 矩陣減法 C - B * E^T (中文)
    // Matrix subtraction C - B * E^T (English)
    // Pengurangan matriks C - B * E^T (Bahasa Indonesia)
    public static void matrixSubtraction(double[][] C, double[][] B, double[][] E) {
        System.out.println("Matrix C - B * E^T:");
        for (int i = 0; i < B.length; i++) {
            for (int j = 0; j < E.length; j++) {
                double sum = 0;
                for (int k = 0; k < B[0].length; k++) {
                    sum += B[i][k] * E[j][k];  // B * E^T
                }
                System.out.printf("%.2f ", C[i][j] - sum);
            }
            System.out.println();
        }
    }

    // 矩陣轉置 A^T (中文)
    // Matrix transpose A^T (English)
    // Transposisi matriks A^T (Bahasa Indonesia)
    public static void matrixTranspose(double[][] A) {
        System.out.println("Transpose of A:");
        for (int i = 0; i < A[0].length; i++) {
            for (int j = 0; j < A.length; j++) {
                System.out.printf("%.2f ", A[j][i]);
            }
            System.out.println();
        }
    }

    // 判斷矩陣是否為對角矩陣 (中文)
    // Check if the matrix is diagonal (English)
    // Periksa apakah matriks adalah matriks diagonal (Bahasa Indonesia)
    public static boolean isDiagonal(double[][] matrix) {
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                if (i != j && matrix[i][j] != 0)
                    return false;
            }
        }
        return true;
    }

    // 判斷矩陣是否為對稱矩陣 (中文)
    // Check if the matrix is symmetric (English)
    // Periksa apakah matriks adalah matriks simetris (Bahasa Indonesia)
    public static boolean isSymmetric(double[][] matrix) {
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                if (matrix[i][j] != matrix[j][i])
                    return false;
            }
        }
        return true;
    }

    // 檢查矩陣屬性: 對角矩陣與對稱矩陣 (中文)
    // Check matrix properties: diagonal and symmetric (English)
    // Periksa sifat matriks: diagonal dan simetris (Bahasa Indonesia)
    public static void checkMatrixProperties(double[][] A, double[][] B, double[][] F, double[][] I) {
        System.out.println("Is A diagonal? " + (isDiagonal(A) ? "Yes" : "No"));
        System.out.println("Is B diagonal? " + (isDiagonal(B) ? "Yes" : "No"));
        System.out.println("Is F diagonal? " + (isDiagonal(F) ? "Yes" : "No"));
        System.out.println("Is I diagonal? " + (isDiagonal(I) ? "Yes" : "No"));

        System.out.println("Is A symmetric? " + (isSymmetric(A) ? "Yes" : "No"));
        System.out.println("Is B symmetric? " + (isSymmetric(B) ? "Yes" : "No"));
        System.out.println("Is F symmetric? " + (isSymmetric(F) ? "Yes" : "No"));
        System.out.println("Is I symmetric? " + (isSymmetric(I) ? "Yes" : "No"));
    }

    public static void main(String[] args) {
        // 定義所有矩陣 (中文)
        // Define all matrices (English)
        // Definisikan semua matriks (Bahasa Indonesia)
        double[][] A = {{2, -2}, {3, -5}};
        double[][] B = {{-2, 0}, {0, 2}};
        double[][] C = {{-1, 2, 0}, {2, 0, 3}};
        double[][] E = {{2, -1}, {Math.PI, Math.log10(2)}, {-2, 3}};
        double[][] F = {{1, 2, 3}, {2, 3, 4}, {3, 5, 7}};
        double[][] I = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};

        Scanner scanner = new Scanner(System.in);

        System.out.println("請選擇語言 / Please select a language / Silakan pilih bahasa:");
        System.out.println("1. 中文");
        System.out.println("2. English");
        System.out.println("3. Bahasa Indonesia");

        int choice = scanner.nextInt();

        switch (choice) {
            case 1:
                System.out.println("矩陣加法 A + 3B:");
                matrixAddition(A, B);
                System.out.println("矩陣減法 C - B * E^T:");
                matrixSubtraction(C, B, E);
                System.out.println("矩陣轉置 A^T:");
                matrixTranspose(A);
                checkMatrixProperties(A, B, F, I);
                break;
            case 2:
                System.out.println("Matrix Addition A + 3B:");
                matrixAddition(A, B);
                System.out.println("Matrix Subtraction C - B * E^T:");
                matrixSubtraction(C, B, E);
                System.out.println("Transpose of A:");
                matrixTranspose(A);
                checkMatrixProperties(A, B, F, I);
                break;
            case 3:
                System.out.println("Penjumlahan Matriks A + 3B:");
                matrixAddition(A, B);
                System.out.println("Pengurangan Matriks C - B * E^T:");
                matrixSubtraction(C, B, E);
                System.out.println("Transpose Matriks A^T:");
                matrixTranspose(A);
                checkMatrixProperties(A, B, F, I);
                break;
            default:
                System.out.println("無效的選擇 / Invalid choice / Pilihan tidak valid");
        }

        scanner.close();
    }
}
