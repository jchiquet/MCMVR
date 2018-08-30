// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// MCnegloglikCpp
double MCnegloglikCpp(arma::mat beta, arma::mat z, arma::mat y, double tau);
RcppExport SEXP _MCMVR_MCnegloglikCpp(SEXP betaSEXP, SEXP zSEXP, SEXP ySEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(MCnegloglikCpp(beta, z, y, tau));
    return rcpp_result_gen;
END_RCPP
}
// MCgradbetaCpp
arma::mat MCgradbetaCpp(arma::mat beta, arma::mat x, arma::mat y, arma::mat xtx, arma::mat xty, double tau);
RcppExport SEXP _MCMVR_MCgradbetaCpp(SEXP betaSEXP, SEXP xSEXP, SEXP ySEXP, SEXP xtxSEXP, SEXP xtySEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xtx(xtxSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xty(xtySEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(MCgradbetaCpp(beta, x, y, xtx, xty, tau));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _MCMVR_MCgradbetaCpp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP _MCMVR_MCnegloglikCpp(SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_MCMVR_MCnegloglikCpp", (DL_FUNC) &_MCMVR_MCnegloglikCpp, 4},
    {"_MCMVR_MCgradbetaCpp", (DL_FUNC) &_MCMVR_MCgradbetaCpp, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_MCMVR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}