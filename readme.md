WRITTEN BY GOVIND SRIVASTAV
==========================


C++
====

C++ is a statically-typed, compiled, and multi-paradigm programming language. It is a general-purpose programming language that is widely used for building applications, web services, and systems software.

Philosophy
----------

* C++ is designed to be a successor to C, and to keep C++ code compatible with C.
* C++ is a statically-typed language, which means that the type of every variable is known at compile-time and does not change.
* C++ is a compiled language, which means that the source code is translated into machine code before it is executed.
* C++ is a multi-paradigm language, which means that it supports multiple programming paradigms, including object-oriented, generic, and functional programming.

Features
--------

* C++ supports both imperative and declarative programming styles.
* C++ is an object-oriented language, which means that it supports encapsulation, inheritance, and polymorphism.
* C++ supports generic programming, which means that you can write functions and classes that can work with multiple data types.
* C++ supports functional programming, which means that you can write functions that take other functions as arguments and return functions as values.
* C++ is a compiled language, which means that the source code is translated into machine code before it is executed.
* C++ is a statically-typed language, which means that the type of every variable is known at compile-time and does not change.

Syntax
------

* C++ uses curly braces to denote code blocks.
* C++ uses semicolons to denote the end of a statement.
* C++ uses whitespace for indentation.
* C++ is a case-sensitive language, which means that `Foo`, `foo`, and `FOO` are three different identifiers.

Variables
---------

* In C++, variables are declared using the `auto` keyword, which infers the type of the variable from its initialization.
* For example, `auto x = 5;` declares a variable `x` of type `int`.
* You can also declare variables with an explicit type, like `int x = 5;`.

Data Types
------------

* C++ has a number of built-in data types, including `bool`, `char`, `int`, `float`, and `double`.
* You can also define your own data types using structures, classes, and enumerations.

Strings
--------

* C++ has a built-in `string` type for working with text.
* You can concatenate strings using the `+` operator.
* You can index into a string using square brackets, like `s[0]` to get the first character.

Functions
----------

* In C++, functions are declared using the `function` keyword, followed by the function name, parameters, and a return type.
* For example, `function add(int x, int y) -> int { return x + y; }` declares a function `add` that takes two `int` parameters and returns an `int`.
* You can also define functions using the `{}` syntax, like `function foo() { /* code */ }`.

Comments
---------

* C++ supports both line comments, which start with `//`, and block comments, which are enclosed in `/* */`.

Printing
---------

* In C++, you can print to the console using the `std::cout` stream, like `std::cout << "Hello, world!" << std::endl;`.

Reading Input
--------------

* In C++, you can read input from the console using the `std::cin` stream, like `int x; std::cin >> x;`.

Control Structures
--------------------

* C++ has if/else statements, like `if (x > 0) { /* code */ } else { /* code */ }`.
* C++ has while loops, like `while (x > 0) { /* code */ }`.
* C++ has for loops, like `for (int i = 0; i < 5; i++) { /* code */ }`.

Type Inference
----------------

* C++ can infer the type of a variable based on its initialization.
* For example, `auto x = 5;` declares a variable `x` of type `int`.

Function Overloading
----------------------

* In C++, you can define multiple functions with the same name but different parameters.
* C++ will choose the function with the correct parameters based on the types of the arguments you pass to the function.

Default Parameters
--------------------

* In C++, you can define default values for function parameters, like `function foo(x = 5) { /* code */ }`.

Operator Overloading
-----------------------

* In C++, you can define custom behavior for operators, like `function operator+(x, y) { return /* custom behavior */ }`.

Destructors
-------------

* In C++, you can define a special function called a destructor, which is called automatically when an object is destroyed.
* The destructor is defined like a regular function, but with a special name: `~ClassName()`.

Inheritance
-------------

* In C++, you can define a class that inherits behavior from another class, like `class DerivedClass : public BaseClass { /* code */ }`.

Polymorphism
--------------

* In C++ you can have objects of different classes that all share a common base class, and you can call methods on any of these objects without knowing their exact class.

Exceptions
------------

* In C++, you can define a block of code that can throw an exception using the `try` keyword, followed by a block of code that can handle the exception using the `catch` keyword.

Duck Typing
-------------

* In C++, you can write code that works with objects of different classes as long as they have the methods you need.

Meta Programming
------------------

* In C++, you can write code that can generate code based on the types of variables at compile-time using templates.



Data Types
------------

* C++ has a number of built-in data types, including:
	+ `bool` (true or false)
	+ `char` (a single character)
	+ `int` (a signed integer)
	+ `float` (a floating-point number)
	+ `double` (a floating-point number with twice the precision of a `float`)
	+ `long double` (a floating-point number with even higher precision than `double`)

	+ `unsigned char` (an unsigned integer that can hold only positive values)
	+ `unsigned int` (an unsigned integer)
	+ `unsigned long` (an unsigned integer)

	+ `void*` (a generic pointer type)

	+ `nullptr_t` (a null pointer constant)

	+ `size_t` (an unsigned integer that is large enough to hold the size of any object in memory)

	+ `ptrdiff_t` (a signed integer that is large enough to hold the difference between any two pointers)



