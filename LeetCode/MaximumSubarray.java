//https://leetcode.com/problems/maximum-subarray/
/*
	Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.
*/
class Solution {
    public int maxSubArray(int[] nums) {
        int max = nums[0];
        int sum = nums[0];
        for(int i = 1; i < nums.length; i++) {
            sum += nums[i];
            if(sum < nums[i])
                sum = nums[i];
            if(sum > max)
                max = sum;
        }        
        return max;
    }
}