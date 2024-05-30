#include <vector>
#include <unordered_set>

int solution(std::vector<int> &A) {
    std::unordered_set<int> s;
    int min {1};
    for (int &e : A) {
        s.insert(e);
        while (s.count(min))
            min++;
    }
    return min;
}