#include <vector>

std::vector<int> solution(int N, std::vector<int> &A) {
    int lastmax {0}, max {0};
    std::vector<int> counters(N, 0);
    int M = A.size();

    for (int i = 0; i < M; i++) {
        if (A[i] <= N) { //increase
            int j = A[i] - 1;

            if (counters[j] <= lastmax)
                counters[j] = lastmax;
            
            counters[j]++;
            
            if (max < counters[j]) {
                max = counters[j];
            }
        } else { //max counter
            lastmax = max;
        }
    }

    if (lastmax) {
        for (int i = 0; i < N; i++) {
            if (counters[i] < lastmax)
                counters[i] = lastmax;
        }
    }

    return counters;
}