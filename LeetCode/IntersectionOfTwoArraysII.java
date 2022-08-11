//https://leetcode.com/problems/intersection-of-two-arrays-ii/
/*
	Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.
*/
class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        Map<Integer, Integer> map1 = new HashMap<>();
        Map<Integer, Integer> map2 = new HashMap<>();
        
        // Count frequency of each number in array 1
        for(int i: nums1)
            map1.put(i, map1.getOrDefault(i, 0) + 1);
        
        // Count frequency of each number in array 1 if it is present in array 1 also
        for(int i: nums2)
            if(map1.containsKey(i) && map1.get(i) > 0) {
                map2.put(i, map2.getOrDefault(i, 0) + 1);
                map1.put(i, map1.get(i) - 1);
            }        
        
        // Adding the common elements into arraylist
        ArrayList<Integer> arr = new ArrayList<>();
        for(int num: map2.keySet())
            for(int i = 1; i <= map2.get(num); i++)
                arr.add(num);
        
        // convert arraylist into array
        int[] array = new int[arr.size()];
        int index = 0;
        for(int num: arr)
            array[index++] = num;
        
        return array;
    }
}