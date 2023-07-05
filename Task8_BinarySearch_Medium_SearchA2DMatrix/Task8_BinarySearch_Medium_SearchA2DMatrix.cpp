#include <iostream>
#include <vector>

class Solution {
public:
    static bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
        int left = 0, right = matrix.size() - 1, middle;

        if (matrix[0][0] < target) {
            return 0;
        }

        return 0;
    }
};

int main()
{
    std::vector<std::vector<int>> matrix = { {1,3,5,7} ,{10,11,16,20},{23,30,34,60} };
    std::cout << Solution::searchMatrix(matrix, 16);
}
