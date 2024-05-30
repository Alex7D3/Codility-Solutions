#include <vector>
#include <stack>

int solution(std::vector<int> &H) {
    int N = H.size();
    int blocks {0};
    std::stack<int> st;
    for (int i = 0; i < N; i++) {
        while (!st.empty() && H[i] < st.top())
            st.pop();
        if (st.empty() || st.top() != H[i]) {
            blocks++;
            st.push(H[i]);
        }
    }
    return blocks;
}