
#ifndef SGL_API_H
#define SGL_API_H

#ifdef SGL_STATIC_DEFINE
#  define SGL_API
#  define SGL_NO_EXPORT
#else
#  ifndef SGL_API
#    ifdef libsoftgl_EXPORTS
        /* We are building this library */
#      define SGL_API __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define SGL_API __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef SGL_NO_EXPORT
#    define SGL_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef SGL_DEPRECATED
#  define SGL_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef SGL_DEPRECATED_EXPORT
#  define SGL_DEPRECATED_EXPORT SGL_API SGL_DEPRECATED
#endif

#ifndef SGL_DEPRECATED_NO_EXPORT
#  define SGL_DEPRECATED_NO_EXPORT SGL_NO_EXPORT SGL_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef SGL_NO_DEPRECATED
#    define SGL_NO_DEPRECATED
#  endif
#endif

#endif /* SGL_API_H */
