why sizeof(class) can be larger than the sum of its data members.
1. Alignment — simple meaning
Alignment means where a variable is allowed/preferred to start in memory.
Different data types usually have different alignment requirements.
For example, on a typical 64-bit system:
char   → 1 byte
int    → 4 bytes
double → 8 bytes
An int generally wants to start at an address divisible by 4, and a double at an address divisible by 8.
Think:
Alignment = correct starting position in memory.


2. Padding — what is it?
Padding is the unused space the compiler inserts between members (or at the end) to satisfy alignment requirements.
Example:
class A {
    char c;
    int x;
};
You might think:
Example:
class A {
    char c;
    int x;
};
You might think:
char = 1 byte
int  = 4 bytes

Total = 5 bytes
But typically:
Memory:

0        c
1        padding
2        padding
3        padding
4        x
5        x
6        x
7        x


3. Another important example
class A {
    char c;
    double d;
};
Typically:
char  = 1
padding = 7
double = 8

Total = 16
Memory:
Byte:   0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
        └─c─┘└──── padding ────┘└──── double ────┘
So:
sizeof(A) == 16
on a typical system.