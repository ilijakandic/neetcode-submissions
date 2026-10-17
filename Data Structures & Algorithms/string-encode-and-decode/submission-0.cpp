class Solution {
public:

    string encode(vector<string>& strs) {
        string rez = ""; 
        for(string& s: strs){
            string len = to_string(s.length());
            rez = rez + len + "#" + s; 
        }
        return rez;
    }

    vector<string> decode(string s) {
        vector<string> rez;
        int i=0;
        while(i<s.length()){
            int j = s.find("#",i);
            int len = stoi(s.substr(i, j-i));
            i=j+1;
            string deo = s.substr(i, len);
            rez.push_back(deo);
            i=i+len;
        }
        return rez;
    }
};
