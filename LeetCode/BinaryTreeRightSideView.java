//https://leetcode.com/problems/binary-tree-right-side-view/
/*
	Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.
*/

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    Map<Integer, Integer> map = new HashMap<>();
    
    void traverseTree(TreeNode node, int level) {
        map.put(level, node.val);
        if(node.left != null)
            traverseTree(node.left, level + 1);
        if(node.right != null)
            traverseTree(node.right, level + 1);
    }
    
    public List<Integer> rightSideView(TreeNode root) {
        if(root != null) 
            traverseTree(root, 1);
        
        List<Integer> array = new ArrayList<>();
        for(Integer key: map.keySet()) {
            array.add(map.get(key));
        }
        return array;
    }
}