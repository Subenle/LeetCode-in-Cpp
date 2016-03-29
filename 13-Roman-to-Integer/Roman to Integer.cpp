Enter file contents here
class Solution {
public:
    int romanToInt(string s) {
        if (s.length()==0) return 0;
        map<char,int> mymap;
        mymap['I']=1;
        mymap['V']=5;
        mymap['X']=10;
        mymap['L']=50;
        mymap['C']=100;
        mymap['D']=500;
        mymap['M']=1000;
        int len=s.length();
        int rst = mymap[s[len-1]];
        for(int i=len-2;i>=0;i--){
            if(mymap[s[i]]>=mymap[s[i+1]]){
                rst += mymap[s[i]];
            }
            else{
                rst -= mymap[s[i]];
            }
        }
        return rst;
    }
};
