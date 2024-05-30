#include <vector>

int solution(std::vector<int> &A) {
    int N = A.size();
    bool seen[N+1] = {false};
    for (int i = 0; i < N; i++) {
        if (A[i] > N || seen[A[i]]) 
            return 0;
        else 
            seen[A[i]] = true;
    }
    return 1;
}