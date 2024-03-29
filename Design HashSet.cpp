//link: https://leetcode.com/problems/design-hashset/

CODE:


class MyHashSet {
private:
    int size;
    vector<list<int>> buckets;

public:
    MyHashSet() {
        size = 1000;
        buckets = std::vector<std::list<int>>(size);
    }

    void add(int key) {
        int index = hash(key);
        std::list<int>& bucket = buckets[index];
        if (!contains(key, bucket)) {
            bucket.push_back(key);
        }
    }

    void remove(int key) {
        int index = hash(key);
        std::list<int>& bucket = buckets[index];
        bucket.remove(key);
    }

    bool contains(int key) {
        int index = hash(key);
        std::list<int>& bucket = buckets[index];
        return contains(key, bucket);
    }

private:
    int hash(int key) {
        return key % size;
    }

    bool contains(int key, std::list<int>& bucket) {
        for (int num : bucket) {
            if (num == key) {
                return true;
            }
        }
        return false;
    }
};
