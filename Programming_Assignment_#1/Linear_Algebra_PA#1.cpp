// Ref. Programming Assignment #1_Fall_2024.pdf
#include <iostream>
#include <vector>
#include <cmath> // for mathematical functions like log10

using namespace std;

// 矩陣操作類別 (中文)
// Matrix operations class (English)
// Kelas operasi matriks (Bahasa Indonesia)
class MatrixOperations {
protected:
    vector<vector<double>> A, B, C, E, F, I;

public:
    MatrixOperations() {
        // 初始化矩陣 (中文)
        // Initialize matrices (English)
        // Inisialisasi matriks (Bahasa Indonesia)
        A = {{2, -2}, {3, -5}};
        B = {{-2, 0}, {0, 2}};
        C = {{-1, 2, 0}, {2, 0, 3}};
        E = {{2, -1}, {M_PI, log10(2)}, {-2, 3}};
        F = {{1, 2, 3}, {2, 3, 4}, {3, 5, 7}};
        I = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    }

    // 矩陣加法 A + 3B (中文)
    // Matrix addition A + 3B (English)
    // Penjumlahan matriks A + 3B (Bahasa Indonesia)
    void addition() {
        cout << "Matrix A + 3B:" << endl;
        for (int i = 0; i < A.size(); ++i) {
            for (int j = 0; j < A[0].size(); ++j) {
                cout << A[i][j] + 3 * B[i][j] << " ";
            }
            cout << endl;
        }
    }

    // 矩陣減法 C - B * E^T (中文)
    // Matrix subtraction C - B * E^T (English)
    // Pengurangan matriks C - B * E^T (Bahasa Indonesia)
    void subtraction() {
        cout << "Matrix C - B * E^T:" << endl;
        for (int i = 0; i < B.size(); ++i) {
            for (int j = 0; j < E.size(); ++j) {
                double sum = 0;
                for (int k = 0; k < E.size(); ++k) {
                    sum += B[i][k] * E[j][k]; // B * E^T
                }
                cout << C[i][j] - sum << " ";
            }
            cout << endl;
        }
    }

    // 矩陣轉置 A^T (中文)
    // Matrix transpose A^T (English)
    // Transposisi matriks A^T (Bahasa Indonesia)
    void transpose() {
        cout << "Transpose of A:" << endl;
        for (int i = 0; i < A[0].size(); ++i) {
            for (int j = 0; j < A.size(); ++j) {
                cout << A[j][i] << " ";
            }
            cout << endl;
        }
    }

    // 判斷矩陣是否為對角矩陣 (中文)
    // Check if the matrix is diagonal (English)
    // Periksa apakah matriks adalah matriks diagonal (Bahasa Indonesia)
    bool isDiagonal(const vector<vector<double>> &matrix) {
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[0].size(); ++j) {
                if (i != j && matrix[i][j] != 0)
                    return false;
            }
        }
        return true;
    }

    // 判斷矩陣是否為對稱矩陣 (中文)
    // Check if the matrix is symmetric (English)
    // Periksa apakah matriks adalah matriks simetris (Bahasa Indonesia)
    bool isSymmetric(const vector<vector<double>> &matrix) {
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[0].size(); ++j) {
                if (matrix[i][j] != matrix[j][i])
                    return false;
            }
        }
        return true;
    }

    // 顯示矩陣是否為對角矩陣與對稱矩陣 (中文)
    // Display if matrices are diagonal and symmetric (English)
    // Tampilkan apakah matriks adalah matriks diagonal dan simetris (Bahasa Indonesia)
    void checkProperties() {
        cout << "Is A diagonal? " << (isDiagonal(A) ? "Yes" : "No") << endl;
        cout << "Is A symmetric? " << (isSymmetric(A) ? "Yes" : "No") << endl;
    }
};

// 中文版本的矩陣操作 (中文)
// Matrix operations in Chinese (English)
// Operasi matriks dalam Bahasa Cina (Bahasa Indonesia)
class MatrixOperationsChinese : public MatrixOperations {
public:
    void run() {
        cout << "矩陣加法 A + 3B:" << endl;
        addition();
        cout << "矩陣減法 C - B * E^T:" << endl;
        subtraction();
        cout << "矩陣轉置 A^T:" << endl;
        transpose();
        checkProperties();
    }
};

// 英文版本的矩陣操作 (中文)
// Matrix operations in English (English)
// Operasi matriks dalam Bahasa Inggris (Bahasa Indonesia)
class MatrixOperationsEnglish : public MatrixOperations {
public:
    void run() {
        cout << "Matrix Addition A + 3B:" << endl;
        addition();
        cout << "Matrix Subtraction C - B * E^T:" << endl;
        subtraction();
        cout << "Transpose of A:" << endl;
        transpose();
        checkProperties();
    }
};

// 印尼文版本的矩陣操作 (中文)
// Matrix operations in Indonesian (English)
// Operasi matriks dalam Bahasa Indonesia (Bahasa Indonesia)
class MatrixOperationsIndonesian : public MatrixOperations {
public:
    void run() {
        cout << "Penjumlahan Matriks A + 3B:" << endl;
        addition();
        cout << "Pengurangan Matriks C - B * E^T:" << endl;
        subtraction();
        cout << "Transpose Matriks A^T:" << endl;
        transpose();
        checkProperties();
    }
};

// 語言選擇與執行 (中文)
// Language selection and execution (English)
// Pilihan bahasa dan eksekusi (Bahasa Indonesia)
int main() {
    cout << "請選擇語言 / Please select a language / Silakan pilih bahasa:" << endl;
    cout << "1. 中文" << endl;
    cout << "2. English" << endl;
    cout << "3. Bahasa Indonesia" << endl;

    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            MatrixOperationsChinese().run();
            break;
        case 2:
            MatrixOperationsEnglish().run();
            break;
        case 3:
            MatrixOperationsIndonesian().run();
            break;
        default:
            cout << "無效的選擇 / Invalid choice / Pilihan tidak valid" << endl;
    }

    return 0;
}
