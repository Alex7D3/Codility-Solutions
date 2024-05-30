#include <vector>
#include <limits.h>
#include <numeric>
#include <math.h>

int solution(std::vector<int> &A) {
    int sum = std::accumulate(A.begin(), A.end(), 0);
    int lsum = A[0];
    int min_dif {INT_MAX};
    int N = A.size();
    for (int i = 1; i < N; i++) {
        min_dif = std::min(min_dif, std::abs(sum - 2 * lsum));
        lsum += A[i];
    }
    return min_dif;
}