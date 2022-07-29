//https://leetcode.com/problems/find-and-replace-pattern/
/*
	Given a list of strings words and a string pattern, return a list of words[i] that match pattern. You may return the answer in any order.

A word matches the pattern if there exists a permutation of letters p so that after replacing every letter x in the pattern with p(x), we get the desired word.

Recall that a permutation of letters is a bijection from letters to letters: every letter maps to another letter, and no two letters map to the same letter.
*/
class Solution {
    String getCode1(String string) {
        StringBuilder builder = new StringBuilder();
        
        int count = 1;
        for (int i = 1; i < string.length(); i++) {
            char c = string.charAt(i);
            
            if(string.charAt(i-1) == c)
                count++;
            else {
                builder.append(count);
                count = 1;
            }
        }
        builder.append(count);
        
        return builder.toString();
    }
    
    String getCode(String string) {
        Map<Character, Character> map = new HashMap<>();
        StringBuilder builder = new StringBuilder();
        
        char ch = 'a';
        for(char c: string.toCharArray()) {
            if(!map.containsKey(c))
                map.put(c, ch++);
            builder.append(map.get(c));
                
        }
        
        return builder.toString();
    }
    
    public List<String> findAndReplacePattern(String[] words, String pattern) {        
        List<String> list = new ArrayList<String>();
        String ptr = getCode(pattern);
        
        for(String word: words)
            if(ptr.equals(getCode(word)))
                list.add(word);
        
        return list;
    }
}