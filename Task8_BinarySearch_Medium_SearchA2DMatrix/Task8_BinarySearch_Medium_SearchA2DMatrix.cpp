#include <iostream>
#include <vector>

class Solution {
public:
    static bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int left = 0, right = m * n - 1, middle;
        while (left <= right) {
            middle = (left + right) / 2;
            if (matrix[middle / n][middle % n] == target) {
                return 1;
            }
            else if (matrix[middle / n][middle % n] > target) {
                right = middle - 1;
            }
            else {
                left = middle + 1;
            }
        }
        return 0;
    }
};

int main()
{
    std::vector<std::vector<int>> matrix = { {1,3,5,7} ,{10,11,16,20},{23,30,34,60} };
    std::cout << Solution::searchMatrix(matrix, 16);
}
