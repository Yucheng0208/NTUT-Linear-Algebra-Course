# Linear Algebra (Fall 2024)  
## Programming Assignment #1  

Write a program in C/C++/Java/Python (choose one) **from scratch** to realize matrix operations. This assignment should utilize native instruction code of the programming language (such as condition, branching, loop, etc.). It is strongly recommended to maintain a good coding style while programming.  

這次的程式作業，是要用 C/C++/Java/Python（其中之一）的基本算術運算（如加、減、乘、除）與邏輯運算（如條件敘述、分支、迴圈）來實現矩陣的運算，請建立良好的程式撰寫風格。  

### 1. (This problem aims for matrix construction, handling, and manipulation.)  

Create the following matrices:  

\[
A = \begin{bmatrix} 2 & -2 \\ 3 & -5 \end{bmatrix}, \quad  
B = \begin{bmatrix} -2 & 0 \\ 0 & 2 \end{bmatrix}, \quad  
C = \begin{bmatrix} -1 & 2 & 0 \\ 2 & 0 & 3 \end{bmatrix}, \quad  
E = \begin{bmatrix} 2 & -1 \\ \pi & \log_{10}2 \\ -2 & 3 \end{bmatrix},
\]

\[
F = \begin{bmatrix} 1 & 2 & 3 \\ 2 & 3 & 4 \\ 3 & 5 & 7 \end{bmatrix}, \quad  
I = \begin{bmatrix} 1 & 0 & 0 \\ 0 & 1 & 0 \\ 0 & 0 & 1 \end{bmatrix}.
\]  

(a) Calculate \( A + 3B \), \( C - B \times E^T \), and \( A^T \).  

(b) Calculate \( M = A \times B \) and \( N = B \times A \). Is \( M \) equal to \( N \)?  

(c) Calculate \( P = C^T \times B^T \) and \( Q = (B \times C)^T \). Is \( P \) equal to \( Q \)?  

(d) Calculate the inverses of \( A \) and \( F \), if the corresponding matrix is invertible.  

(e) Write a program to determine if a matrix is a diagonal matrix. Use it to test the matrices \( A, B, F, I \).  

(f) Write a program to determine if a matrix is a symmetric matrix. Use it to test the matrices \( A, B, F, I \).  