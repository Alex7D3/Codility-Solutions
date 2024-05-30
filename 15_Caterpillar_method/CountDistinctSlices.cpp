#include <vector>

int solution(int M, std::vector<int> &A) {
    std::vector<int> seen(M + 1, -1);
    int N = A.size();
    int l = 0, r = 0;
    int count = 0;
    while (r < N) {
        if (seen[A[r]] != -1 && seen[A[r]] >= l) {
            l = seen[A[r]] + 1;
        }
        seen[A[r]] = r;
        count += r - l + 1;
        if (count > 1000000000) {
            return 1000000000;
        }
        r++;
    }
    return count;
}