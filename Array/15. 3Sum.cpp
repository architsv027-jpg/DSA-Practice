
// Solved LeetCode 15 - 3Sum using the Two Pointer approach.

// Approach:
// - Sort the array first.
// - Fix one element and use two pointers to find the remaining two elements.
// - Skip duplicate values to avoid duplicate triplets.

// Time Complexity: O(n²)
// Space Complexity: O(1) excluding the sorting space.




class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n=nums.size();
         vector<vector<int>> ans;

         sort(nums.begin(), nums.end());

         for(int i=0 ; i< n ; i++)
         {

            if(i>0 && nums[i]==nums[i-1])
            continue;
            int j=i+1;
            int k= n-1;

            // Two pointer 
            while(j<k)
            {
                int sum = nums[i] +nums[j] + nums[k];

                if(sum==0)
                {

                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;

                    //duplicate ko remove ya skip krne ke liye 

                    while(j < k && nums[j]== nums[j-1])
                    j++ ;
                    while(j < k  && nums[k]== nums[k+1])
                    k-- ;

                }
                else if(sum < 0){
                    j++ ;
                }
                else{
                    k-- ; 
                }
                
            }

         }
         return ans;
        
    }
};
