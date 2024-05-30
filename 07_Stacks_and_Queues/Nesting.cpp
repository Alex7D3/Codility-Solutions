#include <string>

int solution(std::string &S) {
    int N = S.size();
    int polarity = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == '(') polarity++;
        else if (S[i] == ')') polarity--;
        if (polarity < 0) return false;
    }
    return polarity == 0;
}