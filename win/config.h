/* config.h.  Generated manually for windows / vc++ 6.0 */

/* Define if the SMIv1/v2 parser shall be active. */
#define BACKEND_SMI

/* Define if the SMIng parser shall be active. */
#define BACKEND_SMING

/* The default error level at libsmi initialization. */
#define DEFAULT_ERRORLEVEL 3

/* The maximum module import recursion depth. */
#define MAX_LEX_DEPTH 30

/* The full pathname of the global configuration file. */
#define DEFAULT_GLOBALCONFIG "c:/smi/smi.conf"

/* The basename of the per-user configuration file searched in $HOME. */
#define DEFAULT_USERCONFIG ".smirc"

/* The default search path to lookup SMI module files. */
#define DEFAULT_SMIPATH "c:/smi/mibs/ietf;c:/smi/mibs/iana;c:/smi/mibs/irtf;c:/smi/mibs/site;c:/smi/mibs/tubs"

/* The default path separator character. */
#define PATH_SEPARATOR ';'

/* The default path separator character. */
#define DIR_SEPARATOR '\\'

/* The 64 bit integer types, their formats, and their min/max values. */
#ifdef _MSC_VER		/* msvc: max/min are defined in include/limits.h */
#define UINT64_FORMAT "%I64u"
#define INT64_FORMAT  "%I64d"
#define LIBSMI_UINT64_MAX    _UI64_MAX
#define LIBSMI_INT64_MIN     _I64_MIN
#define LIBSMI_INT64_MAX     _I64_MAX
#else
#define UINT64_FORMAT "%llu"
#define INT64_FORMAT  "%lld"
#define LIBSMI_UINT64_MAX    18446744073709551615ULL
#define LIBSMI_INT64_MIN     -9223372036854775808LL
#define LIBSMI_INT64_MAX     9223372036854775807LL
#endif

/* Define if dmalloc.h is present and shall be used. */
#undef HAVE_DMALLOC_H

/* Define if getopt.h (argv[] option parser) is present. */
#undef HAVE_GETOPT_H

/* Define if pwd.h (/etc/passwd database) is present. */
#undef HAVE_PWD_H

/* Define if the string-to-long-long function is present in libc. */
#undef HAVE_STRTOLL

/* Define if the string-to-quad function (BSD) is present in libc. */
#undef HAVE_STRTOQ

/* Define if the string-to-unsigned-long-long function is present in libc. */
#undef HAVE_STRTOULL

/* Define if the string-to-unsigned-quad function (BSD) is present in libc. */
#undef HAVE_STRTOUQ

/* Define if the timegm() function is present in libc. */
#undef HAVE_TIMEGM

/* Define if you have the snprintf function.  */
#define HAVE_SNPRINTF 1

/* Define if you have the vsnprintf function.  */
#undef HAVE_VSNPRINTF

/* Define if the win.h header file is present. */
#define HAVE_WIN_H 1

/* Name of package */
#define PACKAGE "libsmi"

/* Version number of package */
#define VERSION "0.3.1"
