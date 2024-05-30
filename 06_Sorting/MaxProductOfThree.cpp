#include <vector>
#include <limits.h>

int solution(std::vector<int> &A) {
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;
    for (int e : A) {
        if (e <= min1) {
            min2 = min1;
            min1 = e;
        } else if (e <= min2) {
            min2 = e;
        }

        if (e >= max1) {
            max3 = max2;
            max2 = max1;
            max1 = e;
        } else if (e >= max2) {
            max3 = max2;
            max2 = e;
        } else if (e >= max3) {
            max3 = e;
        }
    }
    return std::max(max1 * max2 * max3, min1 * min2 * max1);
}