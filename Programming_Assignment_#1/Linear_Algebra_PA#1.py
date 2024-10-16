# Ref. Programming Assignment #1_Fall_2024.pdf
import numpy as np  # 引入NumPy庫來進行矩陣運算 (中文) / Import NumPy library for matrix operations (English) / Impor pustaka NumPy untuk operasi matriks (Bahasa Indonesia)

# 定義一個進行矩陣操作的基類 (中文) / Define a base class for matrix operations (English) / Mendefinisikan kelas dasar untuk operasi matriks (Bahasa Indonesia)
class MatrixOperations:
    def __init__(self):
        # 初始化矩陣 A, B, C, E, F, I (中文)
        # Initialize matrices A, B, C, E, F, I (English)
        # Inisialisasi matriks A, B, C, E, F, I (Bahasa Indonesia)
        self.A = np.array([[2, -2], [3, -5]])
        self.B = np.array([[-2, 0], [0, 2]])
        self.C = np.array([[-1, 2, 0], [2, 0, 3]])
        self.E = np.array([[2, -1], [np.pi, np.log10(2)], [-2, 3]])
        self.F = np.array([[1, 2, 3], [2, 3, 4], [3, 5, 7]])
        self.I = np.eye(3)  # 建立3x3的單位矩陣 (中文) / Create a 3x3 identity matrix (English) / Membuat matriks identitas 3x3 (Bahasa Indonesia)

    # 矩陣加法 A + 3B (中文) / Matrix addition A + 3B (English) / Penjumlahan matriks A + 3B (Bahasa Indonesia)
    def addition(self):
        return self.A + 3 * self.B

    # 矩陣減法 C - B * E^T (中文) / Matrix subtraction C - B * E^T (English) / Pengurangan matriks C - B * E^T (Bahasa Indonesia)
    def subtraction(self):
        return self.C - self.B @ self.E.T

    # 矩陣轉置 A^T (中文) / Matrix transpose A^T (English) / Transposisi matriks A^T (Bahasa Indonesia)
    def transpose(self):
        return self.A.T

    # 矩陣乘法 M = A * B 和 N = B * A (中文)
    # Matrix multiplication M = A * B and N = B * A (English)
    # Perkalian matriks M = A * B dan N = B * A (Bahasa Indonesia)
    def multiplication(self):
        M = self.A @ self.B
        N = self.B @ self.A
        return M, N, np.array_equal(M, N)  # 比較 M 和 N 是否相等 (中文) / Compare if M and N are equal (English) / Bandingkan apakah M dan N sama (Bahasa Indonesia)

    # 矩陣乘法 P = C^T * B^T 和 Q = (B * C)^T (中文)
    # Matrix multiplication P = C^T * B^T and Q = (B * C)^T (English)
    # Perkalian matriks P = C^T * B^T dan Q = (B * C)^T (Bahasa Indonesia)
    def transpose_multiplication(self):
        P = self.C.T @ self.B.T
        Q = (self.B @ self.C).T
        return P, Q, np.array_equal(P, Q)  # 比較 P 和 Q 是否相等 (中文) / Compare if P and Q are equal (English) / Bandingkan apakah P dan Q sama (Bahasa Indonesia)

    # 計算矩陣 A 和 F 的逆矩陣 (中文)
    # Calculate the inverse of matrices A and F (English)
    # Hitung invers matriks A dan F (Bahasa Indonesia)
    def inverse(self):
        try:
            A_inv = np.linalg.inv(self.A)
        except np.linalg.LinAlgError:
            A_inv = "不可逆"  # A 不可逆 (中文) / A is not invertible (English) / A tidak dapat di-invers (Bahasa Indonesia)
        try:
            F_inv = np.linalg.inv(self.F)
        except np.linalg.LinAlgError:
            F_inv = "不可逆"  # F 不可逆 (中文) / F is not invertible (English) / F tidak dapat di-invers (Bahasa Indonesia)
        return A_inv, F_inv

    # 判斷矩陣是否為對角矩陣 (中文)
    # Check if the matrix is diagonal (English)
    # Periksa apakah matriks adalah matriks diagonal (Bahasa Indonesia)
    def is_diagonal(self, matrix):
        return np.all(matrix == np.diag(np.diag(matrix)))

    # 判斷矩陣是否為對稱矩陣 (中文)
    # Check if the matrix is symmetric (English)
    # Periksa apakah matriks adalah matriks simetris (Bahasa Indonesia)
    def is_symmetric(self, matrix):
        return np.array_equal(matrix, matrix.T)

# 中文版本的矩陣操作 (中文) / Matrix operations in Chinese (English) / Operasi matriks dalam Bahasa Cina (Bahasa Indonesia)
class MatrixOperationsChinese(MatrixOperations):
    def run(self):
        print("矩陣加法 A + 3B:\n", self.addition())
        print("矩陣減法 C - B * E^T:\n", self.subtraction())
        print("矩陣轉置 A^T:\n", self.transpose())

        M, N, equal = self.multiplication()
        print("M = A * B:\n", M)
        print("N = B * A:\n", N)
        print("M 和 N 相等嗎？", equal)

        P, Q, equal = self.transpose_multiplication()
        print("P = C^T * B^T:\n", P)
        print("Q = (B * C)^T:\n", Q)
        print("P 和 Q 相等嗎？", equal)

        A_inv, F_inv = self.inverse()
        print("A 的逆矩陣:\n", A_inv)
        print("F 的逆矩陣:\n", F_inv)

        print("A 是對角矩陣嗎？", self.is_diagonal(self.A))
        print("B 是對角矩陣嗎？", self.is_diagonal(self.B))
        print("F 是對角矩陣嗎？", self.is_diagonal(self.F))
        print("I 是對角矩陣嗎？", self.is_diagonal(self.I))

        print("A 是對稱矩陣嗎？", self.is_symmetric(self.A))
        print("B 是對稱矩陣嗎？", self.is_symmetric(self.B))
        print("F 是對稱矩陣嗎？", self.is_symmetric(self.F))
        print("I 是對稱矩陣嗎？", self.is_symmetric(self.I))

# 英文版本的矩陣操作 (中文) / Matrix operations in English (English) / Operasi matriks dalam Bahasa Inggris (Bahasa Indonesia)
class MatrixOperationsEnglish(MatrixOperations):
    def run(self):
        print("Matrix Addition A + 3B:\n", self.addition())
        print("Matrix Subtraction C - B * E^T:\n", self.subtraction())
        print("Matrix Transpose A^T:\n", self.transpose())

        M, N, equal = self.multiplication()
        print("M = A * B:\n", M)
        print("N = B * A:\n", N)
        print("Are M and N equal?", equal)

        P, Q, equal = self.transpose_multiplication()
        print("P = C^T * B^T:\n", P)
        print("Q = (B * C)^T:\n", Q)
        print("Are P and Q equal?", equal)

        A_inv, F_inv = self.inverse()
        print("Inverse of A:\n", A_inv)
        print("Inverse of F:\n", F_inv)

        print("Is A a diagonal matrix?", self.is_diagonal(self.A))
        print("Is B a diagonal matrix?", self.is_diagonal(self.B))
        print("Is F a diagonal matrix?", self.is_diagonal(self.F))
        print("Is I a diagonal matrix?", self.is_diagonal(self.I))

        print("Is A a symmetric matrix?", self.is_symmetric(self.A))
        print("Is B a symmetric matrix?", self.is_symmetric(self.B))
        print("Is F a symmetric matrix?", self.is_symmetric(self.F))
        print("Is I a symmetric matrix?", self.is_symmetric(self.I))

# 印尼文版本的矩陣操作 (中文) / Matrix operations in Indonesian (English) / Operasi matriks dalam Bahasa Indonesia (Bahasa Indonesia)
class MatrixOperationsIndonesian(MatrixOperations):
    def run(self):
        print("Penjumlahan Matriks A + 3B:\n", self.addition())
        print("Pengurangan Matriks C - B * E^T:\n", self.subtraction())
        print("Transpose Matriks A^T:\n", self.transpose())

        M, N, equal
