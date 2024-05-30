#include <vector>

int solution(int K, std::vector<int> &A) {
    int N = A.size();
    int count {0};
    int sum {0};
    for (int i = 0; i < N; i++) {
        sum += A[i];
        if (sum >= K) {
            sum = 0;
            count++;
        }
    }
    return count;
}