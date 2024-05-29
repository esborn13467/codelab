#include <iostream>
using namespace std;
// Finding Duplicates
int main(){
	 int nums[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int target = 4;
int n = sizeof(nums) / sizeof(nums[0]);

	for(int i=0; i<n; ++i){
		for (int j=i +1 ;j<n;++j){
			if (nums[i]+nums[j]==target)

	cout<< i,j;
}
}
}