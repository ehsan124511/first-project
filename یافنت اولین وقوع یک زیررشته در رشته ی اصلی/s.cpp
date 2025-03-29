#include <iostream>
#include <vector>
#include <string>

int main()
{
    int n, j;
    std::string mystring1;
    std::string mystring2;
    std::getline(std::cin,mystring1);
    std::getline(std::cin,mystring2);

    for (size_t i = 0; i <= mystring1.length() - mystring2.length(); i++)
    {
        for ( j = 0; j < mystring2.length(); j++)
        {
            if (mystring1[i+j] != mystring2[j])
            {
                break;
            }
            
        }
        if (j == mystring2.length())
        {
            
            return 0;
        }
        
        
    }

    std::cout<<-1;
    return 0;
    

    


}