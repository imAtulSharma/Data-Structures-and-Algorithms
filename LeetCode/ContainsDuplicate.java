//https://leetcode.com/problems/contains-duplicate/
/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*/
class Solution {
    public boolean containsDuplicate(int[] nums) {
        Map<Integer, Boolean> map = new HashMap<>();
        for(int i: nums)
            if(map.containsKey(i))
                return true;
            else
                map.put(i, true);
        return false;
    }
}