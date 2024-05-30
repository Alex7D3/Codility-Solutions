#include <algorithm>

int solution(int N) {
    if (N == 0) return 1;
    while (!(N & 1)) N >>= 1;
    N >>= 1;
    int maxres {0}, cur {0};
    for (; N > 0; N >>= 1) {
        if (!(N & 1)) {
            cur++;
        } else {
            maxres = std::max(maxres, cur);
            cur = 0;
        }
    }
    return maxres;
}