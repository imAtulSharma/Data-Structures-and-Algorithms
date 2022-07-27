//https://leetcode.com/problems/flatten-binary-tree-to-linked-list/submissions/
/*
	Given the root of a binary tree, flatten the tree into a "linked list":

The "linked list" should use the same TreeNode class where the right child pointer points to the next node in the list and the left child pointer is always null.
The "linked list" should be in the same order as a pre-order traversal of the binary tree.
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
    List<TreeNode> list = new ArrayList<>();
    
    void preOrderTraversal(TreeNode node) {
        if(node == null)
            return;
        list.add(node);        
        preOrderTraversal(node.left);
        preOrderTraversal(node.right);
    }
    
    public void flatten(TreeNode root) { 
        preOrderTraversal(root);
        
        TreeNode prev = root;
        
        if(!list.isEmpty()) {
            for(int i = 1; i < list.size(); i++) {
                prev.right = list.get(i);
                prev.left = null;
                prev = prev.right;
            }
        }
    }
}