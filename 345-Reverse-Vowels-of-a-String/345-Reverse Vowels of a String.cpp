class Solution {
public:
    string reverseVowels(string s) {
        vector<pair<char,int>> allVowels;
        for(int i=0; i<s.length(); i++) {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
               s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {
                pair<char,int> tmp;
                tmp.first=s[i];
                tmp.second=i;
                allVowels.push_back(tmp);
            }
        }
        for(int i=0; i<allVowels.size(); i++) 
            s[allVowels[i].second] = allVowels[allVowels.size()-i-1].first;
        return s;
    }
};
