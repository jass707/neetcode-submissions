class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(string s:strs){
            int len=s.length();
            encoded+=to_string(len)+"#"+s;

        }
        return encoded;

    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i=0;
        while(i<s.length()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            j++;

            string word=s.substr(j,len);
            decoded.push_back(word);

            i=j+len;
        }
        return decoded;

    }
};
