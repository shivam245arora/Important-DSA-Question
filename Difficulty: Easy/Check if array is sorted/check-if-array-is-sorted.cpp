class Solution {
	public:
	bool helper(vector<int>&arr, int prev, int next) {
		if(next>=arr.size()) return true;
		if (arr[prev]>arr[next]) {
		    
			return false; 
		    
		}
			
			return	helper(arr, ++prev, ++next);
				
			
			
		}
		bool isSorted(vector<int>& arr) {
			helper(arr, 0, 1);
		}
	};
