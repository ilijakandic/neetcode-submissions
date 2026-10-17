class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> par = {{')','('}, {']','['}, {'}','{'}};
        stack<char> st;
        for(int i = 0; i < s.length(); i++){
            if(par.count(s[i])){
                if(st.empty() || st.top() != par[s[i]]) return false;
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        return st.empty();
    }
};
