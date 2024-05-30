#include <vector>
#include <algorithm>

int solution(std::vector<int> &A) {
    int N = A.size();
    std::sort(A.begin(), A.end());
    for (int i = 0; i < N-2; i++) {
        if (A[i] < 0) continue;
        if (A[i] > A[i+2] - A[i+1])
            return 1;
    }
    return 0;
}