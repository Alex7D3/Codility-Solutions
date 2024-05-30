#include <vector>

int solution(std::vector<int> &A) {
    int N = A.size();
    long post_sum {0}, total_sum {0};
    for (int i = N-1; i >= 0; i--) {
        post_sum += A[i];
        if (A[i] == 0) 
            total_sum += post_sum;
    }
    return (total_sum <= 1000000000) ? total_sum : -1;
}