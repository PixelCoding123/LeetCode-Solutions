/*
QUESTION

You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing
the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.
The final sorted array should not be returned by the function, but instead be stored inside the array nums1.
To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged,
and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

EXPLANATION

* The function merges two sorted arrays (nums1 and nums2) into nums1 in non-decreasing order.
* It uses three pointers (i, j, and k) to traverse nums1, nums2, and the merged array respectively.
* The loop compares elements from the end of both arrays (nums1 and nums2) and copies the greater element to the end of the 
  merged array (nums1).
* It continues this process until there are no more elements in either nums1 or nums2.
* If there are remaining elements in nums2, they are copied to the beginning of nums1.

*/

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = m - 1;     // Index for nums1
        int j = n - 1;     // Index for nums2
        int k = m + n - 1; // Index for merged array nums1

        // Iterate while there are elements in both nums1 and nums2
        while (i >= 0 && j >= 0)
        {

            // Compare elements from the end of both arrays
            if (nums1[i] > nums2[j])
                nums1[k--] = nums1[i--]; // Copy the greater element from nums1
            else
                nums1[k--] = nums2[j--]; // Copy the greater element from nums2
        }

        // If there are remaining elements in nums2, copy them to nums1
        while (j >= 0)
            nums1[k--] = nums2[j--];
    }
};
