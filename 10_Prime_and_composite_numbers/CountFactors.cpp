#include <math.h>

int solution(int N) {
    if (N == 1) return 1;
    if (N == 2) return 2;
    int count {2};
    float root = sqrt(N);
    for (int i = 2; i <= root; i++) {
        if (!(N % i)) {
            if (i != root)
                count += 2;
            else
                count++;
        }        
    }
    return count;
}