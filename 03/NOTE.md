## 1.1
在程序编译后，生成了exe可执行程序，未执行该程序前，该程序是一个静态的文件，当执行该程序时，该程序被加载到内存中，此时该程序是一个进程，进程是一个动态的过程，进程是程序的一次执行过程，是系统运行程序的基本单位，因此进程是动态的，而程序是静态的。

其中又可以分为两部分
* 代码区

    代码区是存储CPU执行指令的区域，代码区是共享的，即同一个程序的多个进程可以共享代码区。 

    代码区是只读的，不允许写入，因为程序运行后，代码区的内容不允许被修改，否则会引发程序的逻辑错误。
* 全局区
    
    全局区是存储全局变量和静态变量的区域，全局区是共享的，即同一个程序的多个进程可以共享全局区。

    全局区还包括了常量区，常量区是存储常量的区域，常量区是共享的，即同一个程序的多个进程可以共享常量区。

    该区域的数据在程序结束后由操作系统释放。

## 栈区
C++中的栈区（stack）是由操作系统来管理的，而不是由编译器管理的。

栈区是程序运行时分配内存的一种方式，它由操作系统提供支持，可以在程序执行期间动态地分配和释放内存。当一个函数被调用时，操作系统会在栈区分配一块内存，用于存储该函数的**局部变量**、**函数参数**、**返回地址**等信息。当函数执行完毕时，操作系统会释放该内存空间，以供其他函数使用。

在C++中，编译器负责生成代码，包括将变量和参数分配到栈区中。但是，栈区的实际管理是由操作系统完成的。操作系统会跟踪栈顶指针的位置，并在需要时向下分配内存空间，以确保栈区中的数据不会相互干扰。

需要注意的是，栈区的大小是有限的，当栈区空间不足时，会发生栈溢出的错误，导致程序异常终止。因此，在编写程序时，需要注意控制函数递归深度、局部变量的生命周期等因素，以避免栈溢出的问题。

## 堆区
堆区（heap）是指程序在运行期间，由操作系统动态分配的内存空间，它的大小是由程序员控制的，而不是由编译器或操作系统来管理的。堆区也被称为动态内存分配区。

堆区的内存空间由操作系统在进程的虚拟地址空间中分配，它的生命周期不受函数调用的影响，可以在程序的任何地方访问。堆区的内存空间是通过C++中的`new`和`delete`操作符来进行分配和释放的。

在堆区中分配内存空间时，操作系统会根据请求的大小来分配一块连续的内存空间，并返回该内存块的起始地址。程序员需要负责管理堆区中分配的内存空间，包括及时释放不再使用的内存空间，以避免内存泄漏的问题。

需要注意的是，堆区的内存空间是共享的，多个程序或线程都可以访问同一块堆区内存空间，因此需要注意堆区的并发访问问题。另外，堆区的分配和释放操作可能会比栈区的操作耗费更多的时间，因此在编写程序时需要谨慎使用堆区内存空间。

## 引用
引用的本质是指针常量，指针常量是指针指向不可以改变

引用就是指向变量的指针常量，引用的变量地址和被引用的变量的地址是一样的。

引用的变量值和被引用的变量值是一样的。

不加`&`符号就是变量的值，加了&符号就是变量的地址。

引用不能直接进行赋值，被引用的对象必须是一个变量或合法的内存地址，不能是常量。但如果加上const关键字，就可以引用常量了。
```c++
const int &a = 10;
```
加上const关键字就可以引用常量的原理是，编译器会为常量分配内存空间，而且会为常量取一个名字（只是你看不到），这个名字就是常量的地址，所以引用常量就是引用常量的地址。

在开发中，如果只是想打印一个变量的值，而不想修改这个变量的值，那么建议使用引用，因为引用不会开辟新的内存空间，而指针会开辟新的内存空间。同时，使用const关键字可以保证被引用的变量不会被修改。