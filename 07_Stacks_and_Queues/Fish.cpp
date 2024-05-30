#include <vector>
#include <stack>

int solution(std::vector<int> &A, std::vector<int> &B) {
    std::stack<int> st;
    int N = A.size();
    int res = N;
    for (int i = 0; i < N; i++) {
        if (!B[i]) {
            while (!st.empty() && A[i] > A[st.top()]) {
                res--; 
                st.pop();
            }
            if (!st.empty())
                res--;
        } else {
            st.push(i);
        }
    }

    return res;
}