#include <stdio.h>
#include <math.h>

#define ROWS_A 2
#define COLS_A 2
#define ROWS_B 2
#define COLS_B 2
#define ROWS_C 2
#define COLS_C 3
#define ROWS_E 3
#define COLS_E 2
#define ROWS_F 3
#define COLS_F 3
#define ROWS_I 3
#define COLS_I 3

// 矩陣加法 A + 3B (中文)
// Matrix addition A + 3B (English)
// Penjumlahan matriks A + 3B (Bahasa Indonesia)
void matrix_addition(double A[ROWS_A][COLS_A], double B[ROWS_B][COLS_B]) {
    printf("Matrix A + 3B:\n");
    for (int i = 0; i < ROWS_A; ++i) {
        for (int j = 0; j < COLS_A; ++j) {
            printf("%.2f ", A[i][j] + 3 * B[i][j]);
        }
        printf("\n");
    }
}

// 矩陣減法 C - B * E^T (中文)
// Matrix subtraction C - B * E^T (English)
// Pengurangan matriks C - B * E^T (Bahasa Indonesia)
void matrix_subtraction(double C[ROWS_C][COLS_C], double B[ROWS_B][COLS_B], double E[ROWS_E][COLS_E]) {
    printf("Matrix C - B * E^T:\n");
    for (int i = 0; i < ROWS_B; ++i) {
        for (int j = 0; j < COLS_E; ++j) {
            double sum = 0;
            for (int k = 0; k < COLS_B; ++k) {
                sum += B[i][k] * E[j][k];  // B * E^T
            }
            printf("%.2f ", C[i][j] - sum);
        }
        printf("\n");
    }
}

// 矩陣轉置 A^T (中文)
// Matrix transpose A^T (English)
// Transposisi matriks A^T (Bahasa Indonesia)
void matrix_transpose(double A[ROWS_A][COLS_A]) {
    printf("Transpose of A:\n");
    for (int i = 0; i < COLS_A; ++i) {
        for (int j = 0; j < ROWS_A; ++j) {
            printf("%.2f ", A[j][i]);
        }
        printf("\n");
    }
}

// 判斷矩陣是否為對角矩陣 (中文)
// Check if the matrix is diagonal (English)
// Periksa apakah matriks adalah matriks diagonal (Bahasa Indonesia)
int is_diagonal(double matrix[ROWS_F][COLS_F], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (i != j && matrix[i][j] != 0)
                return 0;
        }
    }
    return 1;
}

// 判斷矩陣是否為對稱矩陣 (中文)
// Check if the matrix is symmetric (English)
// Periksa apakah matriks adalah matriks simetris (Bahasa Indonesia)
int is_symmetric(double matrix[ROWS_F][COLS_F], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] != matrix[j][i])
                return 0;
        }
    }
    return 1;
}

void check_matrix_properties(double A[ROWS_A][COLS_A], double B[ROWS_B][COLS_B], double F[ROWS_F][COLS_F], double I[ROWS_I][COLS_I]) {
    printf("Is A diagonal? %s\n", is_diagonal(A, ROWS_A, COLS_A) ? "Yes" : "No");
    printf("Is B diagonal? %s\n", is_diagonal(B, ROWS_B, COLS_B) ? "Yes" : "No");
    printf("Is F diagonal? %s\n", is_diagonal(F, ROWS_F, COLS_F) ? "Yes" : "No");
    printf("Is I diagonal? %s\n", is_diagonal(I, ROWS_I, COLS_I) ? "Yes" : "No");

    printf("Is A symmetric? %s\n", is_symmetric(A, ROWS_A, COLS_A) ? "Yes" : "No");
    printf("Is B symmetric? %s\n", is_symmetric(B, ROWS_B, COLS_B) ? "Yes" : "No");
    printf("Is F symmetric? %s\n", is_symmetric(F, ROWS_F, COLS_F) ? "Yes" : "No");
    printf("Is I symmetric? %s\n", is_symmetric(I, ROWS_I, COLS_I) ? "Yes" : "No");
}

// 主程式入口 (中文)
// Main function (English)
// Fungsi utama (Bahasa Indonesia)
int main() {
    // 定義所有矩陣 (中文) / Define all matrices (English) / Definisikan semua matriks (Bahasa Indonesia)
    double A[ROWS_A][COLS_A] = {{2, -2}, {3, -5}};
    double B[ROWS_B][COLS_B] = {{-2, 0}, {0, 2}};
    double C[ROWS_C][COLS_C] = {{-1, 2, 0}, {2, 0, 3}};
    double E[ROWS_E][COLS_E] = {{2, -1}, {M_PI, log10(2)}, {-2, 3}};
    double F[ROWS_F][COLS_F] = {{1, 2, 3}, {2, 3, 4}, {3, 5, 7}};
    double I[ROWS_I][COLS_I] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};

    int choice;

    printf("請選擇語言 / Please select a language / Silakan pilih bahasa:\n");
    printf("1. 中文\n");
    printf("2. English\n");
    printf("3. Bahasa Indonesia\n");

    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("矩陣加法 A + 3B:\n");
            matrix_addition(A, B);
            printf("矩陣減法 C - B * E^T:\n");
            matrix_subtraction(C, B, E);
            printf("矩陣轉置 A^T:\n");
            matrix_transpose(A);
            check_matrix_properties(A, B, F, I);
            break;
        case 2:
            printf("Matrix Addition A + 3B:\n");
            matrix_addition(A, B);
            printf("Matrix Subtraction C - B * E^T:\n");
            matrix_subtraction(C, B, E);
            printf("Transpose of A:\n");
            matrix_transpose(A);
            check_matrix_properties(A, B, F, I);
            break;
        case 3:
            printf("Penjumlahan Matriks A + 3B:\n");
            matrix_addition(A, B);
            printf("Pengurangan Matriks C - B * E^T:\n");
            matrix_subtraction(C, B, E);
            printf("Transpose Matriks A^T:\n");
            matrix_transpose(A);
            check_matrix_properties(A, B, F, I);
            break;
        default:
            printf("無效的選擇 / Invalid choice / Pilihan tidak valid\n");
    }

    return 0;
}
