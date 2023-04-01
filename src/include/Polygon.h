#pragma once
#include "Point2D.h"
#include <ostream>
#include <vector>
namespace computational_geometry {
template <typename T, typename V> class Polygon {
public:
private:
  std::vector<Point2D<T, V>> _polygon;
  std::vector<Point2D<T, V>> _convex_hull;
};
} // namespace computational_geometry