# Code for Class 1

To get a local copy of the repository, open a terminal and enter the
directory where you want to keep your files for CSO. Then execute the
following commands:

```bash
git clone https://github.com/nyu-cso-005-fa19/class01.git
cd class01
```

The directory `src` contains three C files for three C separate
applications:

```
src/hello.c
src/arithmetic.c
src/fun.c
```

To compile, e.g., `hello.c` execute the following command:

```bash
gcc -Wall -o hello src/hello.c
```

This will produce an executable file called `hello` in the current
directory, which you can run with

```bash
./hello
```

In order to use the CMake tool to automate the build process,
follow
(this tutorial)[https://tuannguyen68.gitbooks.io/learning-cmake-a-beginner-s-guide/content/chap1/chap1.html] to
install CMake and then execute the following command once:

```bash
cmake .
```

Then you can (re)compile all three applications by executing

```bash
make
```
