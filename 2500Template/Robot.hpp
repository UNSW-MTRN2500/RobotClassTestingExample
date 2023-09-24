#pragma once

#include <cmath>
#include <string>
#include <utility>

namespace mtrn2500 {

    class Robot {
    public:
        Robot() = delete;
        Robot(std::string const& name, int const& n);
        Robot(std::string const& name, int const& n, int const& m);
        ~Robot() = default;

        std::string getName() const;
        int getNumWheels() const;
        int getNumSensors() const;
        void setName(std::string const& name);
        void move(double x, double y);
        std::pair<double, double> localise();

    private:
        double distance() const;
        double angle() const;

        std::string mName;
        const int mNumWheels;
        const int mNumSensors;
        std::pair<double, double> mPose;
    };

}  // namespace mtrn2500