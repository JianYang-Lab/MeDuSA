// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// reml
std::vector<Eigen::MatrixXd> reml(Eigen::VectorXd start, Eigen::MatrixXd& X, Eigen::VectorXd& y, std::vector<Eigen::MatrixXd>& Z, int maxiter);
RcppExport SEXP _MeDuSA_reml(SEXP startSEXP, SEXP XSEXP, SEXP ySEXP, SEXP ZSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type start(startSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type X(XSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::vector<Eigen::MatrixXd>& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(reml(start, X, y, Z, maxiter));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MeDuSA_reml", (DL_FUNC) &_MeDuSA_reml, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_MeDuSA(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
