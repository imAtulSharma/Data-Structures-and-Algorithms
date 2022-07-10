//https://leetcode.com/problems/min-cost-climbing-stairs/
/*
    You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.

You can either start from the step with index 0, or the step with index 1.

Return the minimum cost to reach the top of the floor.
*/
class Solution {
    int[] cost;
    Map<Integer, Integer> map = new HashMap<>();
    public int minCostClimbingStairs(int[] cost) {
        this.cost = cost;
        for(int i = cost.length-1; i > -1; i--) {
            if(i==cost.length-1) map.put(i, cost[i]);
            else if (i == cost.length-2) map.put(i, cost[i]);
            else map.put(i, cost[i] + Math.min(map.get(i+1), map.get(i+2)));
        }
        return Math.min(map.get(0), map.get(1));
    }
}