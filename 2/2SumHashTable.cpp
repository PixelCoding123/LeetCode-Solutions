/*
QUESTION

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.


EXPLANATION

Time complexity is O(n)

* We use an unordered_map named index to store each number from the array along with its index.
* The function iterates through each number in the array.
* For each number, it calculates the complement needed to reach the target sum. The complement is the difference
  between the target and the current number.
* It checks if the complement is already in the index map. If yes, it means a pair has been found whose sum equals
  the target, and it returns the indices of those two numbers.
* If the complement is not found, it stores the current number and its index in the index map.
* If no such pair is found during the iterations, the function returns an empty vector, indicating that there is no valid solution.

*/

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // Create an unordered_map to store the value and its index ( Hash Table )
        unordered_map<int, int> index;

        // Iterate through each number in the list
        for (int i = 0; i < nums.size(); i++)
        {

            // Calculate the complement needed to reach the target
            int complement = target - nums[i];

            // Check if the complement is already in the map
            if (index.find(complement) != index.end())
            {
                return {index[complement], i};
            }

            // Store the current number and its index in the map
            index[nums[i]] = i;
        }
        // Return an empty set if no such pair is found
        return {};
    }
};
