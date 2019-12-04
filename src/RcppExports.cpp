// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "googleCloudStorageStream_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// C_package_onLoad
void C_package_onLoad(SEXP pkg_namespace);
RcppExport SEXP _googleCloudStorageStream_C_package_onLoad(SEXP pkg_namespaceSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pkg_namespace(pkg_namespaceSEXP);
    C_package_onLoad(pkg_namespace);
    return R_NilValue;
END_RCPP
}
// get_bucket_connection
SEXP get_bucket_connection(std::string credentials, std::string project, std::string bucket, std::string file, bool isRead, bool istext, bool UTF8, bool autoOpen, double readBuffLength);
RcppExport SEXP _googleCloudStorageStream_get_bucket_connection(SEXP credentialsSEXP, SEXP projectSEXP, SEXP bucketSEXP, SEXP fileSEXP, SEXP isReadSEXP, SEXP istextSEXP, SEXP UTF8SEXP, SEXP autoOpenSEXP, SEXP readBuffLengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type credentials(credentialsSEXP);
    Rcpp::traits::input_parameter< std::string >::type project(projectSEXP);
    Rcpp::traits::input_parameter< std::string >::type bucket(bucketSEXP);
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    Rcpp::traits::input_parameter< bool >::type isRead(isReadSEXP);
    Rcpp::traits::input_parameter< bool >::type istext(istextSEXP);
    Rcpp::traits::input_parameter< bool >::type UTF8(UTF8SEXP);
    Rcpp::traits::input_parameter< bool >::type autoOpen(autoOpenSEXP);
    Rcpp::traits::input_parameter< double >::type readBuffLength(readBuffLengthSEXP);
    rcpp_result_gen = Rcpp::wrap(get_bucket_connection(credentials, project, bucket, file, isRead, istext, UTF8, autoOpen, readBuffLength));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_googleCloudStorageStream_C_package_onLoad", (DL_FUNC) &_googleCloudStorageStream_C_package_onLoad, 1},
    {"_googleCloudStorageStream_get_bucket_connection", (DL_FUNC) &_googleCloudStorageStream_get_bucket_connection, 9},
    {NULL, NULL, 0}
};

void init_altrep(DllInfo* dll);
RcppExport void R_init_googleCloudStorageStream(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
    init_altrep(dll);
}
