//https://leetcode.com/problems/implement-trie-prefix-tree/
/*
	A trie (pronounced as "try") or prefix tree is a tree data structure used to efficiently store and retrieve keys in a dataset of strings. There are various applications of this data structure, such as autocomplete and spellchecker.

Implement the Trie class:

Trie() Initializes the trie object.
void insert(String word) Inserts the string word into the trie.
boolean search(String word) Returns true if the string word is in the trie (i.e., was inserted before), and false otherwise.
boolean startsWith(String prefix) Returns true if there is a previously inserted string word that has the prefix prefix, and false otherwise.
*/
class Trie {
    Node root = null;
    
    class Node {
        char ch;
        boolean isLast;
        Map<Character, Node> map;
        
        Node(char ch) {
            this.ch = ch;
            isLast = false;
            map = new HashMap<>();
        }
        
        void setLast() {
            isLast = true;
        }
    }

    public Trie() {
        root = new Node('0');
    }
    
    public void insert(String word) {
        Node current = root;
        for(char ch: word.toCharArray()) {
            if(!current.map.containsKey(ch))
                current.map.put(ch, new Node(ch));
            current = current.map.get(ch);
        }
        current.setLast();
    }
    
    public boolean search(String word) {
        Node current = root;
        for(char ch: word.toCharArray()) {
            if(!current.map.containsKey(ch))
                return false;
            current = current.map.get(ch);
        }
        if(current.isLast)
            return true;
        return false;
    }
    
    public boolean startsWith(String prefix) {
        Node current = root;
        for(char ch: prefix.toCharArray()) {
            if(!current.map.containsKey(ch))
                return false;
            current = current.map.get(ch);
        }
        return true;
    }
}

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * boolean param_2 = obj.search(word);
 * boolean param_3 = obj.startsWith(prefix);
 */