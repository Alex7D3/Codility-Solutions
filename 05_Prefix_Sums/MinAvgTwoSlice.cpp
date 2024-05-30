#include <vector>
#include <limits.h>

int solution(std::vector<int> &A) {
    int N = A.size();
    int minidx2, minidx3;
    int minsum2 = INT_MAX, minsum3 = INT_MAX;
    for (int i = 0; i < N-2; i++) {
        int s2 = A[i] + A[i+1];
        int s3 = A[i] + A[i+1] + A[i+2];
        if (s2 < minsum2) {
            minsum2 = s2;
            minidx2 = i;
        }
        if (s3 < minsum3) {
            minsum3 = s3;
            minidx3 = i;
        }
    }
    if (A[N-2] + A[N-1] < minsum2) {
        minsum2 = A[N-2] + A[N-1];
        minidx2 = N-2;
    }
    
    if (minsum2 / 2.0 < minsum3 / 3.0)
        return minidx2;
    if (minsum2 / 2.0 > minsum3 / 3.0)
        return minidx3;
    return std::min(minidx2, minidx3);
}