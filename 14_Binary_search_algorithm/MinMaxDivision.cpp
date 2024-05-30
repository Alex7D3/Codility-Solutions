#include <vector>
#include <numeric>
#include <algorithm>

bool block_count(int candidate, int K, std::vector<int> &A) {
    int sum = 0, blocks = 1;
    int N = A.size();
    for (int i = 0; i < N; i++) {
        sum += A[i];
        if (sum > candidate) {
            sum = A[i];
            blocks++;
        }
        if (blocks > K) {
            return false;
        }
    }
    return true;
}
int solution(int K, int M, std::vector<int> &A) {
    int end = accumulate(A.begin(), A.end(), 0);
    int begin = *max_element(A.begin(), A.end());
    while (begin <= end) {
        int candidate = (begin + end) / 2;
        if (block_count(candidate, K, A)) {
            end = candidate - 1;
        } else {
            begin = candidate + 1;
        }    
    }
    return begin;
}