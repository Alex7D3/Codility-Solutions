#include <vector>

int solution(std::vector<int> &A) {
    int res = 0;
    for (auto &e : A) {
        res ^= e;
    }
    return res;
}