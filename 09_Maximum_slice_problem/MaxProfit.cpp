#include <vector>
#include <limits.h>

int solution(std::vector<int> &A) {
    int cur_min {INT_MAX}, total_max {0};
    int N = A.size();
    for (int i = 0; i < N; i++) {
        cur_min = std::min(cur_min, A[i]);
        total_max = std::max(total_max, A[i] - cur_min);
    }
    return total_max;
}