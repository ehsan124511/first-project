#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    int n, t, sum;
    bool flag;
    std::cin>>t;
    std::vector<std::vector<int>> vec(t);

    for (size_t i = 0; i < t; i++)
    {
        std::cin>>n;
        vec[i].resize(n);
        for (size_t j = 0; j < n; j++)
        {
            std::cin>>vec[i][j];
        }

    }

    
    for (const auto& row : vec)
    {
        sum = std::accumulate(row.begin(), row.end(), 0);
        flag = false;
        for (size_t k = 0; k < row.size(); k++)
        {

            if (row[k] + 2*(std::accumulate(row.begin(),row.begin()+k,0)) == sum)
            {
                std::cout<< k << std::endl;
                flag = 1;
                break;
            }
            
        }

        if (!flag)
        {
            std::cout<< -1 << std::endl;
        }
        
    }

    return 0;
    
}