class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, unsigned> _map;
        int a, _max;
        a = 0;
        _max = 0;
        
        for(int i = 0; i < s.length(); ++i) {
            char c = s[i];
            if(_map.find(c) != _map.end()) {
                a = max(int(_map[c] + 1), a);
            }
            _max = max(_max, i - a + 1);
            _map[c] = i;
        }
        
        return _max;
    }
};
