/*
QUESTION

You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing
the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.
The final sorted array should not be returned by the function, but instead be stored inside the array nums1.
To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged,
and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

EXPLANATION

Time complexity is O((m+n)Log(m+n))

* It starts by copying elements from nums2 to the end of nums1. The loop variable k starts from m, the index where nums2
  elements should be inserted.
* After copying, it sorts the entire nums1 array to ensure that the merged array is in non-decreasing order.
* The merged array is stored in nums1, and no value is returned by the function.

*/

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        // Copy elements from nums2 to the end of nums1
        for (int k = m; k < m + n; ++k)
        {
            nums1[k] = nums2[k - m];
        }
        // Sort the entire nums1 array to ensure it's in non-decreasing order
        sort(nums1.begin(), nums1.end());
    }
};
