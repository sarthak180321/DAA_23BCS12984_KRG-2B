class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int>prefix(nums.size(),0);
        unordered_map<int,int>freq;
        prefix[0]=nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }
        for(int i=0; i<prefix.size(); i++){
            freq[prefix[i]]=0;
        }
        int ans=0;
        for(int i=0; i<prefix.size(); i++){
            if(prefix[i]==k) ans++;
            ans=ans+freq[prefix[i]-k];
            freq[prefix[i]]++;
        }
        return ans;
    }
};
