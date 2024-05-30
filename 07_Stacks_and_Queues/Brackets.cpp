#include <stack>
#include <string>
#include <unordered_map>

int solution(std::string &S) {
    std::stack<char> st;
    std::unordered_map<char,char> mp = {{'(', ')'}, {'{', '}'}, {'[', ']'}};
    int N = S.length();
    for (int i = 0; i < N; i++) {
        if (S[i] == '(' || S[i] == '{' || S[i] == '[') {
            st.push(S[i]);
        } else if (S[i] == mp[st.top()]) {
            st.pop();
        } else return false;
    }
    return st.empty();
}