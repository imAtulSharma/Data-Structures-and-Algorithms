//https://leetcode.com/problems/number-of-matching-subsequences/
/*
	Given a string s and an array of strings words, return the number of words[i] that is a subsequence of s.

A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

For example, "ace" is a subsequence of "abcde".
*/
class Solution {
    Map<Character, ArrayList<Integer>> map = new HashMap<>();
    
    boolean isSubsequence(String word) {
        int last = -1;
        for(char ch: word.toCharArray()) {
            if(!map.containsKey(ch))
                return false;
            
            boolean found = false;
            
            ArrayList<Integer> list = map.get(ch);            
            for(int i = 0; i < list.size(); i++) {
                int index = list.get(i);

                if(index > last) {
                    found = true;
                    last = index;
                    break;
                }
            }
            if(!found)
                return false;
        }
        return true;
    }
    
    public int numMatchingSubseq(String s, String[] words) {
        for(int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            if(!map.containsKey(ch))
                map.put(ch, new ArrayList<>());
            map.get(ch).add(i);
        }
        
        int count = 0;
        
        for(String word: words)
            if(isSubsequence(word))
                count++;
        
        return count;
    }
}