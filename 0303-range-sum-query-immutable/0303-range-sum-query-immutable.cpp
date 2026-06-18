class NumArray {
public:
vector<int>psum;
    NumArray(vector<int>& nums) {
        psum.resize(nums.size(),0);
        psum[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            psum[i]=psum[i-1]+nums[i];
        }
    }
    
    int sumRange(int l, int r) {
        if(l==0) return psum[r];
        int sum=psum[r]-psum[l-1];
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */