/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    var _map = {};
    var left = 0;
    var _max = 0;
    for(var i = 0, l = s.length; i < l; ++i) {
        if(_map[s[i]] !== undefined) {
            left = left > _map[s[i]] + 1 ? left : _map[s[i]] + 1;
        }
        _max = _max > i - left + 1 ? _max : i - left + 1;
        _map[s[i]] = i;
    }
    
    return _max;
};
