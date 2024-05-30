#include <vector>
#include <math.h>

int solution(std::vector<int> &A) {
    int N = A.size();
    int l = 0, r = N-1;
    int count = 0;
    while (l <= r) {
        while (l <= r && A[r-1] == A[r]) 
            r--;
        while (l <= r && A[l+1] == A[l]) 
            l++;
        long al = abs((long) A[l]), ar = abs((long) A[r]);
        if (al < ar) {
            r--;
        } else if (al > ar) {
            l++;
        } else {
            l++;
            r--;
        }
        count++;
    }
    return count;
}