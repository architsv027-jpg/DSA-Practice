 // approch first
    // Brute Force Approach
    // Time: O(n^2)
    // Space: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:


    int removeElementBruteForce(vector<int>& nums, int val) {

        int n = nums.size();

        int i = 0;

        while (i < n) {

            if (nums[i] == val) {

                for (int j = i; j < n - 1; j++) {
                    nums[j] = nums[j + 1];
                }

                n--;
            }
            else {
                i++;
            }
        }

        return n;
    }


    // Optimized Two Pointer Approach
    // Time: O(n)
    // Space: O(1)


    int removeElement(vector<int>& nums, int val) {

        int k = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};
