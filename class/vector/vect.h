#pragma once
#include<iostream>
using namespace std;
namespace VECTOR{
    class Vector{
        public:
            static const double Rad_to_deg;
            enum Mode{RECT,POL};//一个枚举类型Mode,可以用来定义某个变量为RECT或POL
        private:
        double x,y,mag,ang;
        Mode mode;
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();
        public:
        Vector();
        Vector(double n1,double n2,Mode form = RECT);
        void reset(double n1,double n2,Mode form = RECT);
        double xval() const {return x;}
        double yval() const {return y;}
        double magval() const {return mag;}
        double angval() const {return ang;}
        void polar_mode();
        void rect_mode();
        Vector operator+(const Vector & b)const;
        Vector operator-(const Vector & b)const;
        Vector operator-()const;
        Vector operator*(double n)const;
        friend Vector operator*(double n,const Vector &a);
        friend ostream & operator<<(ostream & os,const Vector & v);
    };
}