#include <vector>
#include <math.h>

std::vector<int> solution(std::vector<int> &A) {
    int N = A.size();
    std::vector<int> counts(2 * N + 1, 0);
    int maxval {0};
    for (int i = 0; i < N; i++) {
        counts[A[i]]++;
        maxval = std::max(maxval, A[i]);
    }

    int root = sqrt(maxval);
    std::vector<int> divs(maxval + 1, 0);
    for (int i = 2; i <= root; i++) {
        divs[i * i] += counts[i];
        for (int j = i * i + i; j <= maxval; j += i) {
            divs[j] += counts[i] + counts[j / i];
        }
    }

    std::vector<int> res(N);
    for (int i = 0; i < N; i++) {
        res[i] = N - divs[A[i]] - counts[A[i]];
        if (A[i] != 1)
            res[i] -= counts[1];
    }

    return res;
}