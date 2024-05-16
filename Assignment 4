#include <iostream>
#include <cmath>

class Shape {
protected:
    double width;
    double height;

public:
    Shape(double w, double h) : width(w), height(h) {}

    virtual double area() const = 0;
    virtual double perimeter() const = 0;

    virtual void display() const {
        std::cout << "Shape: ";
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : Shape(w, h) {}

    double area() const override {
        return width * height;
    }

    double perimeter() const override {
        return 2 * (width + height);
    }

    void display() const override {
        Shape::display();
        std::cout << "Rectangle" << std::endl;
    }
};

class Triangle : public Shape {
public:
    Triangle(double w, double h) : Shape(w, h) {}

    double area() const override {
        return 0.5 * width * height;
    }

    double perimeter() const override {
        double c = std::sqrt(width * width + height * height);
        return width + height + c;
    }

    void display() const override {
        Shape::display();
        std::cout << "Triangle" << std::endl;
    }
};

class Circle : public Shape {
private:
    static constexpr double PI = 3.14159265359;

public:
    Circle(double r) : Shape(r, r) {}

    double area() const override {
        return PI * width * width;
    }

    double perimeter() const override {
        return 2 * PI * width;
    }

    void display() const override {
        Shape::display();
        std::cout << "Circle" << std::endl;
    }
};

class Square : public Rectangle {
public:
    Square(double side) : Rectangle(side, side) {}

    void display() const override {
        Shape::display();
        std::cout << "Square" << std::endl;
    }
};

int main() {
    std::cout << "Select a shape to calculate area and perimeter:\n";
    std::cout << "1. Rectangle\n";
    std::cout << "2. Triangle\n";
    std::cout << "3. Circle\n";
    std::cout << "4. Square\n";

    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1: {
            double width, height;
            std::cout << "Enter width and height of the rectangle: ";
            std::cin >> width >> height;
            Rectangle rect(width, height);
            rect.display();
            std::cout << "Area: " << rect.area() << std::endl;
            std::cout << "Perimeter: " << rect.perimeter() << std::endl;
            break;
        }
        case 2: {
            double base, height;
            std::cout << "Enter base and height of the triangle: ";
            std::cin >> base >> height;
            Triangle tri(base, height);
            tri.display();
            std::cout << "Area: " << tri.area() << std::endl;
            std::cout << "Perimeter: " << tri.perimeter() << std::endl;
            break;
        }
        case 3: {
            double radius;
            std::cout << "Enter radius of the circle: ";
            std::cin >> radius;
            Circle circle(radius);
            circle.display();
            std::cout << "Area: " << circle.area() << std::endl;
            std::cout << "Perimeter: " << circle.perimeter() << std::endl;
            break;
        }
        case 4: {
            double side;
            std::cout << "Enter side of the square: ";
            std::cin >> side;
            Square square(side);
            square.display();
            std::cout << "Area: " << square.area() << std::endl;
            std::cout << "Perimeter: " << square.perimeter() << std::endl;
            break;
        }
        default:
            std::cout << "Invalid choice\n";
            break;
    }

    return 0;
}
