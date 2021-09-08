#include <iostream>
#include<cmath>

#include<vector>
using namespace std;

int countNumOfDigits(int n){
    return (int)log10(n)+1;

}
int findNumbers(vector<int>& nums){
    int count = 0 ;
    for(int i = 0; i<nums.size();i++){
        if(countNumOfDigits(nums[i])%2 ==0){
            count ++;

        }
    }
    return count;
}
int main(){
    int arr [] = {52,41,69};
    vector<int> a(arr,arr+sizeof(arr)/sizeof(int));
    cout<< countNumOfDigits(100)<<endl;
    // cout<<findNumbers(a)<<endl;
    return 0;
   
}