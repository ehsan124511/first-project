#include <iostream>
#include <vector>

int main()
{
    int m, n;
    std::cin >> m >> n;

    std::vector<int> num1(m+n, 0);
    std::vector<int> num2(n);

    for (size_t i = 0; i < m; i++)
    {
        std::cin>>num1[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        std::cin>>num2[i];
    }

    int i = m-1, j = n-1, k = m+n-1;

    while (i>=0 && j>=0)
    {
        if (num1[i] > num2[j])
        {
            num1[k] = num1[i];
            i--;
        }
        else
        {
            num1[k] = num2[j];
            j--;
        }

        k--;
        
    }

    while (j>=0)
    {
        num1[k] = num2[j];
        j--;
        k--;
    }


    for (const auto& t : num1)
    {
        std::cout<<t<<" ";
    }
    
    return 0;

}    