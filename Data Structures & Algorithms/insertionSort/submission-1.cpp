// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };
class Solution {
public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) {
        vector<vector<Pair>> ret;
        if (pairs.capacity() == 0){
            return ret;
        }
        ret.push_back(pairs);
        for(int i = 1; i < (int)pairs.size(); i++){
            Pair e = pairs.at(i);
            pairs.erase(pairs.begin() + i);
            int is = 0;
            for(int y = 0; y < i; y++){
                Pair a = pairs.at(y);
                if(a.key > e.key){
                    is = 1;
                    pairs.insert(pairs.begin() + y, e);
                    break;
                }
            }
            if (is == 0){
                pairs.insert(pairs.begin() + i, e);
            }
            ret.push_back(pairs);
        }
        return ret;
    }
};