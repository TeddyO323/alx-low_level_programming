# 0x12. C - Singly linked lists

<h3 class="panel-title">Concepts</h3>
    </div>
    <div class="panel-body">
      <p>
        <em>For this project, we expect you to look at this concept:</em>
      </p>

      <ul>
<li>

[Data Structures](./concept.md) </li>
      </ul>
    </div>
  </div>


<p><img src="./giphy-3.gif" alt="" style="" /></p>

<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="https://www.youtube.com/watch?v=udapt4FGY20&t=130s" title="Linked Lists" target="_blank">Linked Lists</a> </li>
<li><a href="https://www.google.com/#q=linked+lists" title="Google" target="_blank">Google</a> </li>
<li><a href="https://www.youtube.com/results?search_query=linked+lists" title="Youtube" target="_blank">Youtube</a> </li>
</ul>

<h2>Learning Objectives</h2>

<ul>
<li>When and why using linked lists vs arrays</li>
<li>How to build and use linked lists</li>
</ul>

<h2>More Info</h2>

<p>Please use this data structure for this project:</p>

<pre><code>/**
 * struct list_s - singly linked list
 * @str: string - (malloc&#39;ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
</code></pre>

  </div>
</div>

---

<details>

<summary>Show/Hide Quiz</summary>

### 1.) What’s a node? (select all possible answers)

- [ ] It’s a server
- [x] It’s a structure with a pointer to the next node and value information
It’s a cell in an array
It’s an integer
It’s a space allocated in memory

