#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    vector<int> window;

    for (int i = 0; i < k; i++)  
        window.push_back(arr[i]);

    for (int i = k; i <= n; i++) {
        cout << *max_element(window.begin(), window.end()) << " ";
        if (i < n) {
            window.erase(window.begin());  
            window.push_back(arr[i]);
        }
    }

    return 0;
}