#include <limits.h>
#include <vector>

int solution(std::vector<int> &A) {
    int N = A.size();
    std::vector<int> dp(N, INT_MIN);
    dp[0] = A[0];
    for (int i = 1; i < N; i++) {
        int maxval = INT_MIN;
        for (int j = i-1; j >= std::max(0, i-6); j--) {
            maxval = std::max(maxval, dp[j]);
        }
        dp[i] = maxval + A[i];
    }
    return dp[N-1];
}