#include <vector>
#include <string>
#include <unordered_map>

std::vector<int> solution(std::string &S, std::vector<int> &P, std::vector<int> &Q) {
    int M = P.size(), N = S.length();
    std::unordered_map<char,std::vector<int>> prefix_count = {
        {'A', std::vector<int>(N+1, 0)},
        {'C', std::vector<int>(N+1, 0)},
        {'G', std::vector<int>(N+1, 0)}
    };

    for (int i = 0; i < N; i++) {
        prefix_count['A'][i+1] = prefix_count['A'][i];
        prefix_count['C'][i+1] = prefix_count['C'][i];
        prefix_count['G'][i+1] = prefix_count['G'][i];

        if (S[i] != 'T')
            prefix_count[S[i]][i+1]++;
    }

    std::vector<int> res(M);
    for (int i = 0; i < M; i++) {
        if (prefix_count['A'][Q[i]+1] - prefix_count['A'][P[i]] > 0)
            res[i] = 1;
        else if (prefix_count['C'][Q[i]+1] - prefix_count['C'][P[i]] > 0)
            res[i] = 2;
        else if (prefix_count['G'][Q[i]+1] - prefix_count['G'][P[i]] > 0)
            res[i] = 3;
        else
            res[i] = 4;
    }
    return res;
}