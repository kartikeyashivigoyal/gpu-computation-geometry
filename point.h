namespace computational_geometry {
// Point2D
/// @brief Point represented by two co-ordinates
/// @tparam T type of 1st co-ordinate
/// @tparam V type of 2nd co-ordinate
template <typename T, typename V> class Point2D {
public:
  T x;
  V y;

  Point2D(T a, V b) {
    x = a;
    y = b;
  };
};
} // namespace computational_geometry