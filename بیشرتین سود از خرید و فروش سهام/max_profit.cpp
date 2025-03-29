#include <iostream>
#include <vector>

int main()
{
    int n, max = 0;
    std::cin>>n;
    std::vector<int> prices(n);
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> prices[i];
    }

    for (size_t i = 0; i < n-1; i++)
    {
        for (size_t j = i+1; j < n; j++)
        {
            if ((prices[j] - prices[i]) > max)
            {
                max = prices[j] - prices[i];
            }
            
        }
        
    }

    std::cout << max;


    
    


}