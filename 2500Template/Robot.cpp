#include "Robot.hpp"

namespace mtrn2500 {
    Robot::Robot(std::string const& name, int const& n) : Robot(name, n, 0) {
    }

    Robot::Robot(std::string const& name, int const& n, int const& m)
        : mName(name), mNumWheels(n), mNumSensors(m) {
    }

    std::string Robot::getName() const {
        return mName;
    }

    int Robot::getNumWheels() const {
        return mNumWheels;
    }

    int Robot::getNumSensors() const {
        return mNumSensors;
    }

    void Robot::setName(std::string const& name) {
        mName = name;
    }

    void Robot::move(double x, double y) {
        mPose = { x, y };
    }

    std::pair<double, double> Robot::localise() {
        return { distance(), angle() };
    }

    double Robot::distance() const {
        return std::sqrt(std::pow(mPose.first, 2) + std::pow(mPose.second, 2));
    }

    double Robot::angle() const {
        return std::atan2(mPose.second, mPose.first);
    }

} // namespace mtrn2500