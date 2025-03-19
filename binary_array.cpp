#include <iostream>
#include <string>

using namespace std;

int main()
{
    unsigned int counter = 0;
    // vector <char>str_num;
    string num;
    int max=0;
    getline(cin,num);

    /*for (const char &C : num)
    {
        str_num.push_back(C);
    }*/

    for (size_t i = 0; i < num.size()/sizeof(char); i++)
    {
        if (num[i] == '1')
        {
            counter++;
        }
        else if (num[i] == '0')
        {
            if (counter > max)
            {
                max = counter;
            }
                counter = 0;
        }
    }

    cout << max;

}