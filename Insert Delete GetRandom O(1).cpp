class RandomizedSet {
public:
    unordered_set<int>obj;
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(obj.count(val)>0)
            return false;
        else{
            obj.insert(val);
            return true;
        }
    }
    
    bool remove(int val) {
        if(obj.count(val)>0){
            obj.erase(val);
            return true;
        }
        else
            return false;
    }
    
    int getRandom() {
        unordered_set<int>:: iterator it = obj.begin();
        advance(it,rand()%obj.size());
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
