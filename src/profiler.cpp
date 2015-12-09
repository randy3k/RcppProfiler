#include <Rcpp.h>
#include <google/profiler.h>

using namespace Rcpp;

// [[Rcpp::export]]
SEXP start_profiler(std::string str = "RcppProfiler.log") {
  ProfilerStart(str.c_str());
  return R_NilValue;
}

// [[Rcpp::export]]
SEXP stop_profiler() {
  ProfilerStop();
  return R_NilValue;
}
