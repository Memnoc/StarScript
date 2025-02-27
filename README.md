# StarScript

Starting this little project to explore the world of programming languages from the point of view of their inner working.

I will start following the book Crafting Interpreters by Robert Nystrom, and then expand from there. The first iteration will be just like clox and then I am gonna try to add some more stuff as instrcuted in the challenges in each chapter.

When I feel more confident in the topic and in C, I can re-implement everything but this time giving my own spin.

The language of choice is C, which I really like in mostly unexpected ways.

## Build commands

Assuming you have CMake installed:
`cmake ..` -> generate the build system
`cmake --build` -> build the project
`./starscript` -> run the binary

# Licenses

This implementation of clox, like the code it was based on, is available under the MIT license, copyright Matteo Stara; see [LICENSE.txt](https://github.com/Memnoc/StarScript/blob/main/LICENSE).

The original code of clox upon which this is based is available under the MIT license, copyright Robert Nystrom; see [LICENSE.lox.txt](https://github.com/Memnoc/StarScript/blob/main/LICENSE.clox.txt).

# See Also

Blog post: https://tung.github.io/posts/my-workflow-for-following-crafting-interpreters/
Crafting Interpreters by Robert Nystrom: https://craftinginterpreters.com/
Big list of Lox implementations: https://github.com/munificent/craftinginterpreters/wiki/Lox-Implementations
Linenoise, used by the REPL for line editing: https://github.com/antirez/linenoise
utest.h, Neil Henning's single header unit testing framework for C: https://www.duskborn.com/utest_h/
ubench.h, Neil Henning's single header benchmark framework for C: https://github.com/sheredom/ubench.h
