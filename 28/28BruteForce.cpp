/*
QUESTION

Given two strings needle and haystack, return the index of the first occurrence of needle in haystack,
or -1 if needle is not part of haystack.

EXPLANATION

* It uses the find function provided by C++ to perform this search.
* If 'needle' is found in 'haystack', it returns the index of the first occurrence.
* If 'needle' is not found, it returns a special value (-1) to indicate that 'needle' is not present in 'haystack'.

*/

class Solution
{
public:
  int strStr(string haystack, string needle)
  {
    // Use the find function to search for 'needle' in 'haystack'
    return haystack.find(needle);
  }
}
