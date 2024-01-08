/*
QUESTION

Given an integer x, return true if x is a palindrome, and false otherwise.

EXPLANATION

Time complexity is O(n) , where n is number of digits in x

* If the number is negative, it can't be a palindrome, so the function returns false.
* The function reverses the digits of the number and checks if the reversed number is equal to the original number.
* To reverse the digits, it extracts the last digit in each iteration of the loop, builds the reversed number, and 
  removes the last digit from the original number.
* Using long long for revNum helps handle large numbers and potential overflow when reversing digits.

*/

class Solution
{
public:
    bool isPalindrome(int x)
    {
        // If the number is negative, it cannot be a palindrome
        if (x < 0)
            return false;

        // Variables to store the reversed number and the original number
        long long revNum = 0; // Use long long to handle potential overflow
        int temp = x;

        // Reverse the digits of the number
        while (x > 0)
        {
            // Extract the last digit
            int rem = x % 10;

            // Build the reversed number by adding the digit in the reverse order
            revNum = revNum * 10 + rem;

            // Remove the last digit from the original number
            x = x / 10;
        }
        // Check if the reversed number is equal to the original number
        return revNum == temp;
    }
};
