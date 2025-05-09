class Solution {
    public:
      int countFreq(vector<int>& arr, int target) {
          // code here
          int count = 0;
          int n = arr.size();
          for(int i=0;i<n;i++){
              if (arr[i] == target){
                  count += 1;
              }
          }
          return count;
      }
  };