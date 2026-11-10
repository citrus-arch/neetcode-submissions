class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(128,0);
        int n = s.size();
        int maxlen = 0;
        int l = 0;
        
        for (int i=0; i<n; i++)
        {
            while (freq[s[i]] > 0)
            {
                freq[s[l]]--;
                l++;
            }

            freq[s[i]]++;

            int len = i - l +1;

            if (len > maxlen)
            {
                maxlen = len;
            }
        }

        return maxlen;
    }
};
