// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppGSL.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// Cauchy_marginal
double Cauchy_marginal(const arma::uvec& index_vec_input, const arma::mat& Sigma, const arma::vec& z, const double& zSigmaz, const arma::vec& tau, const double& p, const double& p_S);
RcppExport SEXP _CARMAX_Cauchy_marginal(SEXP index_vec_inputSEXP, SEXP SigmaSEXP, SEXP zSEXP, SEXP zSigmazSEXP, SEXP tauSEXP, SEXP pSEXP, SEXP p_SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec& >::type index_vec_input(index_vec_inputSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const double& >::type zSigmaz(zSigmazSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const double& >::type p_S(p_SSEXP);
    rcpp_result_gen = Rcpp::wrap(Cauchy_marginal(index_vec_input, Sigma, z, zSigmaz, tau, p, p_S));
    return rcpp_result_gen;
END_RCPP
}
// Cauchy_fixed_sigma_marginal
double Cauchy_fixed_sigma_marginal(const arma::uvec& index_vec_input, const arma::mat& Sigma, const arma::vec& z, const arma::vec& tau, const double& p_S, const double& y_sigma);
RcppExport SEXP _CARMAX_Cauchy_fixed_sigma_marginal(SEXP index_vec_inputSEXP, SEXP SigmaSEXP, SEXP zSEXP, SEXP tauSEXP, SEXP p_SSEXP, SEXP y_sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec& >::type index_vec_input(index_vec_inputSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double& >::type p_S(p_SSEXP);
    Rcpp::traits::input_parameter< const double& >::type y_sigma(y_sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(Cauchy_fixed_sigma_marginal(index_vec_input, Sigma, z, tau, p_S, y_sigma));
    return rcpp_result_gen;
END_RCPP
}
// Normal_fixed_sigma_effect_size
arma::mat Normal_fixed_sigma_effect_size(const arma::uvec& index_vec_input, const arma::mat& Sigma, const arma::vec& z, const double& tau, const double& p_S, const double& y_sigma);
RcppExport SEXP _CARMAX_Normal_fixed_sigma_effect_size(SEXP index_vec_inputSEXP, SEXP SigmaSEXP, SEXP zSEXP, SEXP tauSEXP, SEXP p_SSEXP, SEXP y_sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec& >::type index_vec_input(index_vec_inputSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const double& >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double& >::type p_S(p_SSEXP);
    Rcpp::traits::input_parameter< const double& >::type y_sigma(y_sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(Normal_fixed_sigma_effect_size(index_vec_input, Sigma, z, tau, p_S, y_sigma));
    return rcpp_result_gen;
END_RCPP
}
// hyper_g_marginal
double hyper_g_marginal(const arma::uvec& index_vec_input, const arma::mat& Sigma, const arma::vec& z, const double& zSigmaz, const double& p, const arma::vec& tau, const double& p_S);
RcppExport SEXP _CARMAX_hyper_g_marginal(SEXP index_vec_inputSEXP, SEXP SigmaSEXP, SEXP zSEXP, SEXP zSigmazSEXP, SEXP pSEXP, SEXP tauSEXP, SEXP p_SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec& >::type index_vec_input(index_vec_inputSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const double& >::type zSigmaz(zSigmazSEXP);
    Rcpp::traits::input_parameter< const double& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double& >::type p_S(p_SSEXP);
    rcpp_result_gen = Rcpp::wrap(hyper_g_marginal(index_vec_input, Sigma, z, zSigmaz, p, tau, p_S));
    return rcpp_result_gen;
END_RCPP
}
// hyper_g_fixed_sigma_marginal
double hyper_g_fixed_sigma_marginal(const arma::uvec& index_vec_input, const arma::mat& Sigma, const arma::vec& z, const arma::vec& tau, const double& p_S, const double& y_sigma);
RcppExport SEXP _CARMAX_hyper_g_fixed_sigma_marginal(SEXP index_vec_inputSEXP, SEXP SigmaSEXP, SEXP zSEXP, SEXP tauSEXP, SEXP p_SSEXP, SEXP y_sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec& >::type index_vec_input(index_vec_inputSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double& >::type p_S(p_SSEXP);
    Rcpp::traits::input_parameter< const double& >::type y_sigma(y_sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(hyper_g_fixed_sigma_marginal(index_vec_input, Sigma, z, tau, p_S, y_sigma));
    return rcpp_result_gen;
END_RCPP
}
// ind_Normal_fixed_sigma_marginal
double ind_Normal_fixed_sigma_marginal(const arma::uvec& index_vec_input, const arma::mat& Sigma, const arma::vec& z, const double& tau, const double& p_S, const double& y_sigma);
RcppExport SEXP _CARMAX_ind_Normal_fixed_sigma_marginal(SEXP index_vec_inputSEXP, SEXP SigmaSEXP, SEXP zSEXP, SEXP tauSEXP, SEXP p_SSEXP, SEXP y_sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec& >::type index_vec_input(index_vec_inputSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const double& >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double& >::type p_S(p_SSEXP);
    Rcpp::traits::input_parameter< const double& >::type y_sigma(y_sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(ind_Normal_fixed_sigma_marginal(index_vec_input, Sigma, z, tau, p_S, y_sigma));
    return rcpp_result_gen;
END_RCPP
}
// Normal_marginal
double Normal_marginal(const arma::uvec& index_vec_input, const arma::mat& Sigma, const arma::vec& z, const double& zSigmaz, const double& tau, const double& p, const double& p_S);
RcppExport SEXP _CARMAX_Normal_marginal(SEXP index_vec_inputSEXP, SEXP SigmaSEXP, SEXP zSEXP, SEXP zSigmazSEXP, SEXP tauSEXP, SEXP pSEXP, SEXP p_SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec& >::type index_vec_input(index_vec_inputSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const double& >::type zSigmaz(zSigmazSEXP);
    Rcpp::traits::input_parameter< const double& >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const double& >::type p_S(p_SSEXP);
    rcpp_result_gen = Rcpp::wrap(Normal_marginal(index_vec_input, Sigma, z, zSigmaz, tau, p, p_S));
    return rcpp_result_gen;
END_RCPP
}
// Normal_fixed_sigma_marginal
double Normal_fixed_sigma_marginal(const arma::uvec& index_vec_input, const arma::mat& Sigma, const arma::vec& z, const double& tau, const double& p_S, const double& y_sigma);
RcppExport SEXP _CARMAX_Normal_fixed_sigma_marginal(SEXP index_vec_inputSEXP, SEXP SigmaSEXP, SEXP zSEXP, SEXP tauSEXP, SEXP p_SSEXP, SEXP y_sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec& >::type index_vec_input(index_vec_inputSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const double& >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double& >::type p_S(p_SSEXP);
    Rcpp::traits::input_parameter< const double& >::type y_sigma(y_sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(Normal_fixed_sigma_marginal(index_vec_input, Sigma, z, tau, p_S, y_sigma));
    return rcpp_result_gen;
END_RCPP
}
// outlier_Cauchy_fixed_sigma_marginal
double outlier_Cauchy_fixed_sigma_marginal(const arma::uvec& index_vec_input, const arma::mat& Sigma, const arma::vec& z, const arma::vec& tau, const double& p_S, const double& y_sigma);
RcppExport SEXP _CARMAX_outlier_Cauchy_fixed_sigma_marginal(SEXP index_vec_inputSEXP, SEXP SigmaSEXP, SEXP zSEXP, SEXP tauSEXP, SEXP p_SSEXP, SEXP y_sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec& >::type index_vec_input(index_vec_inputSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double& >::type p_S(p_SSEXP);
    Rcpp::traits::input_parameter< const double& >::type y_sigma(y_sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(outlier_Cauchy_fixed_sigma_marginal(index_vec_input, Sigma, z, tau, p_S, y_sigma));
    return rcpp_result_gen;
END_RCPP
}
// outlier_ind_Normal_marginal
double outlier_ind_Normal_marginal(const arma::uvec& index_vec_input, const arma::mat& Sigma, const arma::vec& z, const double& tau, const double& p_S, const double& y_sigma);
RcppExport SEXP _CARMAX_outlier_ind_Normal_marginal(SEXP index_vec_inputSEXP, SEXP SigmaSEXP, SEXP zSEXP, SEXP tauSEXP, SEXP p_SSEXP, SEXP y_sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec& >::type index_vec_input(index_vec_inputSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const double& >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double& >::type p_S(p_SSEXP);
    Rcpp::traits::input_parameter< const double& >::type y_sigma(y_sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(outlier_ind_Normal_marginal(index_vec_input, Sigma, z, tau, p_S, y_sigma));
    return rcpp_result_gen;
END_RCPP
}
// outlier_Normal_fixed_sigma_marginal
double outlier_Normal_fixed_sigma_marginal(const arma::uvec& index_vec_input, const arma::mat& Sigma, const arma::vec& z, const double& tau, const double& p_S, const double& y_sigma);
RcppExport SEXP _CARMAX_outlier_Normal_fixed_sigma_marginal(SEXP index_vec_inputSEXP, SEXP SigmaSEXP, SEXP zSEXP, SEXP tauSEXP, SEXP p_SSEXP, SEXP y_sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec& >::type index_vec_input(index_vec_inputSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const double& >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const double& >::type p_S(p_SSEXP);
    Rcpp::traits::input_parameter< const double& >::type y_sigma(y_sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(outlier_Normal_fixed_sigma_marginal(index_vec_input, Sigma, z, tau, p_S, y_sigma));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _CARMAX_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_CARMAX_Cauchy_marginal", (DL_FUNC) &_CARMAX_Cauchy_marginal, 7},
    {"_CARMAX_Cauchy_fixed_sigma_marginal", (DL_FUNC) &_CARMAX_Cauchy_fixed_sigma_marginal, 6},
    {"_CARMAX_Normal_fixed_sigma_effect_size", (DL_FUNC) &_CARMAX_Normal_fixed_sigma_effect_size, 6},
    {"_CARMAX_hyper_g_marginal", (DL_FUNC) &_CARMAX_hyper_g_marginal, 7},
    {"_CARMAX_hyper_g_fixed_sigma_marginal", (DL_FUNC) &_CARMAX_hyper_g_fixed_sigma_marginal, 6},
    {"_CARMAX_ind_Normal_fixed_sigma_marginal", (DL_FUNC) &_CARMAX_ind_Normal_fixed_sigma_marginal, 6},
    {"_CARMAX_Normal_marginal", (DL_FUNC) &_CARMAX_Normal_marginal, 7},
    {"_CARMAX_Normal_fixed_sigma_marginal", (DL_FUNC) &_CARMAX_Normal_fixed_sigma_marginal, 6},
    {"_CARMAX_outlier_Cauchy_fixed_sigma_marginal", (DL_FUNC) &_CARMAX_outlier_Cauchy_fixed_sigma_marginal, 6},
    {"_CARMAX_outlier_ind_Normal_marginal", (DL_FUNC) &_CARMAX_outlier_ind_Normal_marginal, 6},
    {"_CARMAX_outlier_Normal_fixed_sigma_marginal", (DL_FUNC) &_CARMAX_outlier_Normal_fixed_sigma_marginal, 6},
    {"_CARMAX_rcpp_hello_world", (DL_FUNC) &_CARMAX_rcpp_hello_world, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_CARMAX(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
