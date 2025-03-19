#include <iostream>
int main()
{
    int n, target;
    std::cin >> n >> target;
    int *arr = new int[n];

    for (size_t i = 0; i < n; i++)
    {
        std::cin>>arr[i];
    }
    
    
    bool flag = false;

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i+1; j < n; j++)
        {
            if (arr[i]+arr[j] == target)
            {
                flag = true;
                break;
            }
            
        }
        
    }

    if (flag == true)
    {
        std::cout << "true";
    }
    else 

        std::cout << "false";




    delete []arr;

        return 0;

}