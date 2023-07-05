//simple program to return object as arg
#include <iostream>
class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l = 0, int w = 0) {
        length = l;
        width = w;
    }

    int getLength() const {
        return length;
    }

    int getWidth() const {
        return width;
    }

    int getArea() const {
        return length * width;
    }
};

Rectangle createRectangle(int length, int width) {
    Rectangle r(length, width);
    return r;
}

int main() {
    Rectangle rect = createRectangle(5, 3);
    std::cout << "Rectangle area: " << rect.getArea() << std::endl;

    return 0;
}
