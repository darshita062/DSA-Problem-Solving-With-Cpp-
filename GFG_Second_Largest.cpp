int getSecondLargest(vector<int> &arr) {
    int n = arr.size()+1;
    int largest = arr[0];
    int sec = -1;
    for(int i:arr){
        if (i>largest){
            sec = largest;
            largest = i;
        }
        if (i<largest && i>sec){
            sec = i;
        }
    }
    return sec;
}