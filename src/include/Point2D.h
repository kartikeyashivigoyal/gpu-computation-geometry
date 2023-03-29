namespace computational_geometry {
// Point2D
/// @brief Point represented by two co-ordinates
/// @tparam T type of 1st co-ordinate
/// @tparam V type of 2nd co-ordinate
template <typename T, typename V> class Point2D {
public:
  T x;
  V y;
  /// @brief
  /// @param a
  /// @param b
  Point2D(const T &a, const V &b) {
    x = a;
    y = b;
  }
};
} // namespace computational_geometry