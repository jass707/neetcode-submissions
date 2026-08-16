class Solution {
public:
    bool isPalindrome(string s) {

        int j=s.size()-1;
        int i=0;
        while(i<j){

            if(!isalnum(s[i]) || !isalnum(s[j])){
            if(!isalnum(s[i])) i++;
            if(!isalnum(s[j])) j--; 
            continue;
            }
            if(tolower(s[i])==tolower(s[j])){
                i++;
                j--;
            }
            else{
                return false;
            }



        }
        return true;

        
    }
};
