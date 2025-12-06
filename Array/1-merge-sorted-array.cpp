#include <iostream>
#include <vector>
using namespace std;

class MergeSortedArray
{
    public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        int i=m+n-1, j=m-1, k=n-1;
        while (i>=0)
        {
            if(j<0 && k>=0){
                nums1[i--]=nums2[k--];
                continue;
            }
            if (k<0 && j>=0)
            {
                i--;
                break;
            }
            if(nums1[j]<nums2[k]){
                nums1[i]=nums2[k--];
            }
            else if (k>=0 && nums1[j]>=nums2[k])
            {
                nums1[i]=nums1[j--];
            }
            i--;
        }  
        i++;  
        while (i<m+n)
        {
            cout<<nums1[i]<<" ";
            i++;
        }
        cout<<endl; 
    }
};

int main(){
    MergeSortedArray msa;
    // vector<int> nums1 = {1,2,3,0,0,0};
    // int m = 3;
    // vector<int> nums2 = {2,5,6}; 
    // int n = 3;

    //  vector<int> nums1 = {1};
    // int m = 1;
    // vector<int> nums2 = {}; 
    // int n = 0;

    //  vector<int> nums1 = {0};
    // int m = 0;
    // vector<int> nums2 = {1}; 
    // int n = 1;
    // vector<int> nums1 = {4,5,6,0,0,0};
    // int m = 3;
    // vector<int> nums2 = {1,2,3}; 
    // int n = 3;

    vector<int> nums1 = {1,4,7,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,9}; 
    int n = 3;
    msa.merge(nums1,m,nums2,n);
    return 0;
}