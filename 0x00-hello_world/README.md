
 # Concepts

 
 For this project, students are expected to look at this concept:
- [C programming](https://alx-intranet.hbtn.io/concepts/26)       
 
[![WATCH](https://i.pinimg.com/originals/31/23/9a/31239a2f70e4f8e4e3263fafb00ace1c.png)](https://www.youtube.com/watch?v=co0b0xLEuRM)
    
<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/d801279f75de6a982a55d752dfd3632909f720f0.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20220310%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220310T051147Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=d7057ee5de463841419397e579391d9588702131147dbbe6990d11f25b90cb30" title="Everything you need to know to start with C.pdf" target="_blank">Everything you need to know to start with C.pdf</a> (<em>You do not have to learn everything in there yet, but make sure you read it entirely first</em>)</li>
<li><a href="https://en.wikipedia.org/wiki/Dennis_Ritchie" title="Dennis Ritchie" target="_blank">Dennis Ritchie</a> </li>
<li><a href="https://www.youtube.com/watch?v=de2Hsvxaf8M" title="&quot;C&quot; Programming Language: Brian Kernighan" target="_blank">&ldquo;C&rdquo; Programming Language: Brian Kernighan</a> </li>
<li><a href="https://www.youtube.com/watch?v=smGalmxPVYc" title="Why C Programming Is Awesome" target="_blank">Why C Programming Is Awesome</a> </li>
<li><a href="https://www.youtube.com/watch?v=rk2fK2IIiiQ" title="Learning to program in C part 1" target="_blank">Learning to program in C part 1</a> </li>
<li><a href="https://www.youtube.com/watch?v=FwpP_MsZWnU" title="Learning to program in C part 2" target="_blank">Learning to program in C part 2</a> </li>
<li><a href="https://www.youtube.com/watch?v=VDslRumKvRA" title="Understanding C program Compilation Process" target="_blank">Understanding C program Compilation Process</a> </li>
<li><a href="https://github.com/holbertonschool/Betty/wiki" title="Betty Coding Style" target="_blank">Betty Coding Style</a> </li>
<li><a href="https://twitter.com/unix_byte/status/1024147947393495040?s=21" title="Hash-bang under the hood" target="_blank">Hash-bang under the hood</a> (<em>Look at only after you finish consuming the other resources</em>)</li>
<li><a href="http://harmful.cat-v.org/software/c++/linus" title="Linus Torvalds on C vs. C++" target="_blank">Linus Torvalds on C vs. C++</a> (<em>Look at only after you finish consuming the other resources</em>)</li>
</ul>

<p><strong>man or help</strong>:</p>

<ul>
<li><code>gcc</code></li>
<li><code>printf (3)</code></li>
<li><code>puts</code></li>
<li><code>putchar</code></li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>Why C programming is awesome </li>
<li>Who invented C</li>
<li>Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds</li>
<li>What happens when you type <code>gcc main.c</code></li>
<li>What is an entry point</li>
<li>What is <code>main</code></li>
<li>How to print text using <code>printf</code>, <code>puts</code> and <code>putchar</code></li>
<li>How to get the size of a specific type using the unary operator <code>sizeof</code></li>
<li>How to compile using <code>gcc</code></li>
<li>What is the default program name when compiling with <code>gcc</code></li>
<li>What is the official C coding style and how to check your code with <code>betty-style</code></li>
<li>How to find the right header to include in your source code when using a standard library function</li>
<li>How does the <code>main</code> function influence the return value of the program</li>
</ul>

<h2>Requirements</h2>

<h3>C</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file at the root of the repo, containing a description of the repository</li>
<li>A <code>README.md</code> file, at the root of the folder of <em>this</em> project, containing a description of the project</li>
<li>There should be no errors and no warnings during compilation</li>
<li>You are not allowed to use <code>system</code></li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
</ul>

<h3>Shell Scripts</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your scripts will be tested on Ubuntu 20.04 LTS</li>
<li>All your scripts should be exactly two lines long (<code>$ wc -l file</code> should print 2)</li>
<li>All your files should end with a new line</li>
<li>The first line of all your files should be exactly <code>#!/bin/bash</code></li>
</ul>

<h2>More Info</h2>

<h3>Betty linter</h3>

<p>To run the Betty linter just with command <code>betty &lt;filename&gt;</code>:</p>

<ul>
<li>Go to the <a href="https://github.com/afinesami?tab=repositories" title="Betty" target="_blank">Betty</a> repository</li>
<li>Clone the <a href="https://github.com/holbertonschool/Betty" title="repo" target="_blank">repo</a> to your local machine</li>
<li><code>cd</code> into the Betty directory</li>
<li>Install the linter with <code>sudo ./install.sh</code></li>
<li><code>emacs</code> or <code>vi</code> a new file called <code>betty</code>, and copy the script below:</li>
</ul>

<pre><code>#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH=&quot;/usr/local/bin&quot;
BETTY_STYLE=&quot;betty-style&quot;
BETTY_DOC=&quot;betty-doc&quot;

if [ &quot;$#&quot; = &quot;0&quot; ]; then
    echo &quot;No arguments passed.&quot;
    exit 1
fi

for argument in &quot;$@&quot; ; do
    echo -e &quot;\n========== $argument ==========&quot;
    ${BIN_PATH}/${BETTY_STYLE} &quot;$argument&quot;
    ${BIN_PATH}/${BETTY_DOC} &quot;$argument&quot;
done
</code></pre>

<ul>
<li>Once saved, exit file and change permissions to apply to all users with <code>chmod a+x betty</code></li>
<li>Move the <code>betty</code> file into <code>/bin/</code> directory or somewhere else in your <code>$PATH</code> with <code>sudo mv betty /bin/</code></li>
</ul>

<p>You can now type <code>betty &lt;filename&gt;</code> to run the Betty linter!</p>

</div>

---

#  Tasks


# 0. Preprocessor

Write a script that runs a C file through the preprocessor and save the result into another file.

- The C file name will be saved in the variable $CFILE
- The output should be saved in the file c


**Repo:**

- GitHub repository: alx-low_level_programming
- Directory: 0x00-hello_world
- File: 0-preprocessor
   
# 1. Compiler

Write a script that compiles a C file but does not link.

- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .o instead of .c.
- Example: if the C file is main.c, the output file should be main.o


**Repo:**

- GitHub repository: alx-low_level_programming
- Directory: 0x00-hello_world
- File: 1-compiler
   
# 2. Assembler

Write a script that generates the assembly code of a C code and save it in an output file.

- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .s instead of .c.
- Example: if the C file is main.c, the output file should be main.s

**Repo:**

- GitHub repository: alx-low_level_programming
- Directory: 0x00-hello_world
- File: 2-assembler
   
# 3. Name

Write a script that compiles a C file and creates an executable named cisfun.

- The C file name will be saved in the variable $CFILE


**Repo:**

- GitHub repository: alx-low_level_programming
- Directory: 0x00-hello_world
- File: 3-name
   
# 4. Hello, puts

Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

- Use the function puts
- You are not allowed to use printf
- Your program should end with the value 0

**Repo:**

- GitHub repository: alx-low_level_programming
- Directory: 0x00-hello_world
- File: 4-puts.c
   
# 5. Hello, printf

Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

- Use the function printf
- You are not allowed to use the function puts
- Your program should return 0
- Your program should compile without warning when using the -Wall gcc option

**Repo:**

- GitHub repository: alx-low_level_programming
- Directory: 0x00-hello_world
- File: 5-printf.c
   
# 6. Size is not grandeur, and territory does not make a nation

Write a C program that prints the size of various types on the computer it is compiled and run on.

- You should produce the exact same output as in the example
- Warnings are allowed
- Your program should return 0
- You might have to install the package libc6-dev-i386 on your Linux (Vagrant) to test the -m32 gcc option

**Repo:**

- GitHub repository: alx-low_level_programming
- Directory: 0x00-hello_world
- File: 6-size.c
   
# 7. Intel

Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

- The C file name will be saved in the variable $CFILE.
- The output file should be named the same as the C file, but with the extension .s instead of .c.
- Example: if the C file is main.c, the output file should be main.s

**Repo:**

- GitHub repository: alx-low_level_programming
- Directory: 0x00-hello_world
- File: 100-intel
  
# 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity

Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

- You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
- Your program should return 1
- Your program should compile without any warnings when using the -Wall gcc option

**Repo:**

- GitHub repository: alx-low_level_programming
- Directory: 0x00-hello_world
- File: 101-quote.c
   
