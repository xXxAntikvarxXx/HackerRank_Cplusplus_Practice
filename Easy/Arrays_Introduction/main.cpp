#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        std::cout << arr[i];
        if (i != 0) { std::cout << " "; }
    }

    return 0;
}
