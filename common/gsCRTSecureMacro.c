#include "gsPlatform.h"

#ifdef CRT_SECURE_ENABLE
struct tm* gmtime_secure(const time_t* t) {
	static struct tm tm;
	gmtime_s(&tm, t);
	return &tm;
}

FILE* fopen_secure(const char* file, const char* mode) {
	FILE* fp = NULL;
	fopen_s(&fp, file, mode);
	return fp;
}

char* ctime_secure(const time_t* t) {
	static char buffer[27]; // Contains exactly 26 characters from IBM ctime ref
	ctime_s(buffer, _countof(buffer), t);
	return buffer;
}
#endif
