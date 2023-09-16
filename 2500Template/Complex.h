#pragma once

#include <cmath>
#include <utility>

namespace mtrn2500 {

    class Complex {
    public:
        Complex() = default;
        Complex(double const& real);
        Complex(double const& real, double const& imaginary);
        ~Complex() = default;

        Complex conjugate() const { return Complex(real_, -imaginary_); }

        double modulus() const { return std::sqrt(std::pow(real_, 2) + std::pow(imaginary_, 2)); }

        double argument() const { return std::atan2(imaginary_, real_); }

    private:
        double real_;
        double imaginary_;

        // Alternative implementation.
        std::pair<double, double> number_;
    };

}  // namespace mtrn2500