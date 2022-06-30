# 0x1A. C - Hash tables

<pre><strong>🕊🕊🕊Joke of The day🕊🕊🕊</strong>

HE: You are the ";" to my code 😍<br>
SHE: Sorry I have Python! 😕<br>

<details>
    <summary>[click here]</summary>
    <p><img src="./joke.jpg" alt="" style="" /><br /></p>
</details></pre>


# Resources

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="https://www.youtube.com/watch?v=MfhjkfocRR0" title="What is a HashTable Data Structure - Introduction to Hash Tables , Part 0" target="_blank">What is a HashTable Data Structure - Introduction to Hash Tables , Part 0</a> </li>
<li><a href="https://en.wikipedia.org/wiki/Hash_function" title="Hash function" target="_blank">Hash function</a> </li>
<li><a href="https://en.wikipedia.org/wiki/Hash_table" title="Hash table" target="_blank">Hash table</a> </li>
</ul>

<strong>Learning Objectives</strong>

<ul>
<li>What is a hash function</li>
<li>What makes a good hash function</li>
<li>What is a hash table, how do they work and how to use them</li>
<li>What is a collision and what are the main ways of dealing with collisions in the context of a hash table</li>
<li>What are the advantages and drawbacks of using hash tables</li>
<li>What are the most common use cases of hash tables</li>
</ul>

---

## More Info

### Data Structures

<p>Please use these data structures for this project:</p>

<pre><code>/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
</code></pre>

### Tests

<p>We strongly encourage you to work all together on a set of tests</p>

### Python Dictionaries

<p>Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type <code>d = {&#39;a&#39;: 1, &#39;b&#39;: 2}</code>, but everything looks so simple for the user. Python doesn&rsquo;t use the exact same implementation than the one you will work on today though. If you are curious on how it works under the hood, here is a good blog post about <a href="/rltoken/LGV7VAHGAkef5wdIhqiY2A" title="how dictionaries are implemented in Python 2.7" target="_blank">how dictionaries are implemented in Python 2.7</a> (not mandatory).</p>

<p>Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table. <a href="/rltoken/6wE80OFPwL-As1zGh2iMFg" title="Read more here" target="_blank">Read more here</a> (not mandatory).</p>

  </div>
</div>




