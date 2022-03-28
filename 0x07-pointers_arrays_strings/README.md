<div class="well clean" id="project-description">
  <p><img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/218/58fe6b229144b7fe5ebe88afe9ff5cabe2dd0863e1e79b2d02b4103c30b465dd.jpg" alt="" style="" /></p>

<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm" title="C - Pointer to Pointer" target="_blank">C - Pointer to Pointer</a> </li>
<li><a href="https://beginnersbook.com/2014/01/c-pointer-to-pointer/" title="C – Pointer to Pointer with example" target="_blank">C – Pointer to Pointer with example</a> </li>
<li><a href="https://www.tutorialspoint.com/cprogramming/c_multi_dimensional_arrays.htm" title="Multi-dimensional Arrays in C" target="_blank">Multi-dimensional Arrays in C</a> </li>
<li><a href="https://beginnersbook.com/2014/01/2d-arrays-in-c-example/" title="Two dimensional (2D) arrays in C programming with example" target="_blank">Two dimensional (2D) arrays in C programming with example</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="https://fs.blog/feynman-learning-technique/" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are pointers to pointers and how to use them</li>
<li>What are multidimensional arrays and how to use them</li>
<li>What are the most common C standard library functions to manipulate strings</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are not allowed to use the standard library. Any use of functions like <code>printf</code>, <code>puts</code>, etc&hellip; is forbidden</li>
<li>You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don&rsquo;t have to push <code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
</ul>

<h2>More Info</h2>

<p>You do not need to learn about pointers to functions, arrays of structures, <code>malloc</code> and <code>free</code> - yet.</p>

</div>


---

# TASKS

# 0. memset
<p>Write a function that fills memory with a constant byte.</p>

<ul>
<li>Prototype: <code>char *_memset(char *s, char b, unsigned int n);</code></li>
<li>The <code>_memset()</code> function fills the first <code>n</code> bytes of the memory area pointed to by <code>s</code> with the constant byte <code>b</code></li>
<li>Returns a pointer to the memory area <code>s</code></li>
</ul>

<p>FYI: The standard library provides a similar function: <code>memset</code>. Run <code>man memset</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x07$ cat 0-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i &lt; size)
        {
                if (i % 10)
                {
                        printf(&quot; &quot;);
                }
                if (!(i % 10) &amp;&amp; i)
                {
                        printf(&quot;\n&quot;);
                }
                printf(&quot;0x%02x&quot;, buffer[i]);
                i++;
        }
        printf(&quot;\n&quot;);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    printf(&quot;-------------------------------------------------\n&quot;);
    simple_print_buffer(buffer, 98);    
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-memset.c -o 0-memset
julien@ubuntu:~/0x07$ ./0-memset 
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
-------------------------------------------------
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x00 0x00 0x00
julien@ubuntu:~/0x07$ 
</code></pre>

 
<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x07-pointers_arrays_strings</code></li>
            <li>File: <code>0-memset.c</code></li>
        </ul>

# 1. memcpy
   
  <p>Write a function that copies memory area.</p>

<ul>
<li>Prototype: <code>char *_memcpy(char *dest, char *src, unsigned int n);</code></li>
<li>The <code>_memcpy()</code>  function  copies <code>n</code> bytes from memory area <code>src</code> to memory area <code>dest</code></li>
<li>Returns a pointer to <code>dest</code></li>
</ul>

<p>FYI: The standard library provides a similar function: <code>memcpy</code>. Run <code>man memcpy</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x07$ cat 1-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i &lt; size)
    {
        if (i % 10)
        {
            printf(&quot; &quot;);
        }
        if (!(i % 10) &amp;&amp; i)
        {
            printf(&quot;\n&quot;);
        }
        printf(&quot;0x%02x&quot;, buffer[i]);
        i++;
    }
    printf(&quot;\n&quot;);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0};
    char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    simple_print_buffer(buffer, 98);
    _memcpy(buffer + 50, buffer2, 10);
    printf(&quot;-------------------------------------------------\n&quot;);
    simple_print_buffer(buffer, 98);    
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-memcpy.c -o 1-memcpy
julien@ubuntu:~/0x07$ ./1-memcpy 
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
-------------------------------------------------
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x01 0x02 0x03 0x04 0x05 0x07 0x07 0x08 0x09 0x0a
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
julien@ubuntu:~/0x07$ 
</code></pre>

  </div>

    <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x07-pointers_arrays_strings</code></li>
            <li>File: <code>1-memcpy.c</code></li>
        </ul>

# 2. strchr
   
<p>Write a function that locates a character in a string.</p>

<ul>
<li>Prototype: <code>char *_strchr(char *s, char c);</code></li>
<li>Returns a pointer to the first occurrence of the character <code>c</code> in the string <code>s</code>, or <code>NULL</code> if the character is not  found</li>
</ul>

<p>FYI: The standard library provides a similar function: <code>strchr</code>. Run <code>man strchr</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x07$ cat 2-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = &quot;hello&quot;;
    char *f;

    f = _strchr(s, &#39;l&#39;);

    if (f != NULL)
    {
        printf(&quot;%s\n&quot;, f);
    }
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strchr.c -o 2-strchr
julien@ubuntu:~/0x07$ ./2-strchr 
llo
julien@ubuntu:~/0x07$ 
</code></pre>

  </div>

  
     <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x07-pointers_arrays_strings</code></li>
            <li>File: <code>2-strchr.c</code></li>
        </ul>
      </div>


# 3. strspn
    
<p>Write a function that gets the length of a prefix substring.</p>

<ul>
<li>Prototype: <code>unsigned int _strspn(char *s, char *accept);</code></li>
<li>Returns the number of bytes in the initial segment of <code>s</code> which consist only of bytes from <code>accept</code></li>
</ul>

<p>FYI: The standard library provides a similar function: <code>strspn</code>. Run <code>man strspn</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x07$ cat 3-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = &quot;hello, world&quot;;
    char *f = &quot;oleh&quot;;
    unsigned int n;

    n = _strspn(s, f);
    printf(&quot;%u\n&quot;, n);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strspn.c -o 3-strspn
julien@ubuntu:~/0x07$ ./3-strspn 
5
julien@ubuntu:~/0x07$ 
</code></pre>

  </div>

  <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x07-pointers_arrays_strings</code></li>
            <li>File: <code>3-strspn.c</code></li>
        </ul>

# 4. strpbrk
<p>Write a function that searches a string for any of a set of bytes.</p>

<ul>
<li>Prototype: <code>char *_strpbrk(char *s, char *accept);</code></li>
<li>The <code>_strpbrk()</code>  function locates the first occurrence in the string <code>s</code> of any of the bytes in the string <code>accept</code></li>
<li>Returns a pointer to the byte in <code>s</code> that matches one of the bytes in <code>accept</code>,  or <code>NULL</code> if no such byte is found</li>
</ul>

<p>FYI: The standard library provides a similar function: <code>strpbrk</code>. Run <code>man strpbrk</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x07$ cat 4-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = &quot;hello, world&quot;;
    char *f = &quot;world&quot;;
    char *t;

    t = _strpbrk(s, f);
    printf(&quot;%s\n&quot;, t);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-strpbrk.c -o 4-strpbrk
julien@ubuntu:~/0x07$ ./4-strpbrk 
llo, world
julien@ubuntu:~/0x07$ 
</code></pre>

  </div>

  
 <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x07-pointers_arrays_strings</code></li>
            <li>File: <code>4-strpbrk.c</code></li>
        </ul>

# 5. strstr
 
<p>Write a function that locates a substring.</p>

<ul>
<li>Prototype: <code>char *_strstr(char *haystack, char *needle);</code></li>
<li>The <code>_strstr()</code> function finds the first occurrence of the substring <code>needle</code> in the string <code>haystack</code>.  The terminating null bytes (<code>\0</code>) are not compared</li>
<li>Returns a pointer to the beginning of the located substring, or <code>NULL</code> if the substring is not found.</li>
</ul>

<p>FYI: The standard library provides a similar function: <code>strstr</code>. Run <code>man strstr</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x07$ cat 5-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = &quot;hello, world&quot;;
    char *f = &quot;world&quot;;
    char *t;

    t = _strstr(s, f);
    printf(&quot;%s\n&quot;, t);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-strstr.c -o 5-strstr
julien@ubuntu:~/0x07$ ./5-strstr 
world
julien@ubuntu:~/0x07$ 

</code></pre>

  </div>

 <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x07-pointers_arrays_strings</code></li>
            <li>File: <code>5-strstr.c</code></li>
        </ul>
      </div>

# 6. Chess is mental torture
   
<p>Write a function that prints the chessboard.</p>

<ul>
<li>Prototype: <code>void print_chessboard(char (*a)[8]);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x07$ cat 7-main.c 
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char board[8][8] = {
        {&#39;r&#39;, &#39;k&#39;, &#39;b&#39;, &#39;q&#39;, &#39;k&#39;, &#39;b&#39;, &#39;k&#39;, &#39;r&#39;},
        {&#39;p&#39;, &#39;p&#39;, &#39;p&#39;, &#39;p&#39;, &#39;p&#39;, &#39;p&#39;, &#39;p&#39;, &#39;p&#39;},
        {&#39; &#39;, &#39; &#39;, &#39; &#39;, &#39; &#39;, &#39; &#39;, &#39; &#39;, &#39; &#39;, &#39; &#39;},
        {&#39; &#39;, &#39; &#39;, &#39; &#39;, &#39; &#39;, &#39; &#39;, &#39; &#39;, &#39; &#39;, &#39; &#39;},
        {&#39; &#39;, &#39; &#39;, &#39; &#39;, &#39; &#39;, &#39; &#39;, &#39; &#39;, &#39; &#39;, &#39; &#39;},
        {&#39; &#39;, &#39; &#39;, &#39; &#39;, &#39; &#39;, &#39; &#39;, &#39; &#39;, &#39; &#39;, &#39; &#39;},
        {&#39;P&#39;, &#39;P&#39;, &#39;P&#39;, &#39;P&#39;, &#39;P&#39;, &#39;P&#39;, &#39;P&#39;, &#39;P&#39;},
        {&#39;R&#39;, &#39;K&#39;, &#39;B&#39;, &#39;Q&#39;, &#39;K&#39;, &#39;B&#39;, &#39;K&#39;, &#39;R&#39;},
    };
    print_chessboard(board);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_chessboard.c -o 7-print_chessboard
julien@ubuntu:~/0x07$ ./7-print_chessboard 
rkbqkbkr
pppppppp




PPPPPPPP
RKBQKBKR
julien@ubuntu:~/0x07$ 
</code></pre>

  </div>

<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x07-pointers_arrays_strings</code></li>
            <li>File: <code>7-print_chessboard.c</code></li>
        </ul>
      </div>


# 7. The line of life is a ragged diagonal between duty and desire
 
<p>Write a function that prints the sum of the two diagonals of a square matrix of integers.</p>

<ul>
<li>Prototype: <code>void print_diagsums(int *a, int size);</code></li>
<li>Format: see example</li>
<li>You are allowed to use the standard library</li>
</ul>

<p>Note that in the following example we are casting an <code>int[][]</code> into an <code>int*</code>. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.</p>

<pre><code>julien@ubuntu:~/0x07$ cat 8-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_diagsums.c -o 8-print_diagsums
julien@ubuntu:~/0x07$ ./8-print_diagsums 
113, 1016
1214556093, 1137318
julien@ubuntu:~/0x07$ 
</code></pre>

  </div>

 <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x07-pointers_arrays_strings</code></li>
            <li>File: <code>8-print_diagsums.c</code></li>
        </ul>
      </div>

# 8. Double pointer, double fun
  
  <p>Write a function that sets the value of a pointer to a char.</p>

<ul>
<li>Prototype: <code>void set_string(char **s, char *to);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x07$ cat 100-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s0 = &quot;Bob Dylan&quot;;
    char *s1 = &quot;Robert Allen&quot;;

    printf(&quot;%s, %s\n&quot;, s0, s1);
    set_string(&amp;s1, s0);
    printf(&quot;%s, %s\n&quot;, s0, s1);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-set_string.c -o 100-set_string
julien@ubuntu:~/0x07$ ./100-set_string 
Bob Dylan, Robert Allen
Bob Dylan, Bob Dylan
julien@ubuntu:~/0x07$ 
</code></pre>

  </div>
<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x07-pointers_arrays_strings</code></li>
            <li>File: <code>100-set_string.c</code></li>
        </ul>

# 9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure
   
<p>Create a file that contains the password for the <a href="https://github.com/holbertonschool/0x06.c" title="crackme2" target="_blank">crackme2</a>  executable.</p>

<ul>
<li>Your file should contain the exact password, no new line, no extra space</li>
<li><code>ltrace</code>, <code>ldd</code>, <code>gdb</code> and <code>objdump</code> can help</li>
<li>You may need to install the <code>openssl</code> library to run the <code>crakme2</code> program: <code>sudo apt install libssl-dev</code> </li>
<li>Edit the source list <code>sudo nano /etc/apt/sources.list</code> to add the following line: <code>deb http://security.ubuntu.com/ubuntu xenial-security main</code>
Then <code>sudo apt update</code> and <code>sudo apt install libssl1.0.0</code></li>
</ul>

  </div>

 
<p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x07-pointers_arrays_strings</code></li>
            <li>File: <code>101-crackme_password</code></li>
        </ul>
      </div>


