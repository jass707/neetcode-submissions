class Solution {
public:
    int trap(vector<int>& h) {

        int j=h.size()-1;
        int i=0;
        int lmax=0;
        int rmax=0;
        int water=0;

        while(i<j){
            if(h[i]<h[j]){
                if(h[i]<lmax){
                    water+=(lmax-h[i]);
                }
                else{
                    lmax=h[i];
                }
                i++;

            }
            else{
                if(h[j]<rmax){
                    water+=(rmax-h[j]);
                }
                else{
                    rmax=h[j];
                }
                j--;

            }


        }
        return water;
        
    }
};
