//https://leetcode.com/problems/fibonacci-number/
/*
	The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).
*/
class Solution {
    Map<Integer,  Integer> map = new HashMap<>();
    
    public int fib(int n) {
        int fib;
        
        if(n == 0)
            fib = 0;
        else if(n == 1)
            fib = 1;
        else
            fib = map.getOrDefault(n-1, fib(n-1)) + map.getOrDefault(n-2, fib(n-2));
        
        map.put(n, fib);
        return fib;
    }
}