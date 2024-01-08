/*
QUESTION

You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer.
The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain
any leading 0's.
Increment the large integer by one and return the resulting array of digits.

EXPLANATION

Time complexity is O(n)

* It starts by incrementing the least significant digit (the rightmost digit) by 1.
* Then, it iterates through the digits to handle any carry-over.
* If a digit becomes 10 or more, it sets the digit to its unit's place value (digits[i] % 10) and increments the next
  significant digit.
* Finally, if the most significant digit becomes 10 or more, it handles overflow by setting it to its unit's place value and
  inserting a new digit at the beginning.

*/

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {

        int len = digits.size();

        // Increment the least significant digit
        digits[len - 1]++;

        // Iterate through digits to handle carry-over
        for (int i = len - 1; i > 0 && digits[i] >= 10; i--)
        {
            digits[i] = digits[i] % 10; // Set the digit to its unit's place value
            digits[i - 1]++;            // Increment the next significant digit
        }

        // If the most significant digit becomes 10 or more, handle overflow
        if (digits[0] >= 10)
        {
            digits[0] = digits[0] % 10;       // Set the digit to its unit's place value
            digits.insert(digits.begin(), 1); // Insert a new digit at the beginning
        }
        return digits;
    }
};
