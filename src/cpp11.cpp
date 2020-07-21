// Generated by cpp11: do not edit by hand


#include "cpp11/declarations.hpp"

// fill.cpp
SEXP fillDown(SEXP x);
extern "C" SEXP _tidyr_fillDown(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(fillDown(cpp11::unmove(cpp11::as_cpp<SEXP>(x))));
  END_CPP11
}
// fill.cpp
SEXP fillUp(SEXP x);
extern "C" SEXP _tidyr_fillUp(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(fillUp(cpp11::unmove(cpp11::as_cpp<SEXP>(x))));
  END_CPP11
}
// melt.cpp
cpp11::list melt_dataframe(cpp11::data_frame data, const cpp11::integers& id_ind, const cpp11::integers& measure_ind, cpp11::strings variable_name, cpp11::strings value_name, cpp11::sexp attrTemplate, bool factorsAsStrings, bool valueAsFactor, bool variableAsFactor);
extern "C" SEXP _tidyr_melt_dataframe(SEXP data, SEXP id_ind, SEXP measure_ind, SEXP variable_name, SEXP value_name, SEXP attrTemplate, SEXP factorsAsStrings, SEXP valueAsFactor, SEXP variableAsFactor) {
  BEGIN_CPP11
    return cpp11::as_sexp(melt_dataframe(cpp11::unmove(cpp11::as_cpp<cpp11::data_frame>(data)), cpp11::unmove(cpp11::as_cpp<const cpp11::integers&>(id_ind)), cpp11::unmove(cpp11::as_cpp<const cpp11::integers&>(measure_ind)), cpp11::unmove(cpp11::as_cpp<cpp11::strings>(variable_name)), cpp11::unmove(cpp11::as_cpp<cpp11::strings>(value_name)), cpp11::unmove(cpp11::as_cpp<cpp11::sexp>(attrTemplate)), cpp11::unmove(cpp11::as_cpp<bool>(factorsAsStrings)), cpp11::unmove(cpp11::as_cpp<bool>(valueAsFactor)), cpp11::unmove(cpp11::as_cpp<bool>(variableAsFactor))));
  END_CPP11
}
// simplifyPieces.cpp
cpp11::list simplifyPieces(cpp11::list pieces, int p, bool fillLeft);
extern "C" SEXP _tidyr_simplifyPieces(SEXP pieces, SEXP p, SEXP fillLeft) {
  BEGIN_CPP11
    return cpp11::as_sexp(simplifyPieces(cpp11::unmove(cpp11::as_cpp<cpp11::list>(pieces)), cpp11::unmove(cpp11::as_cpp<int>(p)), cpp11::unmove(cpp11::as_cpp<bool>(fillLeft))));
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _tidyr_fillDown(SEXP);
extern SEXP _tidyr_fillUp(SEXP);
extern SEXP _tidyr_melt_dataframe(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _tidyr_simplifyPieces(SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_tidyr_fillDown",       (DL_FUNC) &_tidyr_fillDown,       1},
    {"_tidyr_fillUp",         (DL_FUNC) &_tidyr_fillUp,         1},
    {"_tidyr_melt_dataframe", (DL_FUNC) &_tidyr_melt_dataframe, 9},
    {"_tidyr_simplifyPieces", (DL_FUNC) &_tidyr_simplifyPieces, 3},
    {NULL, NULL, 0}
};
}

extern "C" void R_init_tidyr(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}

