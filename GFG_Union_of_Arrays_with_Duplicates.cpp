int findUnion(vector<int>& a, vector<int>& b) {
    // code here
    set<int> s;
    for(int i:a){
        s.insert(i);
    }
    for(int j:b){
        s.insert(j);
    }
    return s.size();
}