/*You are given two strings s and t.

String t is generated by random shuffling string s and then add one more letter at a random position.

Return the letter that was added to t.

 

Example 1:

Input: s = "abcd", t = "abcde"
Output: "e"
Explanation: 'e' is the letter that was added.
Example 2:

Input: s = "", t = "y"
Output: "y"
 

Constraints:

0 <= s.length <= 1000
t.length == s.length + 1
s and t consist of lowercase English letters.*/

char findTheDifference(char* s, char* t) {
    int count1[26]={0};
    int count2[26]={0};
    char ans;

    for(int i=0;i<strlen(s);i++){
        count1[s[i]-97]++;
    }

    for(int i=0;i<strlen(t);i++){
        count2[t[i]-97]++;
    }

    for(int i=0;i<26;i++){
        if(count1[i]!=count2[i]){
            ans= i+97;
        }
    }
    return ans;
}
