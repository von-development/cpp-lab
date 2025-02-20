#include <iostream>
#include <cmath>   // For mathematical functions (sqrt, pow, M_PI)
#include <string>  // For string operations

/*
 * File Name: geometric_figures_manager.cpp
 * Question Name: Geometric Figures Management System in C++
 * 
 * Description:
 * - Implement a program that manages geometric figures: **Circle, Square, and Rectangle**.
 * - Each figure has:
 *   1. **Color** (string)
 *   2. **Centre (Point)** (x, y) on a 2D coordinate system.
 *   3. **Unique Dimensions**:
 *      - Circle → radius
 *      - Square → side length
 *      - Rectangle → two side lengths (width, height)
 * 
 * Implementation Steps:
 * 1. **Create a `Point` class** (represents a 2D coordinate).
 * 2. **Implement classes** for `Circle`, `Square`, and `Rectangle` (using encapsulation & visibility).
 * 3. **Use Composition** → `Point` as an attribute inside figure classes.
 * 4. **Provide constructors for each figure**.
 * 5. **Implement necessary methods**:
 *    - `get...()`, `set...()`
 *    - `calculateArea()`
 *    - `calculatePerimeter()`
 *    - `intersects()` (for circles)
 * 6. **Test all classes in `main()`**.
 */

// Class representing a 2D point
class Point {
private:
    double x;
    double y;

public:
    // Constructors
    Point() : x(0), y(0) {}  // Default constructor (origin)
    Point(double x, double y) : x(x), y(y) {}  // Parameterized constructor

    // Getter methods
    double getX() const { return x; }
    double getY() const { return y; }

    // Setter methods
    void setX(double xVal) { x = xVal; }
    void setY(double yVal) { y = yVal; }

    // Display point coordinates
    void display() const {
        std::cout << "(" << x << ", " << y << ")";
    }
};

// Base class for geometric figures
class GeometricFigure {
protected:
    std::string color;
    Point centre;

public:
    // Constructor
    GeometricFigure(const std::string& c, Point p) : color(c), centre(p) {}

    // Getter and setter methods
    std::string getColor() const { return color; }
    void setColor(const std::string& c) { color = c; }

    Point getCentre() const { return centre; }
    void setCentre(Point p) { centre = p; }

    // Virtual methods for area and perimeter (will be overridden)
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;

    // Display function (overridden in derived classes)
    virtual void display() const = 0;
};

// Circle class
class Circle : public GeometricFigure {
private:
    double radius;

public:
    // Constructors
    Circle(double x, double y, double r, const std::string& c)
        : GeometricFigure(c, Point(x, y)), radius(r) {}

    Circle(Point centre, double r, const std::string& c)
        : GeometricFigure(c, centre), radius(r) {}

    // Getter and setter for radius
    double getRadius() const { return radius; }
    void setRadius(double r) { radius = r; }

    // Area of the circle
    double calculateArea() const override {
        return M_PI * radius * radius;
    }

    // Perimeter (Circumference) of the circle
    double calculatePerimeter() const override {
        return 2 * M_PI * radius;
    }

    // Check if two circles intersect
    bool intersects(const Circle& other) const {
        double distance = sqrt(pow(centre.getX() - other.centre.getX(), 2) +
                               pow(centre.getY() - other.centre.getY(), 2));
        return distance <= (radius + other.radius);
    }

    // Display function
    void display() const override {
        std::cout << "Circle(Color: " << color << ", Centre: ";
        centre.display();
        std::cout << ", Radius: " << radius << ")\n";
    }
};

// Square class
class Square : public GeometricFigure {
private:
    double side;

public:
    // Constructors
    Square(double x, double y, double s, const std::string& c)
        : GeometricFigure(c, Point(x, y)), side(s) {}

    Square(Point centre, double s, const std::string& c)
        : GeometricFigure(c, centre), side(s) {}

    // Getter and setter
    double getSide() const { return side; }
    void setSide(double s) { side = s; }

    // Area of square
    double calculateArea() const override {
        return side * side;
    }

    // Perimeter of square
    double calculatePerimeter() const override {
        return 4 * side;
    }

    // Display function
    void display() const override {
        std::cout << "Square(Color: " << color << ", Centre: ";
        centre.display();
        std::cout << ", Side: " << side << ")\n";
    }
};

// Rectangle class
class Rectangle : public GeometricFigure {
private:
    double width, height;

public:
    // Constructors
    Rectangle(double x, double y, double w, double h, const std::string& c)
        : GeometricFigure(c, Point(x, y)), width(w), height(h) {}

    Rectangle(Point centre, double w, double h, const std::string& c)
        : GeometricFigure(c, centre), width(w), height(h) {}

    // Getter and setter
    double getWidth() const { return width; }
    double getHeight() const { return height; }
    void setWidth(double w) { width = w; }
    void setHeight(double h) { height = h; }

    // Area of rectangle
    double calculateArea() const override {
        return width * height;
    }

    // Perimeter of rectangle
    double calculatePerimeter() const override {
        return 2 * (width + height);
    }

    // Display function
    void display() const override {
        std::cout << "Rectangle(Color: " << color << ", Centre: ";
        centre.display();
        std::cout << ", Width: " << width << ", Height: " << height << ")\n";
    }
};

// Main function to test the geometric figures
int main() {
    // Create objects
    Circle circle1(Point(2, 3), 5, "Red");
    Circle circle2(Point(6, 3), 3, "Blue");
    Square square1(Point(0, 0), 4, "Green");
    Rectangle rect1(Point(5, 5), 6, 3, "Yellow");

    // Display information
    std::cout << "Geometric Figures:\n";
    circle1.display();
    circle2.display();
    square1.display();
    rect1.display();

    // Compute and display areas and perimeters
    std::cout << "\nCalculating Areas and Perimeters:\n";
    std::cout << "Circle 1 Area: " << circle1.calculateArea() << "\n";
    std::cout << "Circle 1 Perimeter: " << circle1.calculatePerimeter() << "\n";
    std::cout << "Square 1 Area: " << square1.calculateArea() << "\n";
    std::cout << "Rectangle 1 Area: " << rect1.calculateArea() << "\n";

    // Check if circles intersect
    std::cout << "\nChecking Circle Intersection:\n";
    if (circle1.intersects(circle2)) {
        std::cout << "Circle 1 and Circle 2 intersect!\n";
    } else {
        std::cout << "Circle 1 and Circle 2 do not intersect.\n";
    }

    return 0;
}
