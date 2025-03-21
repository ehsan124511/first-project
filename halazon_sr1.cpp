#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    int i, j;
    std::cin >> i >> j;

    std::vector<std::vector<int>> arr(i, std::vector<int>(j));
    for (size_t i1 = 0; i1 < i; i1++)
    {
        for (size_t j1 = 0; j1 < j; j1++)
        {
            std::cin >> arr[i1][j1];
        }
    }

    size_t p = 0, q = 0;
    int rows = i, cols = j;

    while (p < rows && q < cols)
    {

        for (size_t j1 = q; j1 < cols; j1++)
        {
            std::cout << arr[p][j1] << " ";
        }
        p++;

        for (size_t i1 = p; i1 < rows; i1++)
        {
            std::cout << arr[i1][cols - 1] << " ";
        }
        cols--;

        if (p < rows)
        {
            for (size_t j1 = cols; j1 > q; j1--)
            {
                std::cout << arr[rows - 1][j1 - 1] << " ";
            }
            rows--;
        }


        if (q < cols)
        {
            for (size_t i1 = rows; i1 > p; i1--)
            {
                std::cout << arr[i1 - 1][q] << " ";
            }
            q++;
        }
    }

    return 0;
}