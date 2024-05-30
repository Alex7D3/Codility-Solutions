#include <vector>
#include <limits.h>
#include <algorithm>

int solution(std::vector<int> &A) {
    int minpair = INT_MAX;
    std::sort(A.begin(), A.end());
    int N = A.size();
    int l = 0, r = N-1;
    while (l <= r) {
        minpair = std::min(minpair, abs(A[l] + A[r]));
        if (abs(A[l]) > abs(A[r])) {
            l++;
        } else {
            r--;
        }
    }
    return minpair;
}