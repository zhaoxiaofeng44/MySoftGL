//#define LOTTIE_MODULE
//
//#ifdef LOTTIE_MODULE
//#define LOTTIE_IMAGE_MODULE_SUPPORT
//#endif
//
//#define LOTTIE_IMAGE_MODULE_PLUGIN "librlottie-image-loader.dylib"
//
//#define LOTTIE_THREAD
//
//#ifdef LOTTIE_THREAD
//#define LOTTIE_THREAD_SUPPORT
//#endif
//
//#define LOTTIE_CACHE
//
//#ifdef LOTTIE_CACHE
//#define LOTTIE_CACHE_SUPPORT
//#endif

#define STD_FUTURE_SURFACE void
extern "C" {
extern void ext_print(char * dst);
extern void ext_dump(int a);
extern void ext_bmp(void* dst);
}