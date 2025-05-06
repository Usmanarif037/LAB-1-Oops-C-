#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    void setDimensions(int l, int w);
    int area();
    int perimeter();
};

// Function definitions outside the class
void Rectangle::setDimensions(int l, int w) {
    length = l;
    width = w;
}

int Rectangle::area() {
    return length * width;
}

int Rectangle::perimeter() {
    return 2 * (length + width);
}

int main() {
    Rectangle r;
    int l, w;
    cout << "Enter length and width of the rectangle: ";
    cin >> l >> w;
    r.setDimensions(l, w);

    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    return 0;
}

