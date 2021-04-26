#pragma once

class BasicPoint {
public:
    int x, y;
    BasicPoint() {}
};

class Primitive {
public:
    BasicPoint refPiont;

    Primitive() {}
    Primitive(int _x, int _y) {
        refPiont.x = _x;
        refPiont.y = _y;
    }
};

class Point : public Primitive {
public:
    Point() {}
    Point(int _x, int _y) {
        refPiont.x = _x;
        refPiont.y = _y;
    }
};

class Line : public Primitive {
    BasicPoint endPoint;
public:
    Line() {}
    Line(int refX, int refY, int endX, int endY) {
        refPiont.x = refX;
        refPiont.y = refY;
        endPoint.x = endX;
        endPoint.y = endY;
    }
};

class Circle : public Primitive {
    int radius;
public:
    Circle() {}
    Circle(int refX, int refY, int rad) {
        refPiont.x = refX;
        refPiont.y = refY;
        radius = rad;
    }
};

class Square : public Primitive {
    int len;
public:
    Square() {}
    Square(int refX, int refY, int size) {
        refPiont.x = refX;
        refPiont.y = refY;
        len = size;
    }
};
