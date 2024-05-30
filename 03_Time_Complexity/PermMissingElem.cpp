#include <vector>
#include <numeric>

int solution(std::vector<int> &A) {
    int N = A.size();
    return (long) (N + 1) * (N + 2) / 2 - std::accumulate(A.begin(), A.end(), 0);
}