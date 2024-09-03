#include <iostream>
using namespace std;

class Triangle {
private:
    float side1, side2, side3;

public:
    void setSides(float s1, float s2, float s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    string determineType() {
        if (side1 == side2 && side2 == side3)
            return "Equilateral";
        else if (side1 == side2 || side2 == side3 || side1 == side3)
            return "Isosceles";
        else
            return "Scalene";
    }

    void displayTriangleType() {
        cout << "Triangle type: " << determineType() << endl;
    }
};

int main() {
    Triangle triangle;
    triangle.setSides(5.0, 5.0, 8.0);
    triangle.displayTriangleType();
    return 0;
}
