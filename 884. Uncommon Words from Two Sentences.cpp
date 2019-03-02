/*
1. merge A & B
2. split the merged string into words
3. delete words appear more than once


Runtime: 8 ms, faster than 100.00% of C++ online submissions for Uncommon Words from Two Sentences.
Memory Usage: 9.6 MB, less than 14.81% of C++ online submissions for Uncommon Words from Two Sentences.
*/

class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        A=A+" "+B;
        vector<string> words = splitToWords(A);
        if(words.size()==1 || words.size()==0) return words;
        sort(words.begin(), words.end());
        vector<string> res;
        for(int i=1; i<words.size()-1; i++){
            if(words[i]!=words[i-1] && words[i]!=words[i+1]) res.push_back(words[i]);
        }
        if(words[0]!=words[1]) res.push_back(words[0]);
        if(words[words.size()-1]!=words[words.size()-2]) res.push_back(words[words.size()-1]);
        
        return res;
    }
    
    vector<string> splitToWords(string str) { 
        str=str+" ";
        vector<string> words;
        string word = ""; 
        for (auto x : str){ 
            if (x == ' ') {
                words.push_back(word);
                word = ""; 
            }    
            else word = word + x;  
        }  
        return words;
    } 
  
};
