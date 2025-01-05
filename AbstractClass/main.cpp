/*
Abstract Class
Definition: An abstract class is a blueprint for other classes. It cannot be created directly (i.e., you can't make an object of it).

Purpose: It provides a way to define common characteristics (properties and methods) that can be shared among subclasses.
It allows you to set a standard for what methods a derived class should implement.

Abstract Methods: These are methods declared in an abstract class that do not have any implementation (i.e., they are empty).
Subclasses that inherit from the abstract class must provide their own implementation for these methods.

Example
Abstract Class:
*/

class Shape {
public:
    virtual void draw() = 0; // Abstract method
};
Subclass:

cpp
Copy code
class Circle : public Shape {
public:
    void draw() override {
        // Implementation for Circle
    }
};

class Square : public Shape {
public:
    void draw() override {
        // Implementation for Square
    }
};
//Summary
//Cannot be instantiated: You can't create an object of an abstract class directly.
//Must implement abstract methods: Any class that inherits from an abstract class must implement its abstract methods.
//Promotes code reusability: Abstract classes help in defining a clear contract for subclasses, ensuring they provide
//functionalities.
