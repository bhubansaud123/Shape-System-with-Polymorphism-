# Area Calculation using Abstract Class in C++

This project demonstrates **abstraction and runtime polymorphism** in C++ using an **abstract base class**.
Different shapes calculate their area through a common interface, showing the power of **virtual functions**.

---

## 📌 Objective

To understand and implement:
- Abstract classes
- Pure virtual functions
- Runtime polymorphism
- Inheritance in C++

---

## 🧠 Concepts Used

- Abstract Class  
- Pure Virtual Function  
- Inheritance  
- Method Overriding  
- Dynamic Binding  
- Runtime Polymorphism  

---

## 🧾 Program Description

- `Shape` is an abstract base class with a pure virtual function `area()`
- `Rectangle` and `Circle` inherit from `Shape`
- Each derived class provides its own implementation of `area()`
- Base class pointers are used to achieve runtime polymorphism

---

## 🧩 Class Structure

### Abstract Base Class
- `Shape`
  - `virtual double area() = 0;`

### Derived Classes
- `Rectangle`
  - Data members: `length`, `width`
  - Overrides `area()`
- `Circle`
  - Data member: `radius`
  - Overrides `area()`

---

## ▶️ Sample Input (From Code)

```cpp
Shape* s1 = new Rectangle(10, 5);
Shape* s2 = new Circle(7);
