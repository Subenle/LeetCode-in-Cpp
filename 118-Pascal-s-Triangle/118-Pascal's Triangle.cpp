class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if (numRows == 0) return res;
        vector<int> vec;
        vec.push_back(1);
        res.push_back(vec);
        for(int i = 1; i<numRows; i++){
            vec.erase(vec.begin(),vec.end());
            vec.push_back(1);
            for(int j =1; j < i ; j++){
                /* another method 4=1+1+1+1;6=3+2+1
                int ivec = 0;
                for(int k = i-1;k>=j-1;k--){
                    ivec += res[k][j-1];
                }
                vec.push_back(ivec);
                */
                vec.push_back(res[i-1][j-1]+res[i-1][j]);
            }
            vec.push_back(1);
            res.push_back(vec);
        }
        return res;
    }
};
/*
0       1
1      1 1
2     1 2 1
3    1 3 3 1
4   1 4 6 4 1
5  1 5 10 10 5 1
6 1 6 15 20 15
*/
