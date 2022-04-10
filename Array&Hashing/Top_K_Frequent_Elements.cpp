class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int>m;
        for(int n : nums)
        {
            m[n]++;
        }
        
        priority_queue<pair<int, int>>pq;
        vector<int>ans;
        
        for(auto [number, frequency] : m)
        {
            pq.push({frequency, number});
            if(pq.size() > (int)m.size() - k)
            {
                ans.push_back(pq.top().second);
                pq.pop();
            }
            
        }
        return ans;
    }
};