#include <iostream>
using namespace std;

template<typename T>
class A {
private:
    T x;
    T y;
public:
    void setData(T x, T y) {
        this->x = x;
        this->y = y;
    }
    T sum() {
        return x + y;
    }
};

int main() {
    A<int> a;
    a.setData(5, 10);
    cout << a.sum() << endl;

    return 0;
}