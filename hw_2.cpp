#include <iostream>
#include <vector>

int main() {
    // Размерность
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(n, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][k] && matrix[k][j]) {
                    matrix[i][j] = 1;
                }
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == 1) {
                matrix[j][i] = 1; 
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        matrix[i][i] = 1; 
    }

    std::cout << '\n';

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}
