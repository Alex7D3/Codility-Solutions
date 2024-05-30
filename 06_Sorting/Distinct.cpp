#include <vector>
#include <unordered_set>

int solution(std::vector<int> &A) {
    std::unordered_set<int> s;
    for (int e : A) {
        s.insert(e);
    }
    
    return s.size();
}