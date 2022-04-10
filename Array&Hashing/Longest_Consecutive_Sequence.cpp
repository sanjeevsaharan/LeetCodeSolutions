class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>h;
        for(int num : nums)
        {
            h.insert(num);
        }
        
        int longeststreak = 0;
        for(int num : nums)
        {
            if(!h.count(num-1))
            {
                int curretNum = num;
                int currentStreak = 1;
                
                while(h.count(curretNum+1))
                {
                    curretNum = curretNum+1;
                    currentStreak = currentStreak+1;
                }
                longeststreak = max(longeststreak,currentStreak );
                
            }
            
        }
        return longeststreak;
    }
};