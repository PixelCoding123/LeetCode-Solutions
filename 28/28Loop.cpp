/*
QUESTION

Given two strings needle and haystack, return the index of the first occurrence of needle in haystack,
or -1 if needle is not part of haystack.

EXPLANATION


Time complexity is O(n*m) , where n = length of haystack and m = length of needle

* The function uses a basic loop to iterate through each possible starting position in 'haystack' for a substring
  that matches 'needle'.
* It compares characters in 'haystack' with the characters in 'needle'.
* If the first character of 'needle' matches the current character in 'haystack', it checks the rest of the characters
  in 'needle'.
* If all characters match, it returns the starting index. If not, it continues the search.
* If no match is found, it returns -1 to indicate that 'needle' is not present in 'haystack'.

*/

class Solution
{
public:
    int strStr(string haystack, string needle)
    {

        int hayLen = haystack.size();
        int needleLen = needle.size();

        // Iterate through 'haystack' to find the starting index of 'needle'
        for (int i = 0; i <= hayLen - needleLen; i++)
        {

            // Check if the current character in 'haystack' matches the first character of 'needle'
            if (haystack[i] == needle[0])
            {

                // Flag value
                bool found = true;

                // Check the rest of the characters in 'needle'
                for (int j = 1; j < needleLen; j++)
                {

                    // If any character doesn't match, set 'found' to false and break the loop
                    if (haystack[i + j] != needle[j])
                    {
                        found = false;
                        break;
                    }
                }
                // If all characters match, return the starting index
                if (found)
                    return i;
            }
        }
        // Return -1 if 'needle' is not found in 'haystack'
        return -1;
    }
};
