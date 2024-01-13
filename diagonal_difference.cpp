
#include <iostream>
#include <vector>
#include <cstdlib> // For std::abs()

int diagonalDifference(const std::vector<std::vector<int>>& arr) {
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;
    int size = arr.size();
    
    for (int i = 0; i < size; ++i) {
        primaryDiagonalSum += arr[i][i];
        secondaryDiagonalSum += arr[i][size - 1 - i];
    }
    
    return std::abs(primaryDiagonalSum - secondaryDiagonalSum);
}

int main() {
    // Example usage:
    int n;
    std::cin >> n;
    
    std::vector<std::vector<int>> arr(n, std::vector<int>(n));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> arr[i][j];
        }
    }
    
    std::cout << diagonalDifference(arr) << std::endl;
    return 0;
}
