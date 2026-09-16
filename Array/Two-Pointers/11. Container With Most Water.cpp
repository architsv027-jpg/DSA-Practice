// Add two pointer solution for Container With Most Water




//first Approach(Brute Force)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // Brute Force Approach
    // Time: O(n^2)
    // Space: O(1)

    int maxAreaBruteForce(vector<int>& height) {

        int ans = 0;

        for (int i = 0; i < height.size(); i++) {

            for (int j = i + 1; j < height.size(); j++) {

                int width = j - i;
                int h = min(height[i], height[j]);

                int area = width * h;

                ans = max(ans, area);
            }
        }

        return ans;
    }



// Second and optimal approch


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int left = 0;
        int right = height.size() - 1;
        int ans = 0;

        while (left < right) {

            int width = right - left;
            int h = min(height[left], height[right]);

            int area = width * h;

            ans = max(ans, area);

            if (height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }

        return ans;
    }
};

// Optimized Two Pointer Approach
    // Time: O(n)
    // Space: O(1)












