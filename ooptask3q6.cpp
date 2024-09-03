#include <iostream>
using namespace std;

class Shape {
protected:
    float width, height;

public:
    Shape(float w, float h) : width(w), height(h) {}
    virtual float area() = 0; // Pure virtual function
};

class Triangle : public Shape {
public:
    Triangle(float w, float h) : Shape(w, h) {}
    float area() override {
        return 0.5 * width * height;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(float w, float h) : Shape(w, h) {}
    float area() override {
        return width * height;
    }
};

int main() {
    Triangle t(5.0, 10.0);
    Rectangle r(5.0, 10.0);

    cout << "Area of Triangle: " << t.area() << endl;
    cout << "Area of Rectangle: " << r.area() << endl;

    return 0;
}
