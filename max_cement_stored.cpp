#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n;
    std::cin>>n;

    std::vector<int> arr(n);

    for (size_t i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int sum = 0, t;
    
    std::vector<int> vec1; 
    vec1.push_back(arr[0]);
    std::vector<int> vec2(arr.cbegin()+2,arr.cend());



    for (size_t i = 1; i < n-1; i++)
    {      
           
        t = std::min( *(std::max_element(vec1.begin(), vec1.end())),  *(std::max_element(vec2.begin(), vec2.end()))) - arr[i];

        if (t > 0)
        {
            sum+=t;
        }
        
        vec1.push_back(arr[i]);
        vec2.erase(vec2.begin());

    }

    std::cout << sum;

    return 0;
}