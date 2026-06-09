class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> freq;

        //s1
        for(int num:nums)
        {
            freq[num]++;
        }

        //s2
        vector<pair<int,int>> vec;
        for(auto it:freq)
        {
            vec.push_back({it.second,it.first});
        }

        //s3
        sort(vec.rbegin(),vec.rend());

        vector<int> result;
        for(int i=0;i<k;i++)
        {
            result.push_back(vec[i].second);
        }
        return result;
    }
};