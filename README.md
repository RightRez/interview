RightRez Developer Interview Questions
=========
Clone this git repository to your computer, complete the questions and submit your responses in the form of a patch file to your interviewer via email.  Please follow these instructions for creating this patch file: https://ariejan.net/2009/10/26/how-to-create-and-apply-a-patch-with-git/

For all questions that require implementation, please implement in the language of your choice.  If necessary, please include explanatory documentation on how to run your implementation.

1) Create a function/method called BracesMatch. Given a String that may contain, among other characters, parentheses ()', square brackets '[ ]' and curly braces '{}', implement BracesMatch which will determine if the string is balanced and return true if the string has balanced parentheses and false if it does not.  The String is considered balanced if all of the parentheses, brackets, and braces are nested, opened, and closed properly.  The rules are as follows:

* There must be equal numbers of beginning and ending delimiters for each type.
* Any time a closing delimiter occurs, it must match the most recent unmatched open delimiter.
* An ending delimiter can never occur without a corresponding beginning delimiter of the same type.

***Examples:***

| Argument |	Result |
| ---------------|-------------|
| `x(y(z{test})abc)` |	True |
| `()` |	True |
| `([)]` |	False |
| `[[]](()){{{}}}` |	True |
| `abc(def(ghi)` |	False |


2) Review and fix any errors in `question2.c` in this repository.  Please submit a patched version of this file with your commit.

3) Implement a multi-threaded version of Factorial (http://en.wikipedia.org/wiki/Factorial).  This should be an implementation designed to speed up execution of this function on a multi-CPU/core machine for large input values.
