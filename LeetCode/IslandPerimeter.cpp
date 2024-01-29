#include<iostream>
#include<vector>

class Solution {
public:
    int islandPerimeter(std::vector<std::vector<int>>& grid) {
        int perimeter = 0;
        int row = grid.size(), col = grid[0].size();

        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(grid[i][j] == 1)
                {
                    perimeter += 4;

                    if( i > 0 && grid[i -1][j] == 1)
                    {
                        perimeter -= 2;
                    }

                    if(j > 0 && grid[i][j-1] == 1)
                    {
                        perimeter -= 2;
                    }
                }
            }
        }

        return perimeter;
    }
};


int main()
{
	int row =0, col =0;

	std::cout << "Enter row and col: "; std::cin >> row >> col;
	std::vector<std::vector<int>> vector (row, std::vector<int>(col));
	Solution S1;

	for(int i =0; i < row; i++)
	{
		for(int j =0; j < col; j++)
		{
			int tmp;
			std::cout << "Coloumn[" << i << "]" << "[" << j << "]";
			std::cin >> tmp;
			vector[i][j] = tmp;
		}
	}

	std::cout << "Perimeter: " << S1.islandPerimeter(vector) << std::endl;
	return 0;
}
