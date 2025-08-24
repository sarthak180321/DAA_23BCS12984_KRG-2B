class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        map<int,int> freq;  
        int n = arr.size();
        for (int i = 0; i < n; i++){
            freq[arr[i]]++;
        }
        vector<vector<int>> ans;
        for (auto it = freq.begin(); it != freq.end(); it++){
            ans.push_back({it->first, it->second});
        }
        return ans;
    }
};
