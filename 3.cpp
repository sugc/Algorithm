/*
给定一个字符串 s ，请你找出其中不含有重复字符的 最长子串 的长度。

 

示例 1:

输入: s = "abcabcbb"
输出: 3 
解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
示例 2:

输入: s = "bbbbb"
输出: 1
解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。
示例 3:

输入: s = "pwwkew"
输出: 3
解释: 因为无重复字符的最长子串是 "wke"，所以其长度为 3。
     请注意，你的答案必须是 子串 的长度，"pwke" 是一个子序列，不是子串。
 

提示：

0 <= s.length <= 5 * 104
s 由英文字母、数字、符号和空格组成

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/longest-substring-without-repeating-characters
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

/*
解题思路：关键在于判断重复的方式，如果重复遍历，会导致时间复杂度上升，因此使用一个map去记录出现过的元素，降低复杂度。
也可以用数组，数组对应字符（ASII编码）的索引存储该字符，可以实现O(1)的复杂度的查找。
*/
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {

        map<string, int> amap;
        for (int i = 0; i < s.length(); i++)
        {   
            if (amap.find(s[i]) != amap.end())
            {
                return i;
            }
            
            amap[s[i]] = 1;
            
        }
        
        return s.length();
    }
};