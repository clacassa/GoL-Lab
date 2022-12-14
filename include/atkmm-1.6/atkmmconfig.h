/* atkmm library configuration header */

#ifndef ATKMMCONFIG_H_INCLUDED
#define ATKMMCONFIG_H_INCLUDED

#include <glibmmconfig.h>

/* Define to omit deprecated API from the library. */
/* #undef ATKMM_DISABLE_DEPRECATED */

/* Major version number of atkmm. */
#define ATKMM_MAJOR_VERSION 2

/* Minor version number of atkmm. */
#define ATKMM_MINOR_VERSION 28

/* Micro version number of atkmm. */
#define ATKMM_MICRO_VERSION 2

/* Define when building atkmm as a static library. */
/* #undef ATKMM_STATIC_LIB */

/* Enable DLL-specific stuff only when not building a static library */
#if !defined(ATKMM_STATIC_LIB) && ((defined(__MINGW32__) && !defined(__CYGWIN__)) || defined (_MSC_VER)) && !defined (ATKMM_USE_GENDEF)
# define ATKMM_DLL 1
#endif

#ifdef ATKMM_DLL
# ifdef ATKMM_BUILD
#  define ATKMM_API __declspec(dllexport)
# elif !defined (__GNUC__)
#  define ATKMM_API __declspec(dllimport)
# else /* don't dllimport classes/methods on GCC/MinGW */
#  define ATKMM_API
# endif
#else
# define ATKMM_API
#endif

#endif /* !ATKMMCONFIG_H_INCLUDED */
