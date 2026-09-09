// Compile Time Polymorphism: Operator Overloading

#include <iostream>
using namespace std;

class ComplexNumber {
private:
	int real;
	int imaginary;

public:
	ComplexNumber(int real = 0, int imaginary = 0) {
		this->real = real;
		this->imaginary = imaginary;
	}

	ComplexNumber operator+(const ComplexNumber& other) {
		return ComplexNumber(real + other.real, imaginary + other.imaginary);
	}

    ComplexNumber operator*(const ComplexNumber& other) {
        return ComplexNumber(real * other.real - imaginary * other.imaginary, real * other.imaginary + imaginary * other.real);
    }

	void display() {
		cout << real << " + " << imaginary << "i" << endl;
	}
};

int main() {
	ComplexNumber number1(3, 4);
	ComplexNumber number2(5, 6);
    ComplexNumber number3(1, 2);

	ComplexNumber sum = number1 + number2; // Calls the overloaded operator+
    ComplexNumber sum2 = number1 + number2 + number3; // Calls the overloaded operator+
    ComplexNumber product = number1 * number2; // Calls the overloaded operator*

	cout << "First complex number: ";
	number1.display();

	cout << "Second complex number: ";
	number2.display();

	cout << "Sum: ";
	sum.display();

    cout << "Sum2: ";
	sum2.display();

    cout << "Product: ";
    product.display();

	return 0;
}
