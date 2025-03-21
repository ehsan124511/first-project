#include <iostream>
#include <vector>

int main()
{
    int n, k;

    std::cin>>n>>k;
    std::vector<int> saf(n);

    for (size_t i = 0; i < n; i++)
    {
        std::cin>>saf[i];
    }

    std::vector<int> saf2(saf.end()-k, saf.end());

    saf.erase(saf.end()-k, saf.end());

    saf.insert(saf.begin(), saf2.begin(), saf2.end());

        for (size_t i = 0; i < n; i++)
        {
            std::cout<<saf[i]<<" ";
        }
    

}