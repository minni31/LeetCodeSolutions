/* Write a function that takes a string as input and reverse only the vowels of a string. */

class Solution {
private:
    bool isVowel(char c){
        c = tolower(c);
        return (c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u');
    }
public:
    string reverseVowels(string s) {
        int start, end;
        start = 0;
        end = s.length() -1;
        while(start<end){
            while(!isVowel(s[start]) && start<end)
                start++;
            while(!isVowel(s[end]) && start<end)
                end--;
            swap(s[start],s[end]);
            start++;
            end--;
        }
        return s;
    }
};
