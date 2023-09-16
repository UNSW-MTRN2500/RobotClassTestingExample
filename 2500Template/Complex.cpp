#include "Complex.h"

namespace mtrn2500 {
    Complex::Complex(double const& real) : Complex(real, 0) {
    }

    Complex::Complex(double const& real, double const& imaginary) : real_(real), imaginary_(imaginary) {
    }

    Complex Complex::conjugate() const {
        return Complex(real_, -imaginary_);
    }

    double Complex::modulus() const {
        return std::sqrt(std::pow(real_, 2) + std::pow(imaginary_, 2));
    }

    double Complex::argument() const {
        return std::atan2(imaginary_, real_);
    }

}  // namespace mtrn2500