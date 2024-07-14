#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;



int main() {
        vector<int> nums={1,2,5,9   };
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int t=5;
        int left=0,right=nums[n-1];
        while(left<=right){
            int mid=(left+right)/2;
            int sum=0;
            for(int i=0;i<n;i++){
                sum+= std::ceil(static_cast<double>(nums[i]) / mid);
            }
            if(sum>t){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        cout<<"left="<<left;
        


    return 0;
}
