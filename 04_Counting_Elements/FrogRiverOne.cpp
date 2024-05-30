#include <vector>

int solution(int X, std::vector<int> &A) {
    std::vector<bool> seen(X, false);
    int count {0};
    int N = A.size();
    for (int i = 0; i < N; i++) {
        if (!seen[A[i]]) {
            seen[A[i]] = true;
            count++;
        }
        if (count == X) {
            return i;
        }
    }
    return -1;
}