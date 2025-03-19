#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    int i,j,row,column; 
    std::cin >> i >> j;
    row = i;
    column = j;

    std::vector<std::vector<int>> arr(i, std::vector<int>(j));
    for (size_t i1 = 0; i1 < i; i1++)
    {
        for (size_t j1 = 0; j1 < j; j1++)
        {
            std::cin >> arr[i1][j1];
        }
        
    }

    double l = ceil((double)column/2);



    size_t j1, i1=0, p=0, q=0;

    for (size_t t = 0; t < l; t++)
    {

        for ( j1 = q; j1 < column-1; j1++)
        {
            std::cout<< arr[i1][j1] << " "; 
        } p++;

        for ( i1 = p ; i1 < row-1; i1++)
        {
            std::cout<< arr[i1][j1] << " ";
        } q++;


        for ( i1 = column; i1 > p ; i1--)
        {
            std::cout<< arr[i1][j1] << " "; 
        } column--;


        for ( j1 = row; j1 > q ; j1--)
        {
            std::cout<< arr[i1][j1] << " "; 
        } row--;   
        
    }
     
    return 0;
    
}