#include <iostream>
#include <vector>

int main() {
	int n;
	std::cin >> n;
	std::vector<int> nums(n);

	for (int i = 0; i < n; i++){
		std::cin >> nums[i];
	}

	int maxElement = nums[0];
	int minElement = nums[0];

	for(int j = 0; j < n; j++){
		if(nums[j] > maxElement){
			maxElement = nums[j];
		}
		if(nums[j] < minElement){
			minElement = nums[j];
		}
	}

	for(int k = 0; k < n; k++){
		if(nums[k] != maxElement && nums[k] != minElement){
			nums[k] = 0;
		}
		std::cout << nums[k]; 
	}
	
}
