#include <vector>
#include <math.h>

std::vector<int> sieve(int N) {
    std::vector<int> factors(N + 1, 0);
    int root = sqrt(N);
    for (int i = 2; i <= root; i++) {
        for (int j = i * i; j <= N; j += i) {
            if (factors[j] == 0) 
                factors[j] = i;
        }
    }
    return factors;
}

std::vector<int> solution(int N, std::vector<int> &P, std::vector<int> &Q) {
    int M = P.size();
    std::vector<int> factors = sieve(N);
    std::vector<int> semiprimes(N + 1, 0);
    for (int k = 4; k <= N; k++) {
        semiprimes[k] += semiprimes[k-1];
        if (factors[k] != 0 && factors[k / factors[k]] == 0) 
            semiprimes[k]++;
    }

    std::vector<int> res(M);
    for (int i = 0; i < M; i++) {
        res[i] = semiprimes[Q[i]] - semiprimes[P[i] - 1];
    }
    return res;
}