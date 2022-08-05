# 0x0F. C - Variadic functions :speech_balloon:

## Resources

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="https://en.wikipedia.org/wiki/Stdarg.h" title="stdarg.h" target="_blank">stdarg.h</a> </li>
<li><a href="https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html" title="Variadic Functions" target="_blank">Variadic Functions</a> </li>
<li><a href="https://www.youtube.com/watch?v=1W4oyuOdXv8" title="Const Keyword" target="_blank">Const Keyword</a> </li>
</ul>

<!-- - [C - Variable Arguments](/rltoken/qaPJ-LRiEzLvPH6-F3SqJQ) 
- [Functions with Variable Argument Lists in C using va_list](/rltoken/wEciKT_uR-d9tQHwTWfbHg) -->

<p><strong>man or help</strong>:</p>

<ul>
<li><code>stdarg</code></li>
</ul>

## Learning Objectives

<ul>
<li>What are variadic functions</li>
<li>How to use <code>va_start</code>, <code>va_arg</code> and <code>va_end</code> macros</li>
<li>Why and how to use the <code>const</code> type qualifier</li>
</ul>

---

<details>

<summary>View/Hide Tasks</summary>

## TASKS

### 0. Beauty is variable, ugliness is constant
    
<p>Write a function that returns the sum of all its parameters.</p>

<ul>
<li>Prototype: <code>int sum_them_all(const unsigned int n, ...);</code></li>
<li>If <code>n == 0</code>, return <code>0</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x0f. variadic functions$ cat 0-main.c
#include &lt;stdio.h&gt;
#include &quot;variadic_functions.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf(&quot;%d\n&quot;, sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf(&quot;%d\n&quot;, sum);    
    return (0);
}
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
julien@ubuntu:~/0x0f. variadic functions$ ./a 
1122
500
julien@ubuntu:~/0x0f. variadic functions$ 
</code></pre>

  </div>

[Answer](./0-sum_them_all.c)

---

  
### 1. To be is to be the value of a variable
  
<!-- Task Body -->
<p>Write a function that prints numbers, followed by a new line.</p>

<ul>
<li>Prototype: <code>void print_numbers(const char *separator, const unsigned int n, ...);</code></li>
<li>where <code>separator</code> is the string to be printed between numbers</li>
<li>and <code>n</code> is the number of integers passed to the function</li>
<li>You are allowed to use <code>printf</code></li>
<li>If <code>separator</code> is <code>NULL</code>, don&rsquo;t print it</li>
<li>Print a new line at the end of your function</li>
</ul>

<pre><code>julien@ubuntu:~/0x0f. variadic functions$ cat 1-main.c
#include &quot;variadic_functions.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers(&quot;, &quot;, 4, 0, 98, -1024, 402);
    return (0);
}
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b
julien@ubuntu:~/0x0f. variadic functions$ ./b
0, 98, -1024, 402
julien@ubuntu:~/0x0f. variadic functions$ 
</code></pre>

  </div>

[Answer](./1-print_numbers.c)

---

### 2. One woman&#39;s constant is another woman&#39;s variable
    
<!-- Task Body -->
<p>Write a function that prints strings, followed by a new line.</p>

<ul>
<li>Prototype: <code>void print_strings(const char *separator, const unsigned int n, ...);</code></li>
<li>where <code>separator</code> is the string to be printed between the strings</li>
<li>and <code>n</code> is the number of strings passed to the function</li>
<li>You are allowed to use <code>printf</code></li>
<li>If separator is NULL, don&rsquo;t print it</li>
<li>If one of the string is NULL, print <code>(nil)</code> instead</li>
<li>Print a new line at the end of your function</li>
</ul>

<pre><code>julien@ubuntu:~/0x0f. Variadic functions$ cat 2-main.c
#include &quot;variadic_functions.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(&quot;, &quot;, 2, &quot;Jay&quot;, &quot;Django&quot;);
    return (0);
}
julien@ubuntu:~/0x0f. Variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_strings.c -o c
julien@ubuntu:~/0x0f. Variadic functions$ ./c 
Jay, Django
julien@ubuntu:~/0x0f. Variadic functions$ 
</code></pre>

  </div>

[Answer](./2-print_strings.c)

---

### 3. To be is a to be the value of a variable
    

<!-- Task Body -->
<p>Write a function that prints anything.</p>

<ul>
<li>Prototype: <code>void print_all(const char * const format, ...);</code></li>
<li>where <code>format</code> is a list of types of arguments passed to the function

<ul>
<li><code>c</code>: <code>char</code></li>
<li><code>i</code>: <code>integer</code></li>
<li><code>f</code>: <code>float</code></li>
<li><code>s</code>: <code>char *</code> (if the string is NULL, print <code>(nil)</code> instead</li>
<li>any other char should be ignored</li>
<li>see example</li>
</ul></li>
<li>You are not allowed to use <code>for</code>, <code>goto</code>, ternary operator, <code>else</code>, <code>do ... while</code></li>
<li>You can use a maximum of

<ul>
<li>2 <code>while</code> loops</li>
<li>2 <code>if</code></li>
</ul></li>
<li>You can declare a maximum of <code>9</code> variables</li>
<li>You are allowed to use <code>printf</code></li>
<li>Print a new line at the end of your function</li>
</ul>

<pre><code>julien@ubuntu:~/0x0f. Variadic functions$ cat 3-main.c
#include &quot;variadic_functions.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all(&quot;ceis&quot;, &#39;B&#39;, 3, &quot;stSchool&quot;);
    return (0);
}
julien@ubuntu:~/0x0f. Variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-print_all.c -o d
julien@ubuntu:~/0x0f. Variadic functions$ ./d 
B, 3, stSchool
julien@ubuntu:~/0x0f. Variadic functions$ 
</code></pre>

  </div>

[Answer](./3-print_all.c)

---

<em>THE END</em>

</details>


