class Solution {
public:
    int maxArea(vector<int>& h) {
        int i=0;
        int j=h.size()-1;
        int mxcap=0;
        while(i<j){
            int cap;
            cap=min(h[i],h[j])*(j-i);
            mxcap=max(cap,mxcap);
            if(h[i]<=h[j]){
                i++;
            }
            else{
                j--;
            }

        }
        return mxcap;
        
    }
};
