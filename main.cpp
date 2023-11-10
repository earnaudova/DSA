#include <iostream>
#include "projectHeader.h"

using namespace std;

int main() {
    int m = 3;
    int n = 2;
    int res = 0;

    Solution* s = new Solution();
    res = s->gridTravel(m, n);

    cout << res << endl;

    return 0;
}
