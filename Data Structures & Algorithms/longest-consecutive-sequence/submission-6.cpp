class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // int n=nums.size();
        // int mxlen=0;
        // unordered_map<int,int> mp;
        // for(int i=0;i<n;i++){
        //     mp[nums[i]]=1;

        // }
        // for(int i=0;i<n;i++){
        //     int num=nums[i];
        //     int len=1;
        //     while(mp.find(num+1)!=mp.end()){
        //         num=num+1;
        //         len++;
        //     }
        //     mxlen=max(mxlen,len);

        // }
        // return mxlen;

        int n=nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        int mxlen=1;
        int len=1;
        for(int i=1;i<n;i++){
            
            if(nums[i-1]+1==nums[i] ){
                len++;
                mxlen=max(mxlen,len);
                
            }
            else if(nums[i-1]==nums[i]){
                continue;
            }
            else{
                len=1;
            }

        }
        return mxlen;
    }
};
