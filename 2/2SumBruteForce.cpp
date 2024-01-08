/*
QUESTION

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.


EXPLANATION

Time complexity is O(n^2)

* We want to find two numbers in a list that add up to a specific target number.
* The function goes through each number in the list.
* For each number, it checks all pairs of numbers in the list.
* If it finds a pair whose sum is equal to the target, it tells us the positions (indices) of those two numbers.
* If no such pair is found, it says there is no solution by returning an empty set.

*/

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        // Iterate through each number in the list
        for (int i = 0; i < nums.size(); i++)
        {

            // Check each pair of numbers
            for (int j = 0; j < nums.size(); j++)
            {

                // If the two numbers at positions i and j add up to the target
                if (i != j && nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        // Return an empty set if no pair is found
        return {};
    }
};
