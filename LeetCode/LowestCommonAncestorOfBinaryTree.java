//https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/submissions/
/*
	Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”
*/
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    
    TreeNode getLCA(TreeNode node, TreeNode p, TreeNode q) {
        if(node == null || node == p || node == q)
            return node;
        
        TreeNode left = lowestCommonAncestor(node.left, p, q);
        TreeNode right = lowestCommonAncestor(node.right, p, q);
        
        if(left != null && right != null)
            return node;
        else if (left == null)
            return right;
        else if (right == null)
            return left;
        
        return node;
    }
    
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        return getLCA(root, p, q);
    }
}