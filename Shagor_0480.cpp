#include <bits/stdc++.h>
using namespace std;

class Shape {
public:
    virtual double calculateArea() = 0;
    virtual void display() = 0;
}; /* Get help from my friend Jakariya Hossain*/

class Circle : public Shape {
private:
    double radius; //Inheritance

public:
    Circle(double r) : radius(r) {}

    double calculateArea() override {
        return 3.14159 * radius * radius;
    }

    void display() override {
        cout << "Circle with radius " << radius << endl;
    }//Polymorphism
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double calculateArea() override {
        return width * height;
    } //Encapsulation

    void display() override {
        cout << "Rectangle with width " << width << " and height " << height << endl; //Abstraction
    }
};

int main() {
    double circleRadius, rectangleWidth, rectangleHeight;

        cout << "Enter the radius of the circle: ";
        cin >> circleRadius;

        cout << "Enter the width and height of the rectangle: ";
        cin >> rectangleWidth >> rectangleHeight;

    Circle circle(circleRadius);
    Rectangle rectangle(rectangleWidth, rectangleHeight);

    Shape* shapePtr;

    shapePtr = &circle;
    shapePtr->display();
        cout << "Area: " << shapePtr->calculateArea() << endl;

    shapePtr = &rectangle;
    shapePtr->display();
        cout << "Area: " << shapePtr->calculateArea() << endl;

    return 0;
}
