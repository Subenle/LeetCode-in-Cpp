class Solution {
public:
    string getHint(string secret, string guess) {
        //string hint = "";
        int bull = 0;
        int cow = 0;
        int len = secret.length();
        unordered_multiset<char> secretset;
        unordered_multiset<char> guessset;
        for (int i = 0; i<len; i++){
            if (secret[i] == guess[i]){
                bull++;
            }
            else{
                secretset.insert(secret[i]);
                guessset.insert(guess[i]);
            }
        }
        unordered_multiset<char>::iterator it;
        unordered_multiset<char>::iterator it2;
        for (it = guessset.begin(); it != guessset.end(); it++){
            it2 = secretset.find(*it);
            if (it2 != secretset.end()){
                cow++;
                secretset.erase(it2);
            }
        }
        return to_string(bull) + "A" + to_string(cow) + "B";
    }
};