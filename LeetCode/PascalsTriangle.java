//https://leetcode.com/problems/pascals-triangle/
/*
	Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
*/
class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> list = new ArrayList<>();
        
        for(int i = 0; i < numRows; i++) {
            ArrayList<Integer> currentList = new ArrayList<>();
            for(int j = 0; j <= i; j++) {
                if(j == 0 || j == i) 
                    currentList.add(1);
                else 
                    currentList.add(
                    list.get(list.size() - 1).get(j) + list.get(list.size() - 1).get(j - 1)
                );
            }
            list.add(currentList);
        }
        return list;
    }
}