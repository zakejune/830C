#include <stdio.h>
int* twoSum(int* nums, int numsSize, int target) {
int i=0,j=0;
int a[2]={0};
for(i=0;i<numsSize-1;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                a[0]=i;
                a[1]=j;
                break;
            }
        }
    }
    return a;
}
int main()
{
    int* a;
    int nums[4]={2,7,11,15};
    a=twoSum(nums,4,9);
    printf("[%d,%d]",a[0],a[1]);
    return 0;
} 