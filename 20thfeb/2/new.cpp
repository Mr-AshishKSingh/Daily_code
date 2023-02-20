#include <iostream>
using namespace std;

class RectangleArea{
    private:
    float width , length ;
    public:
    void read_input();
    void display_area();

};

void RectangleArea::read_input()
{
    cin >> length >> width ;

};

void RectangleArea::display_area()
{
    cout << length << " " << width << endl;
    cout << length * width << endl;

};

int main(){
    cout << "ITS CODE BY ASHISH "<< endl;
    RectangleArea aa;
    aa.read_input();
    aa.display_area();

    return 0;
}