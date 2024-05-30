#include <vector>

std::vector<int> solution(std::vector<int> &A, int K) {
    int N = A.size();
    if (N == 0) return A;
    for (int i = 0; i < N / 2; i++) {
        std::swap(A[i], A[N-i-1]);
    }
    K %= N;
    for (int i = 0; i < K / 2; i++) {
        std::swap(A[i], A[K-i-1]);
    }
    for (int i = K; i < (N + K) / 2; i++) {
        std::swap(A[i], A[N+K-i-1]);
    }
    return A;
}