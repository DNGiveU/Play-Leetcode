/// Source : https://leetcode.com/problems/sort-colors/
/// Author : liuyubobobo
/// Time   : 2016-12-06


#include <iostream>
#include <vector>
#include <cassert>
#include <stdexcept>

using namespace std;


/// Problem
/********************************************************************************************************
 *
 * Given an array with n objects colored red, white or blue,
 * sort them so that objects of the same color are adjacent,
 * with the colors in the order red, white and blue.
 *
 * Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.
 *
 * Note:
 * You are not suppose to use the library's sort function for this problem.
 *
 * Follow up:
 * A rather straight forward solution is a two-pass algorithm using counting sort.
 * First, iterate the array counting number of 0's, 1's, and 2's,
 * then overwrite array with total number of 0's, then 1's and followed by 2's.
 *
 * Could you come up with an one-pass algorithm using only constant space?
 ********************************************************************************************************/


/// Solution 1
/***********************************************************************************************
 * Just sort
 *
 * Time Complexity: O(nlogn)
 * Space Complexity: O(1)
 ************************************************************************************************/

class Solution {
public:
    void sortColors(vector<int>& nums) {

        sort( nums.begin(), nums.end() );

        return;
    }
};

int main() {

    int nums[] = {2, 2, 2, 1, 1, 0};
    vector<int> nums_vec = vector<int>( nums , nums + sizeof(nums)/sizeof(int));

    Solution().sortColors( nums_vec );
    for( int i = 0 ; i < nums_vec.size() ; i ++ )
        cout<<nums_vec[i]<<" ";
    cout<<endl;

    return 0;
}