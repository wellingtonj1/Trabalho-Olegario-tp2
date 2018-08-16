#include "complex.h"

Complex::Complex()
{

}
void Complex::set(int real, int imaginary){
    this->real=real;
    this->imaginary=imaginary;
}

QString Complex::get(){
    QString ss;
    ss = QString::number(this->real);
    if (this->imaginary > 0)
        ss = ss + " + " + QString::number(this->imaginary);
    else
        ss = ss + QString::number(this->imaginary);
    ss = ss+"i";
    return ss;
}

void Complex::operator = (const Complex & number){
    this->real= number.real;
    this->imaginary=number.imaginary;
}

Complex Complex::operator + (Complex & number) const{
    Complex num;
    num.set(number.real+this->real, number.imaginary+this->imaginary);
    return num;
}

Complex Complex::operator - (Complex & number) const{
    Complex num;
    num.set(number.real-this->real, number.imaginary-this->imaginary);
    return num;
}

Complex Complex::operator * (Complex & number) const{
    Complex num;
    num.set(number.real*this->real, number.imaginary*this->imaginary);
    return num;
}

Complex Complex::operator / (Complex & number) const{
    Complex num;
    num.set(number.real/this->real, number.imaginary/this->imaginary);
    return num;
}

