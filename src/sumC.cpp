#include <Rcpp.h>
using namespace Rcpp;
//' Sum along a vector
//'
//' Returns the sum of a vector, x, of real numbers.
//' @param x A vector of real/double numbers
//' @export
// [[Rcpp::export]]

double sumC(NumericVector x) {
  int n = x.size();
  double total = 0;
  for(int i = 0; i < n; i++) {
    total += x.at(i);
  }
  return total;
}
