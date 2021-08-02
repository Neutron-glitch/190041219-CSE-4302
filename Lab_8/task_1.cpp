#include <iostream>
#include <cmath>

using namespace std;

// creating class shape
// as we need to access the shape name and dimention we put it in protected
class Shape
{
protected:
    string shape_name;
    int dimention;

protected:
    Shape()
    {
        shape_name = "";
        dimention = 0;
    }

    void whoAmI()
    {
        cout << "I am a shape. ";
    }
};

//creating inherited class 2d shape

class TwoDimentionalShape : public Shape
{
protected:
    float ar, peri;

protected:
    TwoDimentionalShape() : ar(0), peri(0)
    {
        dimention = 2;
    }
    void whoAmI()
    {
        // calling the overloaded function of the base class
        Shape::whoAmI();
        cout << "I am a two-dimentional shape. ";
    }
};

// creating inherited class 3d shape
class ThreeDimentionalShape : public Shape
{
protected:
    float sur_area, vol;

protected:
    ThreeDimentionalShape() : sur_area(0), vol(0)
    {
        dimention = 3;
    }
    void whoAmI()
    {
        // calling the overloaded function of the base class
        Shape::whoAmI();
        cout << "I am a three-dimentional shape. ";
    }
};

// cube class parent= threeDimentionalShape, grandparent=shape
class Cube : public ThreeDimentionalShape
{
private:
    float len;

public:
    Cube(float a = 0) : len(a)
    {
        shape_name = "Cube";
    }
    float area()
    {
        return sur_area = (6 * len * len);
    }
    float volume()
    {
        return vol = (len * len * len);
    }
    void whoAmI()
    {
        // calling the overloaded function of base class
        ThreeDimentionalShape::whoAmI();
        cout << "I am a " << shape_name << endl;
        cout << "My dimention is = " << dimention << endl;
    }
};

//class parent= threeDimentionalShape, grandparent=shape

class Sphere : public ThreeDimentionalShape
{
private:
    float rad;

public:
    Sphere(float a = 0) : rad(a)
    {
        shape_name = "Sphere";
    }
    float area()
    {
        return sur_area = (4 * 3, 1416 * rad * rad);
    }
    float volume()
    {
        return vol = (4 / 3 * (M_PI * rad * rad));
    }
    void whoAmI()
    {
        // calling the overloaded function of base class

        ThreeDimentionalShape::whoAmI();
        cout << "I am a " << shape_name << endl;
        cout << "My dimention is = " << dimention << endl;
    }
};

//class parent= threeDimentionalShape, grandparent=shape

class Cylinder : public ThreeDimentionalShape
{
private:
    float rad, height;

public:
    Cylinder(float a = 0, float b = 0) : rad(a), height(b)
    {
        shape_name = "Cylinder";
    }
    float area()
    {
        return sur_area = (2 * M_PI * rad * height + 2 * M_PI * rad * rad);
    }
    float volume()
    {
        return vol = (M_PI * rad * rad * height);
    }
    void whoAmI()
    {
        // calling the overloaded function of base class

        ThreeDimentionalShape::whoAmI();
        cout << "I am a " << shape_name << endl;
        cout << "My dimention is = " << dimention << endl;
    }
};

//class parent= threeDimentionalShape, grandparent=shape

class Cone : public ThreeDimentionalShape
{
private:
    float rad, height;

public:
    Cone(float a = 0, float b = 0) : rad(a), height(b)
    {
        shape_name = "Cone";
    }
    float area()
    {
        return sur_area = (M_PI * rad * (rad + sqrt(height * height + rad * rad)));
    }
    float volume()
    {
        return vol = (M_PI * rad * rad * height / 3);
    }
    void whoAmI()
    {
        // calling the overloaded function of base class

        ThreeDimentionalShape::whoAmI();
        cout << "I am a " << shape_name << endl;
        cout << "My dimention is = " << dimention << endl;
    }
};

//class parent= TwoDimentionalShape, grandparent=shape

class Triangle : public TwoDimentionalShape
{
private:
    float a, b, c, s;

public:
    Triangle(float a = 0, float b = 0, float c = 0) : a(a), b(b), c(c)
    {

        shape_name = "Traingle";
    }
    float area()
    {
        s = (a + b + c) / 2;
        ar = (sqrt(s * (s - a) * (s - b) * (s - c)));
        return ar;
    }
    float perimeter()
    {
        return peri = (a + b + c);
    }
    void whoAmI()
    {
        // calling the overloaded function of base class

        TwoDimentionalShape::whoAmI();
        cout << "I am a " << shape_name << endl;
        cout << "My dimention is = " << dimention << endl;
    }
};

//class parent= TwoDimentionalShape, grandparent=shape

class Rectangle : public TwoDimentionalShape
{
private:
    float length, breadth;

public:
    Rectangle(float a = 0, float b = 0) : length(a), breadth(b)
    {
        shape_name = "Rectangle";
    }
    float area()
    {
        ar = (length * breadth);
        return ar;
    }
    float perimeter()
    {
        return peri = (2 * (length + breadth));
    }
    void whoAmI()
    {
        // calling the overloaded function of base class

        TwoDimentionalShape::whoAmI();
        cout << "I am a " << shape_name << endl;
        cout << "My dimention is = " << dimention << endl;
    }
};

//class parent= TwoDimentionalShape, grandparent=shape

class Square : public TwoDimentionalShape
{
private:
    float length;

public:
    Square(float a = 0) : length(a)
    {
        shape_name = "Square";
    }
    float area()
    {
        return ar = (length * length);
    }
    float perimeter()
    {
        return peri = (4 * length);
    }
    void whoAmI()
    {
        // calling the overloaded function of base class

        TwoDimentionalShape::whoAmI();
        cout << "I am a " << shape_name << endl;
        cout << "My dimention is = " << dimention << endl;
    }
};

//class parent= TwoDimentionalShape, grandparent=shape

class circle : public TwoDimentionalShape
{
private:
    float rad;

public:
    circle(float a = 0) : rad(a)
    {
        shape_name = "Circle";
    }
    float area()
    {
        return ar = (M_PI * rad * rad);
    }
    float perimeter()
    {
        return peri = (2 * M_PI * rad);
    }
    void whoAmI()
    {
        // calling the overloaded function of base class

        TwoDimentionalShape::whoAmI();
        cout << "I am a " << shape_name << endl;
        cout << "My dimention is = " << dimention << endl;
    }
};

//class parent= TwoDimentionalShape, grandparent=shape

class Hexagon : public TwoDimentionalShape
{
private:
    float side;

public:
    Hexagon(float a = 0) : side(a)
    {
        shape_name = "Hexagon";
    }
    float area()
    {
        return ar = ((3 / 2) * sqrt(3) * side * side);
    }
    float perimeter()
    {
        return peri = (6 * side);
    }
    void whoAmI()
    {
        // calling the overloaded function of base class

        TwoDimentionalShape::whoAmI();
        cout << "I am a " << shape_name << endl;
        cout << "My dimention is = " << dimention << endl;
    }
};

void gap()
{
    cout << endl;
    cout << "-------------------------" << endl;
    cout << endl;
}

// main funtion
int main()
{
    circle cir(10);
    cout << "Circle area : " << cir.area() << endl;
    cout << "Circle perimeter :" << cir.perimeter() << endl;
    cir.whoAmI();
    gap();

    Rectangle rec(2, 3);
    cout << "Rec area : " << rec.area() << endl;
    cout << "Rec perimeter :" << rec.perimeter() << endl;
    rec.whoAmI();
    gap();

    Triangle t(1, 2, 2);
    cout << "Triangle area : " << t.area() << endl;
    cout << "Triangle perimeter :" << t.perimeter() << endl;
    t.whoAmI();
    gap();

    Cube cu(12);
    cout << "Cube surface area : " << cu.area() << endl;
    cout << "Cube Volume :" << cu.volume() << endl;
    cu.whoAmI();
    gap();

    Cylinder cyl(12, 14.5);
    cout << "Cylinder surface area : " << cyl.area() << endl;
    cout << "Cylinder Volume :" << cyl.volume() << endl;
    cyl.whoAmI();
    gap();

    Sphere sph(20.4);
    cout << "Sphere surface area : " << sph.area() << endl;
    cout << "Sphere Volume :" << sph.volume() << endl;
    sph.whoAmI();
    gap();
}