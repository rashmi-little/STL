## Function of map
map stores in pair first element is a key and another is a value.
map<key type,val type> name;
map stores in ascending order of key.
unordered_map stores key in rendom manner.
time complexity of map is 0(logn)
and time complexity of unordered_map is 0(1) in best case and 0(n) in worst case(rare).
A single key can't have multiple value if we place then it will be replaced.
## function of map
    map.insert(key,val);
    map.begin()
    map.empty()//bool if empty the true else false
    map.clear()//it clear the whole map
    map.erase(key);
    map.erase(itrator);
    map.erase(starting itrator and ending itrator)
    map.count()//if key present the it will return 1 else 0;
    map.find(); it will return itrator to the location if not found then will return itrator to the end().
    map.size() it will return the size of the container.
# Notes 
In case of unordered maps we can't use complex data type.
Type complexity of unordered_map is 0(1)in best case
It implements the concept of hash value.