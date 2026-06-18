class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_set<char> st;

        int left = 0;
        int longest = 0;

        for(int right = 0; right < s.size(); right++) {

            // Remove characters until duplicate is removed
            while(st.find(s[right]) != st.end()) {
                st.erase(s[left]);
                left++;
            }

            // Add current character
            st.insert(s[right]);

            // Update longest length
            longest = max(longest, right - left + 1);
        }

        return longest;
    }
};
