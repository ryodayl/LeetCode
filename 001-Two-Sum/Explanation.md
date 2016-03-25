A brute force solution could be, for each number $n_i$ in the input array, traverse the array to find if there exists a number equals to $target - n_i$. This yields an $O(n^2)$ solution.

To do it better, we can use a hash table to map the number to its index. Then traverse the array, for each $n_i$, we check the hash table to find if the key $target - n_i$ exists. This solution takes linear time.
