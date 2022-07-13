//https://leetcode.com/problems/binary-tree-level-order-traversal/
/*
	Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).
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
    Map<Integer, List<Integer>> map = new HashMap<>();
    void scanTree(TreeNode node, int level) {
        if(!map.containsKey(level))
            map.put(level, new ArrayList<>());
        map.get(level).add(node.val);
        
        if(node.left != null)
            scanTree(node.left, level+1);
        if(node.right != null)
            scanTree(node.right, level+1);
    }
    public List<List<Integer>> levelOrder(TreeNode root) {
        if(root != null)
            scanTree(root, 1);
        
        List<List<Integer>> list= new ArrayList<>();
        for(Integer key: map.keySet())
            list.add(map.get(key));
        
        return list;
    }
}