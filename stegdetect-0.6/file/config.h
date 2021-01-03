/* config.h.  Generated automatically by configure.  */
/* config.h.in.  Generated automatically from configure.in by autoheader.  */
/* Autoheader needs me */
#define PACKAGE "file"

/* Autoheader needs me */
#define VERSION "3.37"

/* Define if builtin ELF support is enabled.  */
/* #undef BUILTIN_ELF */

/* Define if ELF core file support is enabled.  */
#define ELFCORE 1

/* Define if the `long long' type works.  */
#define HAVE_LONG_LONG 1

/* Define if we have "tm_isdst" in "struct tm".  */
#define HAVE_TM_ISDST 1

/* Define if we have a global "int" variable "daylight".  */
#define HAVE_DAYLIGHT 1

/* Define to `unsigned char' if standard headers don't define.  */
/* #undef uint8_t */

/* Define to `unsigned short' if standard headers don't define.  */
/* #undef uint16_t */

/* Define to `unsigned int' if standard headers don't define.  */
/* #undef uint32_t */

/* Define to `unsigned long long', if available, or `unsigned long', if
   standard headers don't define.  */
#define uint64_t unsigned long long

/* FIXME: These have to be added manually because autoheader doesn't know
   about AC_CHECK_SIZEOF_INCLUDES.  */

/* The number of bytes in a uint8_t.  */
#define SIZEOF_UINT8_T 0

/* The number of bytes in a uint16_t.  */
#define SIZEOF_UINT16_T 0

/* The number of bytes in a uint32_t.  */
#define SIZEOF_UINT32_T 0

/* The number of bytes in a uint64_t.  */
#define SIZEOF_UINT64_T 8

/* Define if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define if you have the `mmap' function. */
#define HAVE_MMAP 1

/* Define if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define if you have the `strtoul' function. */
#define HAVE_STRTOUL 1

/* Define if `st_rdev' is member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_RDEV 1

/* Define if your `struct stat' has `st_rdev'. Deprecated, use
   `HAVE_STRUCT_STAT_ST_RDEV' instead. */
#define HAVE_ST_RDEV 1

/* Define if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define if you have <sys/wait.h> that is POSIX.1 compatible. */
#define HAVE_SYS_WAIT_H 1

/* Define if you have tm_size */
#define HAVE_TM_ZONE 1

/* Define if you have tzname */
#define HAVE_TZNAME 1

/* Define if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define if `major', `minor', and `makedev' are declared in <mkdev.h>. */
/* #undef MAJOR_IN_MKDEV */

/* Define if `major', `minor', and `makedev' are declared in <sysmacros.h>. */
#define MAJOR_IN_SYSMACROS 1

/* Name of package */
#define PACKAGE "file"

/* Define if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Version number of package */
#define VERSION "3.37"

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `long' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `unsigned' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `unsigned short' if <sys/types.h> does not define. */
/* #undef uint16_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef uint32_t */

/* Define to `unsigned char' if <sys/types.h> does not define. */
/* #undef uint8_t */
