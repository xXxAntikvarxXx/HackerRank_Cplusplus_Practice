#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    /* 2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3 */
    int n, q;
    std::cin >> n >> q;

    vector<vector<int> > arr;
    int k;

    for (int i = 0; i < n; i++) {
        std::cin >> k;
        vector<int> tmp;
        int num;
        for (int j = 0; j < k; j++) {
            std::cin >> num;
            tmp.push_back(num);
        }
        arr.push_back(tmp);
    }

    for (int k = 0; k < q; k++) {
        int i, j;
        std::cin >> i >> j;
        std::cout << arr[i][j] << std::endl;
    }

    return 0;
}
