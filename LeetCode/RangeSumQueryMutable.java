//https://leetcode.com/problems/range-sum-query-mutable/
/*
	Given an integer array nums, handle multiple queries of the following types:

Update the value of an element in nums.
Calculate the sum of the elements of nums between indices left and right inclusive where left <= right.
Implement the NumArray class:

NumArray(int[] nums) Initializes the object with the integer array nums.
void update(int index, int val) Updates the value of nums[index] to be val.
int sumRange(int left, int right) Returns the sum of the elements of nums between indices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... + nums[right]).
*/
class NumArray {
    // This is node of our segment tree
    private class SegmentTreeNode {
        int val, start, end;
        SegmentTreeNode left, right;
        
        SegmentTreeNode(int start, int end) {
            this.val = 0;
            this.start = start;
            this.end = end;
            this.left = this.right = null;
        }
        
        SegmentTreeNode setValue(int val) {
            this.val = val;
            return this;
        }
    }
    
    private SegmentTreeNode root = null;
    
    private SegmentTreeNode buildSegmentTree(int[] array, int start, int end) {
        if(start > end)
            return null;
        
        SegmentTreeNode node = new SegmentTreeNode(start, end);
        
        // If the node is leaf node
        if(start == end)
            return node.setValue(array[start]);
        
        int mid = start + (end - start) / 2;
        node.left = buildSegmentTree(array, start, mid);
        node.right = buildSegmentTree(array, mid + 1, end);
        node.setValue(node.left.val + node.right.val);
        
        return node;
    }
    
    private void updateValueInSegmentTree(SegmentTreeNode node, int index, int newValue) {
        // If node is leaf node
        if(node.start == node.end) {
            node.setValue(newValue);
            return;
        }
        
        int mid = node.start + (node.end - node.start) /2;
        if(index <= mid)
            updateValueInSegmentTree(node.left, index, newValue);
        else
            updateValueInSegmentTree(node.right, index, newValue);
        
        node.setValue(node.left.val + node.right.val);
    }
    
    private int getSumOfRange(SegmentTreeNode node, int start, int end) {
        // If node is found for the given range
        if(node.start == start && node.end == end)
            return node.val;
        
        int mid = node.start + (node.end - node.start) / 2;
        if(end <= mid)
            return getSumOfRange(node.left, start, end);
        if(start >= mid + 1)
            return getSumOfRange(node.right, start, end);
        
        return getSumOfRange(node.left, start, mid) + getSumOfRange(node.right, mid + 1, end); 
    }

    public NumArray(int[] nums) {
        root = buildSegmentTree(nums, 0, nums.length - 1);
    }
    
    public void update(int index, int val) {
        updateValueInSegmentTree(root, index, val);
    }
    
    public int sumRange(int left, int right) {
        return getSumOfRange(root, left, right);
    }
}

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * obj.update(index,val);
 * int param_2 = obj.sumRange(left,right);
 */