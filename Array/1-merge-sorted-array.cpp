#include <iostream>
#include <vector>
using namespace std;

class merge_sorted_array
{
   public:
   void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1; 
        int j=n+m-1;
        int k=0;
        for (int i = m; i < (m+n); i++)
        {
           nums1[i]=nums2[k];
           k++;
        }

        for (int i = 0; i < nums1.size(); i++)
        {
           cout<<nums1[i]<<" ";
        }
        cout<<endl;
        while (i >=0){
            if(nums1[i]<=nums1[j]){  
                if (j>m) j--; 
                else i--;
                continue;
            }
            if(nums1[i]>nums1[j]){
                if(i!=0 && nums1[i-1]>nums1[j]) {
                }
                else{
                    int temp = nums1[i];
                    nums1[i]=nums1[j];
                    nums1[j]=temp;
                    if(j!=m) j--;
                }
                i--;
            }
        }
        for (int i = 0; i < nums1.size(); i++)
        {
           cout<<nums1[i]<<" ";
        }
    }
};

int main(){
    merge_sorted_array msa;
    // vector<int> nums1 = {1,2,3,0,0,0};
    // int m = 3;
    // vector<int> nums2 = {2,5,6}; 
    // int n = 3;

    //  vector<int> nums1 = {1};
    // int m = 1;
    // vector<int> nums2 = {}; 
    // int n = 0;

     vector<int> nums1 = {0};
    int m = 0;
    vector<int> nums2 = {1}; 
    int n = 1;
    msa.merge(nums1,m,nums2,n);
    return 0;
}