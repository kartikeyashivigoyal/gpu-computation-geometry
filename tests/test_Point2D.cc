
#include <Point2D.h>
#include <Polygon.h>
#include <iostream>

using Point2Df = computational_geometry::Point2D<float, float>;

int main() {
  auto p = Point2Df(5.0, 5.5);
  std::cout << p + p << " \n";
}