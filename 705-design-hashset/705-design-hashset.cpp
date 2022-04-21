class MyHashSet {
    public:
    vector<bool> a;
    MyHashSet() {
        a.resize(1e6+1,false);
    }
    
    void add(int key) {
        a[key]= true;
    }
    
    void remove(int key) {
        a[key]=false;
    }
    
    bool contains(int key) {
        return a[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */