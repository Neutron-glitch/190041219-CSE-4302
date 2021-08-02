#include <iostream>
#include <cmath>

using namespace std;

class Shape
{
protected:
    void whoAmI()
    {
        cout << "I am a shape. ";
    }
};

class TwoDimentionalShape : public Shape
{
private:
    float ar, peri;

protected:
    TwoDimentionalShape() : ar(0), peri(0)
    {
    }
    void whoAmI()
    {
        Shape::whoAmI();
        cout << "I am a two-dimentional shape. ";
    }
};

class ThreeDimentionalShape : public Shape
{
private:
    float sur_area, volume;

protected:
    ThreeDimentionalShape() : sur_area(0), volume(0)
    {
    }
    void whoAmI()
    {
        Shape::whoAmI();
        cout << "I am a three-dimentional shape. ";
    }
};

class Cube : public ThreeDimentionalShape
{
private:
    float len;

public:
    Cube(float a = 0) : len(a)
    {
    }
    float area()
    {
        return (6 * len * len);
    }
    float volume()
    {
        return (len * len * len);
    }
    void whoAmI()
    {
        ThreeDimentionalShape::whoAmI();
        cout << "I am a Cube." << endl;
    }
};

class Sphere : public ThreeDimentionalShape
{
private:
    float rad;

public:
    Sphere(float a = 0) : rad(a)
    {
    }
    float area()
    {
        return (4 * 3, 1416 * rad * rad);
    }
    float volume()
    {
        return (4 / 3 * (M_PI * rad * rad));
    }
    void whoAmI()
    {
        ThreeDimentionalShape::whoAmI();
        cout << "I am a Sphere." << endl;
    }
};

class Cylinder : public ThreeDimentionalShape
{
private:
    float rad, height;

public:
    Cylinder(float a = 0, float b = 0) : rad(a), height(b)
    {
    }
    float area()
    {
        return (2 * M_PI * rad * height + 2 * M_PI * rad * rad);
    }
    float volume()
    {
        return (M_PI * rad * rad * height);
    }
    void whoAmI()
    {
        ThreeDimentionalShape::whoAmI();
        cout << "I am a Cylinder." << endl;
    }
};

class Cone : public ThreeDimentionalShape
{
private:
    float rad, height;

public:
    Cone(float a = 0, float b = 0) : rad(a), height(b)
    {
    }
    float area()
    {
        return (M_PI * rad*(rad + sqrt(height * height + rad * rad)));
    }
    float volume()
    {
        return (M_PI * rad * rad * height / 3);
    }
    void whoAmI()
    {
        ThreeDimentionalShape::whoAmI();
        cout << "I am a Cone." << endl;
    }
};

class Triangle : public TwoDimentionalShape
{
private:
    float a, b, c, s;

public:
    Triangle(float a = 0, float b = 0, float c = 0) : a(a), b(b), c(c)
    {
        s = (a + b + c) / 2;
    }
    float area()
    {
        return (sqrt(s * (s - a) * (s - b) * (s - c)));
    }
    float perimeter()
    {
        return (a + b + c);
    }
    void whoAmI()
    {
        TwoDimentionalShape::whoAmI();
        cout << "I am a triangle." << endl;
    }
};

class Rectangle : public TwoDimentionalShape
{
private:
    float length, breadth;

public:
    Rectangle(float a = 0, float b = 0) : length(a), breadth(b)
    {
    }
    float area()
    {
        return (length * breadth);
    }
    float perimeter()
    {
        return (2 * (length + breadth));
    }
    void whoAmI()
    {
        TwoDimentionalShape::whoAmI();
        cout << "I am a rectangle." << endl;
    }
};

class Square : public TwoDimentionalShape
{
private:
    float length;

public:
    Square(float a = 0) : length(a)
    {
    }
    float area()
    {
        return (length * length);
    }
    float perimeter()
    {
        return (4 * length);
    }
    void whoAmI()
    {
        TwoDimentionalShape::whoAmI();
        cout << "I am a square." << endl;
    }
};

class circle : public TwoDimentionalShape
{
private:
    float rad;

public:
    circle(float a = 0) : rad(a)
    {
    }
    float area()
    {
        return (M_PI * rad * rad);
    }
    float perimeter()
    {
        return (2 * M_PI * rad);
    }
    void whoAmI()
    {
        TwoDimentionalShape::whoAmI();
        cout << "I am a circle." << endl;
    }
};

class Hexagon : public TwoDimentionalShape
{
private:
    float side;

public:
    Hexagon(float a = 0) : side(a)
    {
    }
    float area()
    {
        return ((3/2)*sqrt(3)* side*side);
    }
    float perimeter()
    {
        return (6*side);
    }
    void whoAmI()
    {
        TwoDimentionalShape::whoAmI();
        cout << "I am a Hexagon." << endl;
    }
};

int main()
{
    circle a(10);
    Rectangle b(2, 3);
    Triangle t(1, 2, 2);

    t.whoAmI();
    cout << t.area() << endl;

    cout << b.area() << endl;
    cout << a.area() << endl;
}