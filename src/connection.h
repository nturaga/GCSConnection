#ifdef __cplusplus
#include <Rcpp.h>
extern "C" {
#else
#include "Rinternals.h"
#include <stdbool.h>
#endif
	void* createBuckekConnectionCPP(const char* credentials, const char* project, const char* bucket, 
                                 const char* file, bool canRead, bool canWrite);
	bool openbucketConnectionCPP(void* cbc);
	bool closebucketConnectionCPP(void* cbc);
	void destropbucketConnectionCPP(void* cbc);
	size_t readbucketConnectionCPP(void* target, size_t size, size_t nitems, void* cbc);
	size_t writebucketConnectionCPP(const void* target, size_t size, size_t nitems, void* cbc);
	double seekbucketConnectionCPP(double where, int origin, void* cbc);
#ifdef __cplusplus
}
#endif