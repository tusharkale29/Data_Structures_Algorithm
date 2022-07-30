// structure as a parameter :

// (call by address) :

#include<iostream>
using namespace std;

struct rectangle
{
    int lenght;
    int breadth;
};
void fun(struct rectangle *rect)
{
    rect ->lenght = 20;
    cout << "Length is " << rect->lenght << endl << "Breadth is " << rect->breadth << endl;

}
int main()
{
    struct rectangle r1 ={10,5};
    fun(&r1);
    cout << "Length is " << r1.lenght << endl << "Breadth is " << r1.breadth << endl;



}

// (call by value) :

// #include<iostream>
// using namespace std;

// struct rectangle
// {
//     int lenght;
//     int breadth;
// };
// void fun(struct rectangle rect)
// {
//     rect.lenght = 20;
//     cout << "Length is " << rect.lenght << endl << "Breadth is " << rect.breadth << endl;

// }

// int main()
// {
//     struct rectangle r1 = {10,5};
//     fun(r1);
//     cout << "Length is " << r1.lenght << endl << "Breadth is " << r1.breadth << endl;

// }

