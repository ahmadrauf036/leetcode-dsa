#include <iostream>
#include <vector>
using namespace std;

class RemoveElement
{
    public:
    int removeElement(vector<int>& nums, int val) {
        int i=0, j=nums.size() - 1;
        int count=0;
        while (i<=j)
        {
            if(nums[j]==val){
                j--;
                count++;
                continue;
            }
            if(nums[i]==val){
                swap(nums[i],nums[j]);
                j--;
                count++;
            }
            i++;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            cout<<nums[i]<<" ";
        }
        cout<<endl<<count;
        return nums.size()-count;
    }
};

int main(){
    RemoveElement rem;
    vector<int> nums={1,2,3,2,3,4};
    rem.removeElement(nums,2);
    return 0;
}