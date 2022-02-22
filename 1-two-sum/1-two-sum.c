int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    * returnSize=2;
    int *array= malloc(sizeof(int)* 2);
    for(int i=0; i<numsSize; i++)
                      {
                          for(int j=0; j<numsSize; j++)
                          {
                              if((nums[i]+nums[j]==target)&& i!=j)
                              {
                                  array[0]=i;
                                  array[1]=j;
                                  return array;
                              }
                          }
                      }
    array[0]=-1;
    array[1]=-1;
    return array;
}