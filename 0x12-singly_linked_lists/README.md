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

### 0.) What’s a node? (select all possible answers)

- [ ] It’s a server
- [x] It’s a structure with a pointer to the next node and value information
- [ ] It’s a cell in an array
- [ ] It’s an integer
- [x] It’s a space allocated in memory
    

### 1.) What’s the “head” of a linked list?

- [ ] It’s the last node
- [ ] It’s the node with the highest value
- [x] It’s the first node
- [ ] It’s the node with the lowest value
- [ ]  It’s the node with the pointer to the next equals to NULL

### 2.) What’s the “tail” of a linked list?

- [x] It’s the node with the pointer to the next equals to NULL
- [ ] It’s the first node
- [ ] It’s the node with the highest value
- [ ] It’s the node with the lowest value

### 3.) In a singly linked list, what are possible directions to traverse it? (select all possible answers)

- [x] Forward
- [ ] Backward

### 4.) Arrays Vs Linked Lists: select all true statements

- [x] We can add elements indefinitely to a linked list
- [ ] We can add elements indefinitely to an array
- [x] Linked list can contain as value a structure
- [x] Array can contain as value a structure
- [ ] We can easily remove an element from an Array
- [x] We can easily removed an element from a Linked list
- [ ] Memory is aligned for a Linked list - each elements are back to back in the memory
- [x] Memory is aligned for an Array - each elements are back to back in the memory

</details>

<details>

<Summary>Show/Hide Tasks</summary>

## TASKS

<h3 class="panel-title">
      0. Print list
    </h3>

<p>Write a function that prints all the elements of a <code>list_t</code> list.</p>

<ul>
<li>Prototype: <code>size_t print_list(const list_t *h);</code></li>
<li>Return: the number of nodes</li>
<li>Format: see example</li>
<li>If <code>str</code> is <code>NULL</code>, print <code>[0] (nil)</code></li>
<li>You are allowed to use <code>printf</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x12. Singly linked lists$ cat 0-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {&quot;World&quot;, 5, NULL};
    size_t n;

    head = &amp;hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf(&quot;Error\n&quot;);
        return (1);
    }
    new-&gt;str = strdup(&quot;Hello&quot;);
    new-&gt;len = 5;
    new-&gt;next = head;
    head = new;
    n = print_list(head);
    printf(&quot;-&gt; %lu elements\n&quot;, n);

    printf(&quot;\n&quot;);
    free(new-&gt;str);
    new-&gt;str = NULL;
    n = print_list(head);
    printf(&quot;-&gt; %lu elements\n&quot;, n);

    free(new);
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
julien@ubuntu:~/0x12. Singly linked lists$ ./a 
[5] Hello
[5] World
-&gt; 2 elements

[0] (nil)
[5] World
-&gt; 2 elements
julien@ubuntu:~/0x12. Singly linked lists$ 
</code></pre>

  </div>

[Answer](./0-print_list.c)

---


<h3 class="panel-title">
      1. List length
    </h3>

    
<p>Write a function that returns the number of elements in a linked <code>list_t</code> list.</p>

<ul>
<li>Prototype: <code>size_t list_len(const list_t *h);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x12. Singly linked lists$ cat 1-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {&quot;World&quot;, 5, NULL};
    size_t n;

    head = &amp;hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf(&quot;Error\n&quot;);
        return (1);
    }
    new-&gt;str = strdup(&quot;Hello&quot;);
    new-&gt;len = 5;
    new-&gt;next = head;
    head = new;
    n = list_len(head);
    printf(&quot;-&gt; %lu elements\n&quot;, n);
    free(new-&gt;str);
    free(new);
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b
julien@ubuntu:~/0x12. Singly linked lists$ ./b 
-&gt; 2 elements
julien@ubuntu:~/0x12. Singly linked lists$ 
</code></pre>

  </div>

[Answer](./1-list_len.c)

---

<h3 class="panel-title">
      2. Add node
    </h3>

   
<p>Write a function that adds a new node at the beginning of a <code>list_t</code> list.</p>

<ul>
<li>Prototype: <code>list_t *add_node(list_t **head, const char *str);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
<li><code>str</code> needs to be duplicated</li>
<li>You are allowed to use <code>strdup</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x12. Singly linked lists$ cat 2-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node(&amp;head, &quot;Alexandro&quot;);
    add_node(&amp;head, &quot;Asaia&quot;);
    add_node(&amp;head, &quot;Augustin&quot;);
    add_node(&amp;head, &quot;Bennett&quot;);
    add_node(&amp;head, &quot;Bilal&quot;);
    add_node(&amp;head, &quot;Chandler&quot;);
    add_node(&amp;head, &quot;Damian&quot;);
    add_node(&amp;head, &quot;Daniel&quot;);
    add_node(&amp;head, &quot;Dora&quot;);
    add_node(&amp;head, &quot;Electra&quot;);
    add_node(&amp;head, &quot;Gloria&quot;);
    add_node(&amp;head, &quot;Joe&quot;);
    add_node(&amp;head, &quot;John&quot;);
    add_node(&amp;head, &quot;John&quot;);
    add_node(&amp;head, &quot;Josquin&quot;);
    add_node(&amp;head, &quot;Kris&quot;);
    add_node(&amp;head, &quot;Marine&quot;);
    add_node(&amp;head, &quot;Mason&quot;);
    add_node(&amp;head, &quot;Praylin&quot;);
    add_node(&amp;head, &quot;Rick&quot;);
    add_node(&amp;head, &quot;Rick&quot;);
    add_node(&amp;head, &quot;Rona&quot;);
    add_node(&amp;head, &quot;Siphan&quot;);
    add_node(&amp;head, &quot;Sravanthi&quot;);
    add_node(&amp;head, &quot;Steven&quot;);
    add_node(&amp;head, &quot;Tasneem&quot;);
    add_node(&amp;head, &quot;William&quot;);
    add_node(&amp;head, &quot;Zee&quot;);
    print_list(head);
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c
julien@ubuntu:~/0x12. Singly linked lists$ ./c 
[3] Zee
[7] William
[7] Tasneem
[6] Steven
[9] Sravanthi
[6] Siphan
[4] Rona
[4] Rick
[4] Rick
[7] Praylin
[5] Mason
[6] Marine
[4] Kris
[7] Josquin
[4] John
[4] John
[3] Joe
[6] Gloria
[7] Electra
[4] Dora
[6] Daniel
[6] Damian
[8] Chandler
[5] Bilal
[7] Bennett
[8] Augustin
[5] Asaia
[9] Alexandro
julien@ubuntu:~/0x12. Singly linked lists$ 
</code></pre>

  </div>

[Answer](./2-add_node.c)

---


<h3 class="panel-title">
      3. Add node at the end
    </h3>

    
  <p>Write a function that adds a new node at the end of a <code>list_t</code> list.</p>

<ul>
<li>Prototype: <code>list_t *add_node_end(list_t **head, const char *str);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
<li><code>str</code> needs to be duplicated</li>
<li>You are allowed to use <code>strdup</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x12. Singly linked lists$ cat 3-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&amp;head, &quot;Anne&quot;);
    add_node_end(&amp;head, &quot;Colton&quot;);
    add_node_end(&amp;head, &quot;Corbin&quot;);
    add_node_end(&amp;head, &quot;Daniel&quot;);
    add_node_end(&amp;head, &quot;Danton&quot;);
    add_node_end(&amp;head, &quot;David&quot;);
    add_node_end(&amp;head, &quot;Gary&quot;);
    add_node_end(&amp;head, &quot;Holden&quot;);
    add_node_end(&amp;head, &quot;Ian&quot;);
    add_node_end(&amp;head, &quot;Ian&quot;);
    add_node_end(&amp;head, &quot;Jay&quot;);
    add_node_end(&amp;head, &quot;Jennie&quot;);
    add_node_end(&amp;head, &quot;Jimmy&quot;);
    add_node_end(&amp;head, &quot;Justin&quot;);
    add_node_end(&amp;head, &quot;Kalson&quot;);
    add_node_end(&amp;head, &quot;Kina&quot;);
    add_node_end(&amp;head, &quot;Matthew&quot;);
    add_node_end(&amp;head, &quot;Max&quot;);
    add_node_end(&amp;head, &quot;Michael&quot;);
    add_node_end(&amp;head, &quot;Ntuj&quot;);
    add_node_end(&amp;head, &quot;Philip&quot;);
    add_node_end(&amp;head, &quot;Richard&quot;);
    add_node_end(&amp;head, &quot;Samantha&quot;);
    add_node_end(&amp;head, &quot;Stuart&quot;);
    add_node_end(&amp;head, &quot;Swati&quot;);
    add_node_end(&amp;head, &quot;Timothy&quot;);
    add_node_end(&amp;head, &quot;Victor&quot;);
    add_node_end(&amp;head, &quot;Walton&quot;);
    print_list(head);
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o d
julien@ubuntu:~/0x12. Singly linked lists$ ./d 
[4] Anne
[6] Colton
[6] Corbin
[6] Daniel
[6] Danton
[5] David
[4] Gary
[6] Holden
[3] Ian
[3] Ian
[3] Jay
[6] Jennie
[5] Jimmy
[6] Justin
[6] Kalson
[4] Kina
[7] Matthew
[3] Max
[7] Michael
[4] Ntuj
[6] Philip
[7] Richard
[8] Samantha
[6] Stuart
[5] Swati
[7] Timothy
[6] Victor
[6] Walton
julien@ubuntu:~/0x12. Singly linked lists$ 
</code></pre>

  </div>

[Answer](./3-add_node_end.c)

---

<h3 class="panel-title">
      4. Free list
    </h3>

   
<p>Write a function that frees a <code>list_t</code> list.</p>

<ul>
<li>Prototype: <code>void free_list(list_t *head);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x12. Singly linked lists$ cat 4-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;lists.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&amp;head, &quot;Bob&quot;);
    add_node_end(&amp;head, &quot;&amp;&quot;);
    add_node_end(&amp;head, &quot;Kris&quot;);
    add_node_end(&amp;head, &quot;love&quot;);
    add_node_end(&amp;head, &quot;asm&quot;);
    print_list(head);
    free_list(head);
    head = NULL;
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e
julien@ubuntu:~/0x12. Singly linked lists$ valgrind ./e
==3598== Memcheck, a memory error detector
==3598== Copyright (C) 2002-2015, and GNU GPL&#39;d, by Julian Seward et al.
==3598== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3598== Command: ./e
==3598== 
[6] Bob
[1] &amp;
[3] Kris
[4] love
[3] asm
==3598== 
==3598== HEAP SUMMARY:
==3598==     in use at exit: 0 bytes in 0 blocks
==3598==   total heap usage: 11 allocs, 11 frees, 1,166 bytes allocated
==3598== 
==3598== All heap blocks were freed -- no leaks are possible
==3598== 
==3598== For counts of detected and suppressed errors, rerun with: -v
==3598== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x12. Singly linked lists$ 
</code></pre>

  </div>

[Answer](./4-free_list.c)

---

<h3> 5. The Hare and the Tortoise
    </h3>


  <!-- Task Body -->
    <p><img src="./de3291ccf5b255fff6ce37bfde7a13f481e7ed0c.jpg" alt="" style="" /></p>

<p>Write a function that prints <code>You&#39;re beat! and yet, you must allow,\nI bore my house upon my back!\n</code> before the <code>main</code> function is executed.</p>

<ul>
<li>You are allowed to use the <code>printf</code> function</li>
</ul>

<pre><code>julien@ubuntu:~/0x12. Singly linked lists$ cat 100-main.c
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf(&quot;(A tortoise, having pretty good sense of a hare&#39;s nature, challenges one to a race.)\n&quot;);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-first.c -o first
julien@ubuntu:~/$ ./first 
You&#39;re beat! and yet, you must allow,
I bore my house upon my back!
(A tortoise, having pretty good sense of a hare&#39;s nature, challenges one to a race.)
julien@ubuntu:~/$ 
</code></pre>

  </div>

[Answer](./100-first.c)

---

<h3 class="panel-title">
      6. Real programmers can write assembly code in any language
    </h3>

    
     
<p>Write a 64-bit program in assembly that prints <code>Hello, Holberton</code>, followed by a new line.</p>

<ul>
<li>You are only allowed to use the <code>printf</code> function</li>
<li>You are not allowed to use interrupts</li>
<li>Your program will be compiled using <code>nasm</code> and <code>gcc</code>:</li>
</ul>

<pre><code>julien@ubuntu:~/$ nasm -f elf64 101-hello_holberton.asm &amp;&amp; gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
julien@ubuntu:~/$ ./hello 
Hello, Holberton
julien@ubuntu:~/$ 
</code></pre>

  </div>

[Answer](./101-hello_holberton.asm)

---

<em>THE END</em>

</details>


