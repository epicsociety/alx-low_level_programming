 hash table in C/C++ is a data structure that maps keys to values. A hash table uses a hash function to compute indexes for a key. You can store the value at the appropriate location based on the hash table index.

 The benefit of using a hash table is its very fast access time. Typically, the time complexity (amortized time complexity) is a constant O(1) access time.

 Howeer, if two different keys get the same index, you will need to use other data structures (buckets) to account for these collisions. If you choose a very good hash function, the likelihood of a collision can be negligible.


 In this directory, I have constructed a hash table from scratch comprised of:

 A hash function to map keys to values.
 A hash table data structure that supports insert, search, and delete operations.
 A data structure to account for a collision of keys
