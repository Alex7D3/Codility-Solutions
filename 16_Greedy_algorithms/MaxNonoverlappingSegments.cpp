#include <vector>

int solution(std::vector<int> &A, std::vector<int> &B) {
    int N = A.size();
    int count {0}, prev_end {-1};
    for (int i = 0; i < N; i++) {
        if (A[i] > prev_end) {
            count++;
            prev_end = B[i];   
        }
    }
    return count;
}