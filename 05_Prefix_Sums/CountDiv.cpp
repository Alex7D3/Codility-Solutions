int solution(int A, int B, int K) {
    return B / K - A / K + !(A % K);
}