// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// start_profiler
SEXP start_profiler(std::string str);
RcppExport SEXP RcppProfiler_start_profiler(SEXP strSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type str(strSEXP);
    __result = Rcpp::wrap(start_profiler(str));
    return __result;
END_RCPP
}
// stop_profiler
SEXP stop_profiler();
RcppExport SEXP RcppProfiler_stop_profiler() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(stop_profiler());
    return __result;
END_RCPP
}
