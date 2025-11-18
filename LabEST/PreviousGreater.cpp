class Solution {
  public:
    vector<int> preGreaterEle(vector<int>& arr) {
        //  code here
        vector<int>ans(arr.size(),-1);
        stack<int>st;
        for(int i=0; i<arr.size(); i++){
            int temp=arr[i];
            while(st.empty()==false){
                if(st.top()>temp){
                    ans[i]=st.top();
                    break;
                }
                else{
                    st.pop();
                }
            }
            st.push(temp);
        }
        return ans;
    }
};
