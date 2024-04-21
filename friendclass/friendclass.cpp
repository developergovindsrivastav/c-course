#include <iostream>

class MyClass {
private:
    int privateVar;

public:
    MyClass() : privateVar(0) {}

    // Declare FriendClass as a friend class
    friend class FriendClass;
};

class FriendClass {
public:
    void accessPrivateMember(MyClass& obj) {
        // FriendClass can access the private member of MyClass
        obj.privateVar = 42;
        std::cout << "FriendClass has accessed privateVar: " << obj.privateVar << std::endl;
    }
};

int main() {
    MyClass myObj;
    FriendClass friendObj;

    friendObj.accessPrivateMember(myObj);

    return 0;
}
Q