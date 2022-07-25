//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
/*
	Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].
*/
class Solution {
    public int[] searchRange(int[] nums, int target) {
        Integer first = -1, second = -1;
        for(int i = 0; i < nums.length; i++) {
            if(first == -1) {
                if(nums[i] == target) {
                    first = i;
                    second = i;
                }
            }
            else {
                if(target != nums[i])
                    break;
                second = i;                
            }
        }
        return new int[]{first, second};
    }
}