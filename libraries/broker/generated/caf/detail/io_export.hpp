
#ifndef CAF_IO_EXPORT_H
#define CAF_IO_EXPORT_H

#ifdef THIRDPARTY_CAF_CORE_STATIC_DEFINE
#  define CAF_IO_EXPORT
#  define THIRDPARTY_CAF_CORE_NO_EXPORT
#else
#  ifndef CAF_IO_EXPORT
#    ifdef thirdparty_caf_core_EXPORTS
        /* We are building this library */
#      define CAF_IO_EXPORT 
#    else
        /* We are using this library */
#      define CAF_IO_EXPORT 
#    endif
#  endif

#  ifndef THIRDPARTY_CAF_CORE_NO_EXPORT
#    define THIRDPARTY_CAF_CORE_NO_EXPORT 
#  endif
#endif

#ifndef THIRDPARTY_CAF_CORE_DEPRECATED
#  define THIRDPARTY_CAF_CORE_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef THIRDPARTY_CAF_CORE_DEPRECATED_EXPORT
#  define THIRDPARTY_CAF_CORE_DEPRECATED_EXPORT CAF_IO_EXPORT THIRDPARTY_CAF_CORE_DEPRECATED
#endif

#ifndef THIRDPARTY_CAF_CORE_DEPRECATED_NO_EXPORT
#  define THIRDPARTY_CAF_CORE_DEPRECATED_NO_EXPORT THIRDPARTY_CAF_CORE_NO_EXPORT THIRDPARTY_CAF_CORE_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef THIRDPARTY_CAF_CORE_NO_DEPRECATED
#    define THIRDPARTY_CAF_CORE_NO_DEPRECATED
#  endif
#endif

#endif /* CAF_IO_EXPORT_H */
