class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        int min = arr[0];
        int max = arr[0];
        int n = arr.size();
        if (n==0){
            return {-1,-1};
        }
        for (int i= 0;i<n;i++){
            if (arr[i] < min){
                min = arr[i];
            }
            if (arr[i] > max){
                max = arr[i];
            }
        }
        return {min,max};
    }
};
