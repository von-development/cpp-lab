# Object-Oriented Programming Principles in C++

## 1. Encapsulation
Encapsulation ensures that an object's internal state is hidden from the outside. The object can only be manipulated through its public methods.

**Example:**
```cpp 
class Car {
private:
    int speed; // Private state

public:
    void setSpeed(int s) { speed = s; }  // Public method to modify state
    int getSpeed() const { return speed; }  // Public method to access state
    int 
};
```

### **Encapsulation: Why It Matters**
Encapsulation protects the integrity of an object by preventing unintended modifications. This is critical in large-scale software as it keeps components modular and secure.

- **Getter & Setter methods**: These control access to private members.
- **Example Scenario**: If we expose a `balance` variable in a `BankAccount` class directly, anyone can modify it incorrectly. Using `deposit()` and `withdraw()` methods ensures validation checks.
---

## 2. Abstraction
Abstraction allows us to expose only the essential features of an object while hiding the complex implementation details.

**Example:**
```cpp 
class Shape {
public:
    virtual double area() const = 0;  // Pure virtual function
};
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double area() const override { return 3.14 * radius * radius; }
};
```
### **Abstraction: Keeping It Simple**
Abstraction helps simplify interactions with an object by exposing only what’s necessary.

- **Key Benefits:**
  - Reduces complexity
  - Hides unnecessary details from the user
- **Example Scenario**: A `Car` class may have an `accelerate()` method, but the user doesn’t need to know how fuel injection works internally.

---

## 3. Inheritance
Inheritance allows a class (child) to derive attributes and behaviors from another class (parent), promoting code reuse.

**Example:**
```cpp 
class Animal {
public:
    void eat() { std::cout << "Eating...\n"; }
};

class Dog : public Animal {
public:
    void bark() { std::cout << "Barking...\n"; }
};

int main() {
    Dog myDog;
    myDog.eat();  // Inherited from Animal
    myDog.bark(); // Defined in Dog
}
```

### **Inheritance: Code Reusability**
Instead of rewriting the same code, a child class can **reuse** the behavior of a parent class.

- **Key Points:**
  - **Public inheritance**: Retains public methods of the base class.
  - **Protected inheritance**: Base class members stay protected.
  - **Private inheritance**: Makes the base class members private in the derived class.
- **Example Scenario**: A `Vehicle` class can be extended by `Car` and `Bike`, each implementing their own `startEngine()` method.

---

## 4. Polymorphism
Polymorphism allows a class to be used like its parent class while maintaining its own behavior.

```cpp 
class Animal {
public:
    virtual void makeSound() const { std::cout << "Animal sound\n"; }
};

class Dog : public Animal {
public:
    void makeSound() const override { std::cout << "Bark!\n"; }
};

void playSound(const Animal& animal) {
    animal.makeSound();
}

int main() {
    Dog myDog;
    playSound(myDog); // Calls Dog's makeSound() due to polymorphism
}
```

### **Polymorphism: Flexible Behavior**
Polymorphism allows derived classes to override parent class methods while being accessed via a base class pointer.

- **Key Techniques:**
  - Function Overriding (`virtual` keyword)
  - Function Overloading (same function name but different parameters)
- **Example Scenario**: A `Bird` base class may have a `fly()` method, but `Penguin` overrides it to indicate it **cannot** fly.

---



