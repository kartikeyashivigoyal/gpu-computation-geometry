#pragma once
#include <ostream>
namespace computational_geometry {
// Point2D
/// @brief Point represented by two co-ordinates
/// @tparam T type of 1st co-ordinate
/// @tparam V type of 2nd co-ordinate
template <typename T, typename V> class Point2D {
public:
  /// @brief
  /// @param a
  /// @param b
  Point2D(const T &a, const V &b) {
    x = a;
    y = b;
  }

  friend std::ostream &operator<<(std::ostream &stream, const Point2D &p) {
    stream << "(" << p.x << ", " << p.y << ")"
           << "\n";
    return stream;
  }

  Point2D operator+(const Point2D &p) {
    auto ax = (p.x + this->x);
    auto ay = (p.y + this->y);
    return Point2D(ax, ay);
  }

private:
  T x;
  V y;
};
} // namespace computational_geometry