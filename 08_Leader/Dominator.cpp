#include <vector>

int solution(std::vector<int> &A) {
    int count {0};
    int N = A.size();
    int candidate;
    for (int i = 0; i < N; i++) {
        if (count == 0) {
            candidate = i;
            count = 1;
        } else if (A[i] == A[candidate])
            count++;
        else
            count--;
    }
    int count_candidate {0};
    for (int i = 0; i < N; i++) {
        if (A[i] == A[candidate]) {
            count_candidate++;
        }
    }

    return count_candidate > N / 2 ? candidate : -1;
}