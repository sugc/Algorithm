/*
给你一个字符串 s，找到 s 中最长的回文子串。

如果字符串的反序与原始字符串相同，则该字符串称为回文字符串。

 

示例 1：

输入：s = "babad"
输出："bab"
解释："aba" 同样是符合题意的答案。
示例 2：

输入：s = "cbbd"
输出："bb"
 

提示：

1 <= s.length <= 1000
s 仅由数字和英文字母组成


来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/longest-palindromic-substring
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

/*
解题思路： 

1 对于回文串，以下情况必然成立

对于i < string.length / 2
s[i] == s [s.length - i - 1];
s.substr(0,s.length - 1);

因此可以使用递归的方式去判断一个字符串是否是回文串，用此方式去找出最长的回文串

2 是否可以使用回溯法？ 以此降低复杂度

*/

#include <string>
using namespace std;


class Solution {
public:
    string longestPalindrome(string s) {
        
        if (isPalindrome(s))
        {
            /* code */
            return s
        }

        string sub1 = s.substr(1, s.length() - 1);
        
        
        

    }

    bool isPalindrome(string s) {

        if (s.length() <= 1)
        {
            return true;
        }
        
        if (s[0] != s[s.length() - 1])
        {
            return false;
        }
        
        return isPalindrome(s.substr(1,s.length()-2));
    }
    
};