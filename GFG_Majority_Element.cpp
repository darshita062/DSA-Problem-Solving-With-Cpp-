int majorityElement(vector<int>& arr) {
    int n = arr.size();
    map<int,int> m;
    for(int i:arr){
        
    }
    for(int num:arr){
        m[num]++;
        if (m[num]>n/2){
            return num;
        }
    }
    return -1;
}