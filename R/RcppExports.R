# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

C_package_onLoad <- function(pkg_namespace) {
    invisible(.Call(`_GCSConnection_C_package_onLoad`, pkg_namespace))
}

get_bucket_connection <- function(bucket, file, is_read, is_text, UTF8, auto_open, buff_length, description, open_mode, billing_project) {
    .Call(`_GCSConnection_get_bucket_connection`, bucket, file, is_read, is_text, UTF8, auto_open, buff_length, description, open_mode, billing_project)
}

