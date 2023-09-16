#include "Robot.h"

namespace mtrn2500 {
    Robot::Robot(std::string const& name, int const& n) : Robot(name, n, 0) {
    }

    Robot::Robot(std::string const& name, int const& n, int const& m)
        : name_(name), num_wheels_(n), num_sensors_(m) {
    }

    std::string Robot::getName() const {
        return name_;
    }

    int Robot::getNumWheels() const {
        return num_wheels_;
    }

    int Robot::getNumSensors() const {
        return num_sensors_;
    }

    void Robot::setName(std::string const& name) {
        name_ = name;
    }

    void Robot::move(double x, double y) {
        pose_ = { x, y };
    }

    std::pair<double, double> Robot::localise() {
        return { distance(), angle() };
    }

    double Robot::distance() const {
        return std::sqrt(std::pow(pose_.first, 2) + std::pow(pose_.second, 2));
    }

    double Robot::angle() const {
        return std::atan2(pose_.second, pose_.first);
    }

} // namespace mtrn2500