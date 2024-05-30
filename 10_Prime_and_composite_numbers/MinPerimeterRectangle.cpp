#include <math.h>
#include <limits.h>

int solution(int N) {
    int res {INT_MAX};
    int root = sqrt(N);
    for (int i = 1; i <= root; i++) {
        if (!(N % i)) {
            res = std::min(res, 2 * (i + N / i));
        }
    }
    return res;
}