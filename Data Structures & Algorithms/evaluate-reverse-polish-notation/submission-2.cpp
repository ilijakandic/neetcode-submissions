class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        for(auto& t : tokens){
            if (t == "+" || t == "-" || t == "*" || t == "/"){
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                int rez = 0;
                if(t == "+"){
                    rez = a + b;
                }
                if(t == "-"){
                    rez = a - b;
                }
                if(t == "/"){
                    rez = a / b;
                }
                if(t == "*"){
                    rez = a * b;
                }
                st.push(rez);
                
            }
            else{
                st.push(stoi(t));
            }
            
        }
        return st.top();
    }
};
