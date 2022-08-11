//https://leetcode.com/problems/merge-sorted-array/submissions/
/*
	You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
*/
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {        
        // Element which should be merged
        int indexToBeMerged = 0;
        
        // Position where the element should be merged
        int indexWhereMerged = 0;
        
        // Loop to merge all elements
        while(indexWhereMerged < m && indexToBeMerged < n) {
            if(nums1[indexWhereMerged] <= nums2[indexToBeMerged])
                indexWhereMerged++;
            else {
                // Shift all elements to right by one place
                int i = m++;
                while(i > indexWhereMerged)
                    nums1[i] = nums1[i-- - 1];
                
                // Now merge the element at the specified index
                nums1[indexWhereMerged++] = nums2[indexToBeMerged++];
            }
        }
            
        // Merge all the remaining elements
        while(indexToBeMerged < n)
            nums1[indexWhereMerged++] = nums2[indexToBeMerged++];
    }
}