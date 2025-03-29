#include <iostream>
#include <vector>

int main()
{
    int n, sum=0;
    std::cin >> n;
    std::vector<int>vec1(n);
    for (size_t i = 0; i < n; i++)
    {
        std::cin>>vec1[i];
        sum+=vec1[i];
    }
    if (sum %2 != 0)
    {
        std::cout<<"False";
        return 0;
    }
    sum/=2;

    std::vector<bool> dp(sum+1, false);
    dp[0] = true;

    for (const auto& num : vec1)
    {
        for (int i = sum; i >= num; i--)
        {
            dp[i] = dp[i] || dp[i - num];
        }
        
    }
    

    if (dp[sum] == 0)
        std::cout<<"False";
    else
        std::cout<<"True";



    return 0;

}