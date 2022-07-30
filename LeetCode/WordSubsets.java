//https://leetcode.com/problems/word-subsets/submissions/
/*
	You are given two string arrays words1 and words2.

A string b is a subset of string a if every letter in b occurs in a including multiplicity.

For example, "wrr" is a subset of "warrior" but is not a subset of "world".
A string a from words1 is universal if for every string b in words2, b is a subset of a.

Return an array of all the universal strings in words1. You may return the answer in any order.
*/
class Solution {
    boolean matchMap(Map<Character, Integer> parent, Map<Character, Integer> child) {
        for(char key: child.keySet()) {
            if(!parent.containsKey(key))
                return false;
            else if(parent.get(key) < child.get(key))
                return false;
        }
        return true;
    }
    
    Map<Character, Integer> mapOfCharacters(String string) {
        Map<Character, Integer> map = new HashMap<>();
        for(char ch: string.toCharArray())
            map.put(ch, map.getOrDefault(ch, 0) + 1);
        return map;
    }
    
    Map<String, Map<Character, Integer>> createMapOfStrings(String[] words) {
        Map<String, Map<Character, Integer>> mapOfStrings = new HashMap<>();
        for(String word: words)
            mapOfStrings.put(word, mapOfCharacters(word));
        return mapOfStrings;
    }
    
    public List<String> wordSubsets(String[] words1, String[] words2) {
        Map<String, Map<Character, Integer>> mapOfStrings = createMapOfStrings(words1);   
        
        Map<Character, Integer> maxFrequencies = new HashMap<>();
        for(String word: words2) {
            Map<Character, Integer> map = new HashMap<>();
            for(char ch: word.toCharArray())
                map.put(ch, map.getOrDefault(ch, 0) + 1);
            
            for(char ch: map.keySet())
                maxFrequencies.put(ch, Math.max(
                    maxFrequencies.getOrDefault(ch, 0),
                    map.get(ch)
                ));
        }
         
        Set<String> setOfKeys = new HashSet<>();
        setOfKeys.addAll(mapOfStrings.keySet());
            
        for(String key: setOfKeys)
            if(mapOfStrings.containsKey(key))
                if(!matchMap(mapOfStrings.get(key), maxFrequencies))
                    mapOfStrings.remove(key);
        
        return new ArrayList<>(mapOfStrings.keySet());
    }
}