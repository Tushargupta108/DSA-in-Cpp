# OOP Interview Questions & Answers — Placement Preparation

> **Target:** Fresher / campus placement interviews  
> **Language focus:** C++  
> **Goal:** Master the most commonly tested OOP concepts, definitions, comparisons, code concepts, and follow-up questions.

---

## Table of Contents

1. [OOP Fundamentals](#1-oop-fundamentals)
2. [Encapsulation](#2-encapsulation)
3. [Inheritance](#3-inheritance)
4. [Polymorphism](#4-polymorphism)
5. [Abstraction](#5-abstraction)
6. [Classes, Objects & Constructors](#6-classes-objects--constructors)
7. [C++-Specific OOP](#7-c-specific-oop)
8. [Object Relationships](#8-object-relationships)
9. [Scenario-Based Questions](#9-scenario-based-questions)
10. [Code / Output Concepts](#10-code--output-concepts)
11. [Top 35 Must-Know Questions](#11-top-35-must-know-questions)
12. [Last-Minute Revision Sheet](#12-last-minute-revision-sheet)

---

# 1. OOP Fundamentals

## Q1. What is OOP?

**Answer:**

OOP (Object-Oriented Programming) is a programming paradigm in which programs are designed using **objects and classes**.

Objects contain:
- Data/state
- Methods/behavior

OOP helps organize large programs and provides concepts such as:

- Encapsulation
- Abstraction
- Inheritance
- Polymorphism

---

## Q2. Why do we use OOP?

**Answer:**

OOP is used to make software:

- Modular
- Reusable
- Maintainable
- Scalable
- Easier to understand
- Easier to modify

For example, instead of putting all bank-account logic in one large program, we can create a `BankAccount` class containing its data and operations.

---

## Q3. What are the four pillars of OOP?

**Answer:**

The four major pillars are:

1. **Encapsulation** — bundling data and methods and controlling access.
2. **Abstraction** — hiding unnecessary implementation details.
3. **Inheritance** — deriving a new class from an existing class.
4. **Polymorphism** — allowing the same interface/name to behave differently.

### Easy memory trick

```text
E → Encapsulation → Protect data
A → Abstraction   → Hide complexity
I → Inheritance   → Reuse/extend
P → Polymorphism  → Many forms
```

---

## Q4. What is a class?

**Answer:**

A class is a **user-defined blueprint/type** that defines data members and member functions.

```cpp
class Student {
private:
    int age;

public:
    void study() {
        cout << "Studying";
    }
};
```

The class itself describes what a `Student` contains and can do.

---

## Q5. What is an object?

**Answer:**

An object is an **instance of a class**.

```cpp
Student s1;
Student s2;
```

Here, `s1` and `s2` are objects of the `Student` class.

Each object can have its own state.

---

## Q6. Difference between class and object?

| Class | Object |
|---|---|
| Blueprint/type | Instance of a class |
| Defines structure/behavior | Represents an actual entity |
| Does not represent one specific instance | Has its own state |
| Example: `Student` | Example: `s1` |

---

## Q7. What are the advantages of OOP?

**Answer:**

Major advantages include:

- Code reusability
- Data protection
- Modularity
- Maintainability
- Flexibility
- Easier debugging
- Better organization of large applications

---

## Q8. What are the disadvantages of OOP?

**Answer:**

Possible disadvantages:

- More design overhead for very small programs
- Can require more memory because of objects and supporting structures
- Poorly designed inheritance hierarchies can become complex
- More abstraction can sometimes make simple code harder to understand

---

## Q9. Procedural programming vs OOP?

| Procedural | OOP |
|---|---|
| Organized mainly around functions/procedures | Organized around objects/classes |
| Data may be more openly shared | Data can be encapsulated |
| Reuse mainly through functions | Reuse through classes, composition, inheritance, etc. |
| Suitable for many algorithmic tasks | Useful for modeling complex systems |

---

# 2. Encapsulation

## Q10. What is encapsulation?

**Answer:**

Encapsulation is the process of **bundling data and the methods that operate on that data into a class while controlling access to the internal data**.

```cpp
class BankAccount {
private:
    double balance;

public:
    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
    }

    double getBalance() {
        return balance;
    }
};
```

Here `balance` and the methods operating on it are inside the same class.

---

## Q11. What is data hiding?

**Answer:**

Data hiding means **preventing direct external access to internal data**.

```cpp
class Student {
private:
    int marks;
};
```

Outside code cannot normally do:

```cpp
s.marks = 90; // Error
```

---

## Q12. Encapsulation vs data hiding?

**Answer:**

They are related but not identical.

- **Encapsulation:** bundles data and methods and controls access.
- **Data hiding:** restricts direct access to internal implementation/data.

Data hiding is an important aspect/result of encapsulation.

---

## Q13. Why are data members generally declared private?

**Answer:**

To prevent uncontrolled modification and allow the class to control how its state changes.

For example:

```cpp
void setAge(int age) {
    if (age >= 0)
        this->age = age;
}
```

This allows validation before changing the data.

---

## Q14. What are getters and setters?

**Answer:**

A **getter** reads/accesses a private value.

```cpp
int getAge() {
    return age;
}
```

A **setter** modifies a private value.

```cpp
void setAge(int a) {
    if (a >= 0)
        age = a;
}
```

Easy rule:

```text
GET → read
SET → modify
```

---

## Q15. Why use getters and setters?

**Answer:**

They provide controlled access.

Benefits include:

- Validation
- Data protection
- Read-only/write-only interfaces
- Ability to change internal implementation later
- Better maintainability

---

## Q16. Can we have a getter without a setter?

**Answer:**

Yes.

```cpp
class Employee {
private:
    int id;

public:
    int getId() {
        return id;
    }
};
```

This can provide read-only access through the public interface.

---

## Q17. Can we have a setter without a getter?

**Answer:**

Yes.

For example, a password-like value may be accepted through a setter without exposing it through a getter.

---

## Q18. What are access specifiers in C++?

**Answer:**

The three main access specifiers are:

- `private`
- `protected`
- `public`

| Access | Same class | Derived class | Outside class |
|---|---:|---:|---:|
| `private` | Yes | No direct access | No |
| `protected` | Yes | Yes | No |
| `public` | Yes | Yes | Yes |

---

## Q19. What is the default access modifier in a C++ class?

**Answer:**

`private`.

```cpp
class Student {
    int age; // private by default
};
```

---

## Q20. What is the default access modifier in a C++ struct?

**Answer:**

`public`.

```cpp
struct Student {
    int age; // public by default
};
```

This is a common C++ interview question.

---

## Q21. Can a private method exist?

**Answer:**

Yes.

```cpp
class BankAccount {
private:
    void calculateInterest() {
        // Internal implementation
    }

public:
    void showDetails() {
        calculateInterest();
    }
};
```

A private method can be used internally by the class but is not directly callable by normal outside code.

---

# 3. Inheritance

## Q22. What is inheritance?

**Answer:**

Inheritance is an OOP mechanism in which a new class derives properties and behavior from an existing class.

```cpp
class Animal {
public:
    void eat() {
        cout << "Eating";
    }
};

class Dog : public Animal {
};
```

`Dog` derives from `Animal`.

---

## Q23. Why is inheritance used?

**Answer:**

It can provide:

- Code reuse
- Extension of existing behavior
- Hierarchical modeling
- Runtime polymorphism when combined with virtual functions

However, inheritance should be used only when the relationship is appropriate.

---

## Q24. What are the types of inheritance?

Common types:

1. Single
2. Multilevel
3. Multiple
4. Hierarchical
5. Hybrid

### Single

```text
A → B
```

### Multilevel

```text
A → B → C
```

### Multiple

```text
A ─┐
   ├→ C
B ─┘
```

### Hierarchical

```text
   A
  / \
 B   C
```

### Hybrid

Combination of multiple inheritance forms.

---

## Q25. What is a base class?

**Answer:**

The class from which another class derives is called the **base class**, parent class, or superclass.

```cpp
class Animal {};
class Dog : public Animal {};
```

`Animal` is the base class.

---

## Q26. What is a derived class?

**Answer:**

A class that inherits from another class is called a **derived class**, child class, or subclass.

`Dog` is derived from `Animal`.

---

## Q27. What is an IS-A relationship?

**Answer:**

An IS-A relationship usually represents inheritance.

Example:

```text
Dog IS-A Animal
Car IS-A Vehicle
```

```cpp
class Dog : public Animal {};
```

---

## Q28. What is a HAS-A relationship?

**Answer:**

A HAS-A relationship generally represents composition or aggregation.

Example:

```text
Car HAS-A Engine
Student HAS-A Address
```

---

## Q29. Can a derived class directly access private members of its base class?

**Answer:**

No.

```cpp
class A {
private:
    int x;
};

class B : public A {
    // Cannot directly access x
};
```

Private members belong to the base class's private interface and are not directly accessible by the derived class.

A base class can expose controlled access through protected/public members or methods.

---

## Q30. Can constructors be inherited in C++?

**Answer:**

C++ supports explicitly inheriting constructors using:

```cpp
using Base::Base;
```

However, constructors are not inherited automatically in the ordinary sense.

Example:

```cpp
class Base {
public:
    Base(int x) {}
};

class Derived : public Base {
public:
    using Base::Base;
};
```

---

# 4. Polymorphism

## Q31. What is polymorphism?

**Answer:**

Polymorphism means **one interface/name can represent different behaviors**.

The two broad forms commonly discussed are:

- Compile-time polymorphism
- Runtime polymorphism

---

## Q32. What is compile-time polymorphism?

**Answer:**

The behavior is determined during compilation.

Common C++ examples:

- Function overloading
- Operator overloading

```cpp
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};
```

---

## Q33. What is runtime polymorphism?

**Answer:**

Runtime polymorphism occurs when a call to an overridden virtual function is resolved at runtime based on the actual object.

```cpp
class Animal {
public:
    virtual void sound() {
        cout << "Animal sound";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Bark";
    }
};
```

```cpp
Animal* a = new Dog();
a->sound(); // Bark
```

---

## Q34. What is function overloading?

**Answer:**

Function overloading means having multiple functions with the **same name but different parameter lists**.

```cpp
int add(int a, int b);
double add(double a, double b);
```

The compiler selects the appropriate overload based on the call.

---

## Q35. What is function overriding?

**Answer:**

Overriding occurs when a derived class provides a new implementation of a virtual function inherited from a base class.

```cpp
class Animal {
public:
    virtual void sound() {
        cout << "Animal";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog";
    }
};
```

---

## Q36. Overloading vs overriding?

| Overloading | Overriding |
|---|---|
| Usually same class | Base + derived classes |
| Different parameter lists | Same function signature subject to language rules |
| Compile-time polymorphism | Runtime polymorphism when virtual dispatch is used |
| No inheritance required | Requires inheritance relationship |

---

## Q37. Can a function be overloaded only by changing its return type?

**Answer:**

No.

This is invalid:

```cpp
int add(int a);
double add(int a);
```

The parameter list is the same, so return type alone cannot distinguish the overload.

---

## Q38. Can constructors be overloaded?

**Answer:**

Yes.

```cpp
class Student {
public:
    Student() {}

    Student(int age) {}
};
```

This allows objects to be created in different ways.

---

## Q39. What is early/static binding?

**Answer:**

Binding means connecting a function call to the function implementation.

**Static/early binding** is resolved at compile time.

Function overloading is a common example.

---

## Q40. What is late/dynamic binding?

**Answer:**

Dynamic binding is resolved at runtime.

In C++, virtual functions enable runtime dispatch.

---

## Q41. What is dynamic dispatch?

**Answer:**

Dynamic dispatch means selecting the overridden function implementation at runtime based on the actual object.

```cpp
Animal* a = new Dog();
a->sound();
```

If `sound()` is virtual, the `Dog` implementation is called.

---

# 5. Abstraction

## Q42. What is abstraction?

**Answer:**

Abstraction means exposing the **essential interface** while hiding unnecessary implementation details.

Example:

```cpp
car.start();
```

The driver uses the `start()` interface without needing to know all internal engine operations.

---

## Q43. Why do we need abstraction?

**Answer:**

Abstraction:

- Reduces complexity
- Hides implementation details
- Provides a simpler interface
- Makes systems easier to use and maintain

---

## Q44. How can abstraction be achieved in C++?

**Answer:**

Common mechanisms include:

- Abstract classes
- Pure virtual functions
- Access control
- Well-designed public interfaces

---

## Q45. What is an abstract class?

**Answer:**

In C++, a class containing at least one **pure virtual function** is abstract.

```cpp
class Animal {
public:
    virtual void sound() = 0;
};
```

You cannot directly create an object of an abstract class.

---

## Q46. What is a pure virtual function?

**Answer:**

A pure virtual function is declared using `= 0`.

```cpp
virtual void sound() = 0;
```

It makes the class abstract and requires concrete derived classes to provide an implementation if they are to be instantiated.

---

## Q47. Can we create an object of an abstract class?

**Answer:**

No.

```cpp
Animal a; // Error
```

But we can have a pointer/reference to an abstract base:

```cpp
Animal* a;
```

---

## Q48. Can an abstract class have a constructor?

**Answer:**

Yes.

An abstract class can have constructors, data members, and normal member functions.

Its constructor can be used when a derived object is created.

---

## Q49. Can an abstract class have normal methods?

**Answer:**

Yes.

```cpp
class Animal {
public:
    virtual void sound() = 0;

    void sleep() {
        cout << "Sleeping";
    }
};
```

An abstract class can contain both pure virtual and normal methods.

---

## Q50. What is an interface?

**Answer:**

C++ does not have a dedicated `interface` keyword like some languages.

An interface-like design is commonly created using an abstract class containing pure virtual functions.

```cpp
class Payment {
public:
    virtual void pay() = 0;
    virtual ~Payment() = default;
};
```

---

## Q51. Abstract class vs interface?

**Answer:**

In languages with a dedicated interface construct, an interface is primarily a contract.

In C++, an interface is commonly modeled using a class with pure virtual functions.

A C++ abstract class can also contain:

- Data members
- Constructors
- Implemented methods
- Pure virtual methods

So a C++ abstract class is more flexible than a strict interface-style contract.

---

# 6. Classes, Objects & Constructors

## Q52. How do you create an object?

**Answer:**

```cpp
Student s;
```

This creates an automatic/local object.

Dynamic allocation is also possible:

```cpp
Student* s = new Student();
delete s;
```

For modern C++, prefer RAII and smart pointers over manual `new`/`delete` where appropriate.

---

## Q53. What is a constructor?

**Answer:**

A constructor is a special member function used to initialize an object.

It has:

- Same name as the class
- No return type
- Runs when an object is initialized

```cpp
class Student {
public:
    Student() {
        cout << "Constructor";
    }
};
```

---

## Q54. What is a default constructor?

**Answer:**

A constructor that can be called with no arguments.

```cpp
Student() {}
```

A compiler may implicitly declare a default constructor if appropriate, but user-declared constructors can affect whether an implicit default constructor is generated.

---

## Q55. What is a parameterized constructor?

**Answer:**

A constructor that accepts arguments.

```cpp
Student(int age) {
    this->age = age;
}
```

---

## Q56. What is a copy constructor?

**Answer:**

A copy constructor creates an object from another object of the same class.

Typical form:

```cpp
Student(const Student& other) {
    age = other.age;
}
```

It is especially important in C++ because object copying and resource ownership can require careful design.

---

## Q57. Can constructors be overloaded?

**Answer:**

Yes.

```cpp
Student() {}
Student(int age) {}
Student(int age, string name) {}
```

---

## Q58. Can a constructor return a value?

**Answer:**

No.

Constructors do not have a return type.

---

## Q59. Can a constructor be private?

**Answer:**

Yes.

A private constructor prevents normal outside construction.

This can be useful in patterns such as controlled object creation, including some singleton implementations.

---

## Q60. What is a destructor?

**Answer:**

A destructor is a special member function that performs cleanup when an object is destroyed.

Syntax:

```cpp
~Student() {
    // cleanup
}
```

A destructor:

- Has the class name preceded by `~`
- Has no return type
- Takes no parameters

---

## Q61. When is a destructor called?

**Answer:**

For an automatic object, it is called when the object's lifetime ends.

For an object created using `new`, destruction occurs when `delete` is used.

Modern C++ generally recommends RAII so that resource cleanup happens automatically through object lifetime.

---

## Q62. Constructor vs destructor?

| Constructor | Destructor |
|---|---|
| Initializes object | Cleans up object |
| Same class name | `~ClassName()` |
| Called during object initialization | Called at end of object lifetime |
| Can be overloaded | Cannot be overloaded |

---

# 7. C++-Specific OOP

## Q63. What is a virtual function?

**Answer:**

A virtual function is a member function declared with `virtual` in a base class so that calls through a base pointer/reference can use runtime polymorphism.

```cpp
class Animal {
public:
    virtual void sound() {
        cout << "Animal";
    }
};
```

---

## Q64. Why use the `virtual` keyword?

**Answer:**

It enables **dynamic dispatch/runtime polymorphism** for overridden functions.

```cpp
Animal* a = new Dog();
a->sound();
```

If `sound()` is virtual, the `Dog` implementation can be selected at runtime.

---

## Q65. What is a pure virtual function?

**Answer:**

A pure virtual function is declared:

```cpp
virtual void sound() = 0;
```

It makes the class abstract.

---

## Q66. What is a virtual destructor?

**Answer:**

A virtual destructor allows proper destruction through a base-class pointer when the actual object is derived.

```cpp
class Base {
public:
    virtual ~Base() = default;
};
```

Example:

```cpp
Base* ptr = new Derived();
delete ptr;
```

A virtual destructor ensures the derived destructor participates correctly in destruction.

---

## Q67. Why should a base class destructor sometimes be virtual?

**Answer:**

If a class is intended to be used polymorphically and objects of derived classes may be deleted through a base pointer, the base destructor should generally be virtual.

Otherwise, deleting through the base pointer can result in undefined behavior.

---

## Q68. What is the `this` pointer?

**Answer:**

`this` is a pointer available in non-static member functions that points to the current object.

Example:

```cpp
class Student {
private:
    int age;

public:
    void setAge(int age) {
        this->age = age;
    }
};
```

Here:

- `this->age` = object's data member
- `age` = function parameter

---

## Q69. What is a friend function?

**Answer:**

A friend function is not a member of the class, but the class explicitly grants it access to private and protected members.

```cpp
class Student {
private:
    int age = 20;

    friend void showAge(Student s);
};

void showAge(Student s) {
    cout << s.age;
}
```

---

## Q70. Can a friend function access private members?

**Answer:**

Yes.

If a function is declared as a friend, it can access the class's private and protected members.

---

## Q71. What is operator overloading?

**Answer:**

Operator overloading allows operators to have a user-defined meaning for class/struct types.

Example:

```cpp
class Complex {
public:
    int real, imag;

    Complex operator+(const Complex& other) {
        return {real + other.real, imag + other.imag};
    }
};
```

Now `+` can be used for `Complex` objects.

---

## Q72. Can every operator be overloaded?

**Answer:**

No.

Some operators cannot be overloaded, including:

```text
::     .     .*     ?:     sizeof
```

The exact set should be remembered for C++ interviews.

---

## Q73. Difference between struct and class in C++?

**Answer:**

The main default-access difference:

```cpp
class A {
    int x; // private by default
};

struct B {
    int x; // public by default
};
```

Also, default inheritance access differs:

```cpp
class Derived : Base
```

means private inheritance by default, while:

```cpp
struct Derived : Base
```

means public inheritance by default.

Otherwise, both can have constructors, methods, inheritance, etc.

---

## Q74. What is multiple inheritance?

**Answer:**

Multiple inheritance means a class derives from more than one base class.

```cpp
class A {};
class B {};

class C : public A, public B {};
```

---

## Q75. What is the diamond problem?

**Answer:**

It occurs when a class inherits from two classes that both inherit from the same base.

```text
      A
     / \
    B   C
     \ /
      D
```

`D` may contain two paths to `A`, causing ambiguity.

---

## Q76. How does C++ solve the diamond problem?

**Answer:**

C++ can use **virtual inheritance**.

```cpp
class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};
```

This makes `D` share one `A` subobject.

---

# 8. Object Relationships

## Q77. What is association?

**Answer:**

Association represents a general relationship between two independent objects.

Example:

```text
Teacher ↔ Student
```

A teacher and student can exist independently.

---

## Q78. What is aggregation?

**Answer:**

Aggregation is a weak HAS-A relationship where the contained object can exist independently of the container.

Example:

```text
Department HAS-A Professor
```

A professor can exist even if a particular department object is removed.

---

## Q79. What is composition?

**Answer:**

Composition is a strong ownership relationship where the contained object's lifetime is tied to the containing object.

Example:

```text
House HAS-A Room
```

Conceptually, the rooms are part of the house.

---

## Q80. Aggregation vs composition?

| Aggregation | Composition |
|---|---|
| Weak ownership | Strong ownership |
| Parts can exist independently | Parts are owned by whole |
| Looser lifecycle relationship | Tighter lifecycle relationship |
| Example: Team → Player | Example: House → Room |

---

## Q81. Inheritance vs composition?

**Inheritance:**

```text
IS-A
```

Example:

```text
Dog IS-A Animal
```

**Composition:**

```text
HAS-A
```

Example:

```text
Car HAS-A Engine
```

In software design, composition is often preferred when the relationship is about using/owning another object rather than representing a true subtype relationship.

---

# 9. Scenario-Based Questions

## Q82. Design a Bank Account using OOP.

**Answer approach:**

```cpp
class BankAccount {
private:
    double balance;

public:
    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
    }

    bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            return true;
        }
        return false;
    }

    double getBalance() {
        return balance;
    }
};
```

Concepts demonstrated:

- Class
- Object
- Encapsulation
- Private data
- Public methods
- Validation

---

## Q83. Give a real-life example of the four pillars.

**Answer:**

Consider a banking application.

### Encapsulation

Account balance is private and modified through controlled methods.

### Abstraction

The user calls:

```cpp
withdraw(500);
```

without knowing the internal transaction process.

### Inheritance

```text
Account
  ↓
SavingsAccount
```

### Polymorphism

Different account types can implement a common operation differently.

---

## Q84. When should you use inheritance?

**Answer:**

Use inheritance when there is a genuine **IS-A/subtype relationship** and substitutability makes sense.

Example:

```text
Dog IS-A Animal
```

Do not use inheritance simply because two classes share some code.

---

## Q85. When should you prefer composition?

**Answer:**

Prefer composition when one object **uses or contains another object** rather than being a subtype.

Example:

```text
Car HAS-A Engine
```

Composition can reduce tight coupling and make behavior easier to change.

---

## Q86. How would you implement a Student class?

**Answer:**

```cpp
class Student {
private:
    string name;
    int marks;

public:
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    string getName() {
        return name;
    }

    int getMarks() {
        return marks;
    }

    void setMarks(int m) {
        if (m >= 0 && m <= 100)
            marks = m;
    }
};
```

This demonstrates:

- Encapsulation
- Constructor
- Getter
- Setter
- Validation

---

# 10. Code / Output Concepts

## Q87. What happens here?

```cpp
class Animal {
public:
    void sound() {
        cout << "Animal";
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog";
    }
};

int main() {
    Dog d;
    d.sound();
}
```

**Answer:**

```text
Dog
```

The derived class's `sound()` hides the base version for this call.

---

## Q88. What changes if the base function is virtual?

```cpp
class Animal {
public:
    virtual void sound() {
        cout << "Animal";
    }
};
```

Now:

```cpp
Animal* a = new Dog();
a->sound();
```

prints:

```text
Dog
```

because runtime polymorphism is enabled.

---

## Q89. Why does this matter?

```cpp
Animal* a = new Dog();
```

The pointer type is `Animal*`, but the actual object is `Dog`.

With a virtual function, the call is dispatched according to the **actual object's overridden implementation**.

---

# 11. Top 35 Must-Know Questions

If you are short on time before a placement interview, master these first.

1. What is OOP?
2. What are the four pillars of OOP?
3. What is a class?
4. What is an object?
5. Class vs object?
6. What is encapsulation?
7. What is data hiding?
8. Encapsulation vs abstraction?
9. What is inheritance?
10. Types of inheritance?
11. What is polymorphism?
12. Types of polymorphism?
13. Compile-time vs runtime polymorphism?
14. Function overloading?
15. Function overriding?
16. Overloading vs overriding?
17. What are access specifiers?
18. Private vs protected vs public?
19. Getter vs setter?
20. Why use getters/setters?
21. What is a constructor?
22. Types of constructors?
23. What is a copy constructor?
24. Constructor vs destructor?
25. What is an abstract class?
26. What is a pure virtual function?
27. Can an abstract class have a constructor?
28. What is a virtual function?
29. What is a virtual destructor?
30. What is the `this` pointer?
31. What is a friend function?
32. What is operator overloading?
33. Composition vs inheritance?
34. IS-A vs HAS-A?
35. Explain OOP using a real project example.

---

# 12. Last-Minute Revision Sheet

## Four Pillars

```text
ENCAPSULATION
→ Bundle data + methods
→ Control access

ABSTRACTION
→ Hide unnecessary implementation
→ Show essential interface

INHERITANCE
→ Derive/reuse/extend classes
→ IS-A relationship

POLYMORPHISM
→ Same interface/name
→ Different behavior
```

---

## Polymorphism

```text
Compile Time
├── Function overloading
└── Operator overloading

Runtime
└── Virtual function + overriding
```

---

## Access Modifiers

```text
private
→ class only

protected
→ class + derived classes

public
→ accessible through public interface
```

---

## Relationships

```text
IS-A
→ Inheritance

HAS-A
→ Composition / Aggregation
```

---

## Most Important Comparisons

### Encapsulation vs Abstraction

```text
Encapsulation → controls access
Abstraction   → hides complexity
```

### Overloading vs Overriding

```text
Overloading
→ same name
→ different parameters
→ compile time

Overriding
→ base + derived
→ virtual function
→ runtime dispatch
```

### Class vs Object

```text
Class  → blueprint/type
Object → instance
```

### Aggregation vs Composition

```text
Aggregation  → weak ownership
Composition  → strong ownership
```

---

# Final Placement Strategy

Do not memorize these answers word-for-word.

For each important question, prepare this **4-step pattern**:

```text
1. Definition
       ↓
2. Simple example
       ↓
3. C++ code
       ↓
4. Difference / follow-up question
```

For example:

```text
"What is polymorphism?"
        ↓
Definition
        ↓
Real-life example
        ↓
Overloading + overriding code
        ↓
Compile-time vs runtime
        ↓
virtual keyword
        ↓
Output-based question
```

If you can handle that chain, you are much better prepared than someone who has only memorized textbook definitions.

---

## Quick Priority

### 🔥 Must Master

- Four pillars
- Class/object
- Encapsulation
- Data hiding
- Access modifiers
- Getters/setters
- Inheritance
- Types of inheritance
- Polymorphism
- Overloading
- Overriding
- Overloading vs overriding
- Compile-time vs runtime polymorphism
- Abstraction
- Abstract class
- Pure virtual function
- Virtual function
- Constructors
- Copy constructor
- Destructor

### ⭐ C++ Follow-up

- Virtual destructor
- `this` pointer
- Friend function
- Operator overloading
- Multiple inheritance
- Diamond problem
- Virtual inheritance
- `class` vs `struct`
- Composition vs inheritance
- Aggregation vs composition

---

**Interview rule:** If the interviewer asks you to explain any OOP concept, first give a **2–3 sentence definition**, then give a **simple real-world example**, and finally show a **small C++ example**. Avoid giving a 5-minute theoretical answer unless they ask for more detail.
