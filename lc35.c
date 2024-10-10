int searchInsert(int* nums, int numsSize, int target) {
    for(int i =0;i<numsSize;i++){
        int final =0;
        if(nums[i]== target){
            final = i; 
            return final;
        }else{
            if(target > nums[i] && target<nums[i+1]){
                final = i+1;
                return final;
            }
        }
    }
}

int main()