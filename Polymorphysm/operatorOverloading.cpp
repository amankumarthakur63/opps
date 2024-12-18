#include <iostream>
using namespace std;
class box
{
private:
    int length;
    int width;
    int height;

public:
    box(int l, int w, int h)
    {
        length = l;
        width = w;
        height = h;
    }
    int getLength()
    {
        return length;
    }
    int getWifth()
    {
        return width;
    }
    int getHeight()
    {
        return height;
    }
    void display()
    {
        cout << "Length : " << length << endl;
        cout << "Width : " << width << endl;
        cout << "Height : " << height << endl;
    }
    friend box operator+(box &b1, box &b2);
};

box operator+(box &b1, box &b2)
{
    return box(b1.length + b2.length, b1.width + b2.width, b1.height + b2.height);
}
int main()
{
    box box1(2, 4, 6);
    box box2(4, 6, 2);
    box box3 = box1 + box2;
    box3.display();
    return 0;
}