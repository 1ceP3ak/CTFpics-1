/* config.h.  Generated automatically by configure.  */
/* config.h.in.  Generated automatically from configure.in by autoheader.  */
/* Define to the path where the rules.ini file can be found */
#define _PATH_RULES "/usr/local/share/stegbreak/rules.ini"

/* Define to `unsigned long long' if <sys/types.h> doesn't define.  */
/* #undef u_int64_t */

/* Define to `unsigned int' if <sys/types.h> doesn't define.  */
/* #undef u_int32_t */

/* Define to `unsigned short' if <sys/types.h> doesn't define.  */
/* #undef u_int16_t */

/* Define to `unsigned char' if <sys/types.h> doesn't define.  */
/* #undef u_int8_t */

/* Define if timeradd is defined in <sys/time.h> */
#define HAVE_TIMERADD 1
#ifndef HAVE_TIMERADD
#define timeradd(tvp, uvp, vvp)                                         \
        do {                                                            \
                (vvp)->tv_sec = (tvp)->tv_sec + (uvp)->tv_sec;          \
                (vvp)->tv_usec = (tvp)->tv_usec + (uvp)->tv_usec;       \
                if ((vvp)->tv_usec >= 1000000) {                        \
                        (vvp)->tv_sec++;                                \
                        (vvp)->tv_usec -= 1000000;                      \
                }                                                       \
        } while (0)
#define	timersub(tvp, uvp, vvp)						\
	do {								\
		(vvp)->tv_sec = (tvp)->tv_sec - (uvp)->tv_sec;		\
		(vvp)->tv_usec = (tvp)->tv_usec - (uvp)->tv_usec;	\
		if ((vvp)->tv_usec < 0) {				\
			(vvp)->tv_sec--;				\
			(vvp)->tv_usec += 1000000;			\
		}							\
	} while (0)
#endif /* !HAVE_TIMERADD */

/* Define if you have the `dirname' function. */
#define HAVE_DIRNAME 1

/* Define if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if you have the `MD5Update' function. */
/* #undef HAVE_MD5UPDATE */

/* Define if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

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

/* Define if you have the `strlcat' function. */
/* #undef HAVE_STRLCAT */

/* Define if you have the `strlcpy' function. */
/* #undef HAVE_STRLCPY */

/* Define if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define if you have the `warnx' function. */
#define HAVE_WARNX 1

/* Name of package */
#define PACKAGE "stegdetect"

/* Define if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "0.6"

/* Define if your processor stores words with the most significant byte first
   (like Motorola and SPARC, unlike Intel and VAX). */
/* #undef WORDS_BIGENDIAN */

/* Define as `__inline' if that's what the C compiler calls it, or to nothing
   if it is not supported. */
/* #undef inline */

/* Define to `unsigned' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `unsigned short' if <sys/types.h> does not define. */
/* #undef u_int16_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef u_int32_t */

/* Define to `unsigned char' if <sys/types.h> does not define. */
/* #undef u_int8_t */

/* Prototypes for missing functions */
#ifndef HAVE_STRLCAT
size_t	 strlcat(char *, const char *, size_t);
#endif

#ifndef HAVE_STRLCPY
size_t	 strlcpy(char *, const char *, size_t);
#endif

#ifndef HAVE_BASENAME
char	*basename(const char *);
char	*dirname(const char *);
#endif
