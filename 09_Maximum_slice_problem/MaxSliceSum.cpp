#include <vector>
#include <limits.h>

int solution(std::vector<int> &A) {
    int maxcur {0}, maxtotal {INT_MIN};
    int N = A.size();
    for (int i = 0; i < N; i++) {
        maxcur = std::max(A[i], maxcur + A[i]);
        maxtotal = std::max(maxtotal, maxcur);
    }
    return maxtotal;
}