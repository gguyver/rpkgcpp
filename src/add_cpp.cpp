#include <Rcpp.h>
using namespace Rcpp;
//' Add Two Numbers
//'
//' Return sum of two real numbers
//' @param x A double
//' @param y A double
//' @export
// [[Rcpp::interfaces(r, cpp)]]
// [[Rcpp::export]]
double add_cpp(double x, double y) {
  double val = x + y;
  return val;
}
