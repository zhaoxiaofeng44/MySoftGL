NAME=test_prog
WASM=$(NAME).wasm
EMCC_FLAGS= -DLOTTIE_WASM -O0 -g4 -s WASM=1 -s ALLOW_MEMORY_GROWTH=1  -s ERROR_ON_UNDEFINED_SYMBOLS=0 --no-entry -std=c++14 -Wc++11-extensions -I././inc -I././vs2019 -I./vector -I./vector/freetype -I./lottie
EMCC_FUNC_FLAGS= -s EXPORTED_FUNCTIONS=['_testLottieWasm']

SRC:=./main.cpp ./vector/stb/stb_image.cpp ./vector/freetype/v_ft_math.cpp ./vector/freetype/v_ft_raster.cpp ./vector/freetype/v_ft_stroker.cpp ./vector/vrect.cpp ./vector/vdasher.cpp ./vector/vbrush.cpp ./vector/vbitmap.cpp ./vector/vpainter.cpp ./vector/vdrawhelper_common.cpp ./vector/vdrawhelper.cpp ./vector/vdrawhelper_sse2.cpp ./vector/vdrawhelper_neon.cpp ./vector/vrle.cpp ./vector/vpath.cpp ./vector/vpathmesure.cpp ./vector/vmatrix.cpp ./vector/velapsedtimer.cpp ./vector/vdebug.cpp ./vector/vinterpolator.cpp ./vector/vbezier.cpp ./vector/vraster.cpp ./vector/vdrawable.cpp ./vector/vimageloader.cpp ./vector/varenaalloc.cpp ./lottie/lottieitem.cpp ./lottie/lottieitem_capi.cpp ./lottie/lottieloader.cpp ./lottie/lottiemodel.cpp ./lottie/lottieproxymodel.cpp ./lottie/lottieparser.cpp ./lottie/lottieanimation.cpp ./lottie/lottiekeypath.cpp ./binding/c/lottieanimation_capi.cpp

all: $(WASM)

clean:
	rm -f $(HEADER) $(WASM)

.PHONY: all clean

$(WASM): $(SRC)
	emcc $(SRC) -o $@ $(EMCC_FLAGS) $(EMCC_FUNC_FLAGS)
