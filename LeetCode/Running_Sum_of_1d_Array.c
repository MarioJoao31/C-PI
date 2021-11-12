/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
int* res= (int*) malloc(sizeof(int)*numsSize);
    int sum=0;
    int incre=0;
    
    for(int i=1;i<numsSize;i++){
        
        res[0]=nums[0];
        incre +=nums[i];
        res[i]=nums[0]+incre;
        
        
    }
    
    *returnSize=numsSize;
    return res;
}

/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
*/