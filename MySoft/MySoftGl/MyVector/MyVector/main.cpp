//
//  main.cpp
//  MyVector
//
//  Created by zhaoxiaofeng on 2022/9/28.
//  Copyright © 2022 zhaoxiaofeng. All rights reserved.
//

#include <iostream>
#include "rlottie.h"
#include <limits.h>
#include <setjmp.h>
#include <stddef.h>
#include <string.h>
extern "C" {

#define WASM_EXPORT __attribute__((used)) __attribute__((visibility ("default")))

#ifdef LOTTIE_WASM

#else
//////
    
    
    
    
//     int W = 500;
//     int H = 500;
    
//     //#define FrameSize 960*960  //视频帧大小
//     int width = W, height = H;
// #define FrameNum 300 // yuv帧数
//     static const double S_PI = 3.14159265358979323846;
// #define scos(x) cos((double)(x))
// #define stan(x) tan((double)(x))
// #define ssqrt(x) sqrt((double)(x))
// #define ET_SIZE 300
    
//     char errorText[ET_SIZE];
    
//     void errorMsg(const char *msg)
//     {
//         printf("error:%s ", msg);
//         exit(-1);
//     }
    
//     void write_bmpheader(unsigned char *bitmap, int offset, int bytes, int value)
//     {
//         int i;
//         for (i = 0; i < bytes; i++)
//             bitmap[offset + i] = (value >> (i << 3)) & 0xFF;
//     }
    
//     unsigned char *convertToBmp(unsigned char *inputImg, int width, int height, int *ouputSize)
//     {
//         /*create a bmp format file*/
//         int bitmap_x = (int)(width * 3 / 4) * 4;
//         unsigned char *bitmap = (unsigned char *)malloc(sizeof(unsigned char) * height * bitmap_x + 54);
        
//         bitmap[0] = 'B';
//         bitmap[1] = 'M';
//         write_bmpheader(bitmap, 2, 4, height * bitmap_x + 54); // whole file size
//         write_bmpheader(bitmap, 0xA, 4, 54);                   // offset before bitmap raw data
//         write_bmpheader(bitmap, 0xE, 4, 40);                   // length of bitmap info header
//         write_bmpheader(bitmap, 0x12, 4, width);               // width
//         write_bmpheader(bitmap, 0x16, 4, height);              // height
//         write_bmpheader(bitmap, 0x1A, 2, 1);
//         write_bmpheader(bitmap, 0x1C, 2, 24);                // bit per pixel
//         write_bmpheader(bitmap, 0x1E, 4, 0);                 // compression
//         write_bmpheader(bitmap, 0x22, 4, height * bitmap_x); // size of bitmap raw data
        
//         for (int i = 0x26; i < 0x36; i++)
//             bitmap[i] = 0;
//         int k = 54;
//         for (int i = height - 1; i >= 0; i--)
//         {
//             int j;
//             for (j = 0; j < width; j++)
//             {
//                 int index = i * width + j;
//                 for (int l = 0; l < 3; l++)
//                 {
//                     unsigned char a = inputImg[index * 4 + l];
//                     std::cout << "ext_bmp: a " << (int)a << std::endl;
//                     bitmap[k++] = a;
//                 }
//             }
//             j *= 3;
//             while (j < bitmap_x)
//             {
//                 bitmap[k++] = 0;
//                 j++;
//             }
//         }
//         *ouputSize = k;
//         return bitmap;
//     }
    
//     void saveToBmp(unsigned char *inputImg, int width, int height, char *outputFileName)
//     {
//         int size;
//         unsigned char *bmp = convertToBmp(inputImg, width, height, &size);
//         FILE *fp = fopen(outputFileName, "wb+");
//         if (fp == NULL)
//         {
//             sprintf(errorText, "Could not open file: %s", outputFileName);
//             errorMsg(errorText);
//         }
//         fwrite(bmp, 1, size, fp);
//         fclose(fp);
//         free(bmp);
//     }
    
//         extern void ext_dump(int a){
//             std::cout << a ;
//         };
//         extern void ext_print(char * dst){
//              std::cout << dst;
//         };
//         extern void ext_bmp(void * dst){
//             //saveToBmp(dst,  width,  height, outputFileName);
//         };


//         extern int my_setjmp(void* s){
//             return setjmp((int*)s);
//         }
//         extern void my_longjmp(void* s, int i){
//             longjmp((int*)s, i);
//         }
#endif


const char *resource = "{\"v\":\"4.12.3\",\"fr\":60,\"ip\":0,\"op\":241,\"w\":800,\"h\":600,\"nm\":\"worm_lottie\",\"ddd\":0,\"assets\":[{\"id\":\"comp_0\",\"layers\":[{\"ddd\":0,\"ind\":1,\"ty\":4,\"nm\":\"Shape Layer 8\",\"sr\":1,\"ks\":{\"o\":{\"a\":0,\"k\":100,\"ix\":11},\"r\":{\"a\":0,\"k\":0,\"ix\":10},\"p\":{\"a\":0,\"k\":[400,300,0],\"ix\":2},\"a\":{\"a\":0,\"k\":[0,0,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100,100],\"ix\":6}},\"ao\":0,\"shapes\":[{\"ty\":\"gr\",\"it\":[{\"ind\":0,\"ty\":\"sh\",\"ix\":1,\"ks\":{\"a\":0,\"k\":{\"i\":[[0,0],[4.75,-5.5]],\"o\":[[0,0],[-4.75,5.5]],\"v\":[[67.125,146.75],[59.375,147.75]],\"c\":false},\"ix\":2},\"nm\":\"Path 1\",\"mn\":\"ADBE Vector Shape - Group\",\"hd\":false},{\"ty\":\"st\",\"c\":{\"a\":0,\"k\":[0.286274509804,0.301960784314,0.419607873056,1],\"ix\":3},\"o\":{\"a\":0,\"k\":100,\"ix\":4},\"w\":{\"a\":0,\"k\":2,\"ix\":5},\"lc\":2,\"lj\":1,\"ml\":4,\"nm\":\"Stroke 1\",\"mn\":\"ADBE Vector Graphic - Stroke\",\"hd\":false},{\"ty\":\"tr\",\"p\":{\"a\":0,\"k\":[0,0],\"ix\":2},\"a\":{\"a\":0,\"k\":[0,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100],\"ix\":3},\"r\":{\"a\":0,\"k\":0,\"ix\":6},\"o\":{\"a\":0,\"k\":100,\"ix\":7},\"sk\":{\"a\":0,\"k\":0,\"ix\":4},\"sa\":{\"a\":0,\"k\":0,\"ix\":5},\"nm\":\"Transform\"}],\"nm\":\"Shape 1\",\"np\":3,\"cix\":2,\"ix\":1,\"mn\":\"ADBE Vector Group\",\"hd\":false}],\"ip\":0,\"op\":241,\"st\":0,\"bm\":0},{\"ddd\":0,\"ind\":2,\"ty\":4,\"nm\":\"Shape Layer 7\",\"sr\":1,\"ks\":{\"o\":{\"a\":0,\"k\":100,\"ix\":11},\"r\":{\"a\":0,\"k\":0,\"ix\":10},\"p\":{\"a\":0,\"k\":[406.875,329,0],\"ix\":2},\"a\":{\"a\":0,\"k\":[0,0,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100,100],\"ix\":6}},\"ao\":0,\"shapes\":[{\"ty\":\"gr\",\"it\":[{\"ind\":0,\"ty\":\"sh\",\"ix\":1,\"ks\":{\"a\":0,\"k\":{\"i\":[[2.071,0],[0,-2.071],[-2.071,0],[0,2.071]],\"o\":[[-2.071,0],[0,2.071],[2.071,0],[0,-2.071]],\"v\":[[0,-3.75],[-3.75,0],[0,3.75],[3.75,0]],\"c\":true},\"ix\":2},\"nm\":\"Path 1\",\"mn\":\"ADBE Vector Shape - Group\",\"hd\":false},{\"ty\":\"fl\",\"c\":{\"a\":0,\"k\":[0.286274509804,0.301960784314,0.419607873056,1],\"ix\":4},\"o\":{\"a\":0,\"k\":100,\"ix\":5},\"r\":1,\"nm\":\"Fill 1\",\"mn\":\"ADBE Vector Graphic - Fill\",\"hd\":false},{\"ty\":\"tr\",\"p\":{\"a\":0,\"k\":[54.125,110.875],\"ix\":2},\"a\":{\"a\":0,\"k\":[0,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[44.414,44.414],\"ix\":3},\"r\":{\"a\":0,\"k\":0,\"ix\":6},\"o\":{\"a\":0,\"k\":100,\"ix\":7},\"sk\":{\"a\":0,\"k\":0,\"ix\":4},\"sa\":{\"a\":0,\"k\":0,\"ix\":5},\"nm\":\"Transform\"}],\"nm\":\"Ellipse 1\",\"np\":3,\"cix\":2,\"ix\":1,\"mn\":\"ADBE Vector Group\",\"hd\":false}],\"ip\":0,\"op\":241,\"st\":0,\"bm\":0},{\"ddd\":0,\"ind\":3,\"ty\":4,\"nm\":\"Shape Layer 6\",\"sr\":1,\"ks\":{\"o\":{\"a\":0,\"k\":100,\"ix\":11},\"r\":{\"a\":0,\"k\":0,\"ix\":10},\"p\":{\"a\":0,\"k\":[400,300,0],\"ix\":2},\"a\":{\"a\":0,\"k\":[0,0,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100,100],\"ix\":6}},\"ao\":0,\"shapes\":[{\"ty\":\"gr\",\"it\":[{\"ind\":0,\"ty\":\"sh\",\"ix\":1,\"ks\":{\"a\":0,\"k\":{\"i\":[[0,0],[0,0]],\"o\":[[0,0],[0,0]],\"v\":[[-167,157],[141,157]],\"c\":false},\"ix\":2},\"nm\":\"Path 1\",\"mn\":\"ADBE Vector Shape - Group\",\"hd\":false},{\"ty\":\"st\",\"c\":{\"a\":0,\"k\":[1,1,1,1],\"ix\":3},\"o\":{\"a\":0,\"k\":100,\"ix\":4},\"w\":{\"a\":0,\"k\":3,\"ix\":5},\"lc\":2,\"lj\":1,\"ml\":4,\"d\":[{\"n\":\"d\",\"nm\":\"dash\",\"v\":{\"a\":0,\"k\":10,\"ix\":1}},{\"n\":\"o\",\"nm\":\"offset\",\"v\":{\"a\":1,\"k\":[{\"i\":{\"x\":[0.833],\"y\":[1]},\"o\":{\"x\":[0.167],\"y\":[0.167]},\"n\":[\"0p833_1_0p167_0p167\"],\"t\":0,\"s\":[0],\"e\":[60]},{\"t\":60,\"s\":[60],\"h\":1},{\"t\":120,\"s\":[60],\"h\":1}],\"ix\":7,\"x\":\"var $bm_rt;\\n$bm_rt = loopOut('cycle');\"}}],\"nm\":\"Stroke 1\",\"mn\":\"ADBE Vector Graphic - Stroke\",\"hd\":false},{\"ty\":\"tr\",\"p\":{\"a\":0,\"k\":[0,0],\"ix\":2},\"a\":{\"a\":0,\"k\":[0,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100],\"ix\":3},\"r\":{\"a\":0,\"k\":0,\"ix\":6},\"o\":{\"a\":0,\"k\":100,\"ix\":7},\"sk\":{\"a\":0,\"k\":0,\"ix\":4},\"sa\":{\"a\":0,\"k\":0,\"ix\":5},\"nm\":\"Transform\"}],\"nm\":\"Shape 1\",\"np\":3,\"cix\":2,\"ix\":1,\"mn\":\"ADBE Vector Group\",\"hd\":false}],\"ip\":0,\"op\":241,\"st\":0,\"bm\":0},{\"ddd\":0,\"ind\":4,\"ty\":4,\"nm\":\"Shape Layer 5\",\"parent\":8,\"sr\":1,\"ks\":{\"o\":{\"a\":0,\"k\":100,\"ix\":11},\"r\":{\"a\":1,\"k\":[{\"i\":{\"x\":[0.833],\"y\":[0.833]},\"o\":{\"x\":[0.77],\"y\":[0]},\"n\":[\"0p833_0p833_0p77_0\"],\"t\":120,\"s\":[21],\"e\":[11]},{\"i\":{\"x\":[0.833],\"y\":[0.833]},\"o\":{\"x\":[0.167],\"y\":[0.167]},\"n\":[\"0p833_0p833_0p167_0p167\"],\"t\":171,\"s\":[11],\"e\":[21]},{\"i\":{\"x\":[0.833],\"y\":[0.833]},\"o\":{\"x\":[0.167],\"y\":[0.167]},\"n\":[\"0p833_0p833_0p167_0p167\"],\"t\":175,\"s\":[21],\"e\":[21]},{\"t\":240}],\"ix\":10,\"x\":\"var $bm_rt;\\nvar amp, freq, decay, n, t;\\ntry {\\n    amp = div(effect('Rotation - Overshoot')('ADBE Slider Control-0001'), 2.5), freq = div(effect('Rotation - Bounce')('ADBE Slider Control-0001'), 20), decay = div(effect('Rotation - Friction')('ADBE Slider Control-0001'), 20), n = 0, 0 < numKeys && (n = nearestKey(time).index, key(n).time > time && n--), t = 0 === n ? 0 : time - key(n).time, $bm_rt = 0 < n ? (v = velocityAtTime(sub(key(n).time, div(thisComp.frameDuration, 10))), sum(value, div(mul(mul(div(v, 100), amp), Math.sin(mul(mul(mul(freq, t), 2), Math.PI))), Math.exp(mul(decay, t))))) : value;\\n} catch (e$$4) {\\n    $bm_rt = value = value;\\n}\"},\"p\":{\"a\":0,\"k\":[0.08,-1.677,0],\"ix\":2},\"a\":{\"a\":0,\"k\":[245.226,98.5,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100,100],\"ix\":6}},\"ao\":0,\"ef\":[{\"ty\":5,\"nm\":\"Rotation - Overshoot\",\"np\":3,\"mn\":\"ADBE Slider Control\",\"ix\":1,\"en\":1,\"ef\":[{\"ty\":0,\"nm\":\"Slider\",\"mn\":\"ADBE Slider Control-0001\",\"ix\":1,\"v\":{\"a\":0,\"k\":10,\"ix\":1,\"x\":\"var $bm_rt;\\n$bm_rt = clamp(value, 0, 100);\"}}]},{\"ty\":5,\"nm\":\"Rotation - Bounce\",\"np\":3,\"mn\":\"ADBE Slider Control\",\"ix\":2,\"en\":1,\"ef\":[{\"ty\":0,\"nm\":\"Slider\",\"mn\":\"ADBE Slider Control-0001\",\"ix\":1,\"v\":{\"a\":0,\"k\":30,\"ix\":1,\"x\":\"var $bm_rt;\\n$bm_rt = clamp(value, 0, 100);\"}}]},{\"ty\":5,\"nm\":\"Rotation - Friction\",\"np\":3,\"mn\":\"ADBE Slider Control\",\"ix\":3,\"en\":1,\"ef\":[{\"ty\":0,\"nm\":\"Slider\",\"mn\":\"ADBE Slider Control-0001\",\"ix\":1,\"v\":{\"a\":0,\"k\":60,\"ix\":1,\"x\":\"var $bm_rt;\\n$bm_rt = clamp(value, 0, 100);\"}}]}],\"shapes\":[{\"ty\":\"gr\",\"it\":[{\"ind\":0,\"ty\":\"sh\",\"ix\":1,\"ks\":{\"a\":0,\"k\":{\"i\":[[2.579,0],[0,-2.579],[-2.579,0],[0,2.579]],\"o\":[[-2.579,0],[0,2.579],[2.579,0],[0,-2.579]],\"v\":[[-18.5,3.33],[-23.17,8],[-18.5,12.67],[-13.83,8]],\"c\":true},\"ix\":2},\"nm\":\"Path 1\",\"mn\":\"ADBE Vector Shape - Group\",\"hd\":false},{\"ty\":\"fl\",\"c\":{\"a\":0,\"k\":[1,1,1,1],\"ix\":4},\"o\":{\"a\":0,\"k\":100,\"ix\":5},\"r\":1,\"nm\":\"Fill 1\",\"mn\":\"ADBE Vector Graphic - Fill\",\"hd\":false},{\"ty\":\"tr\",\"p\":{\"a\":0,\"k\":[280,66],\"ix\":2},\"a\":{\"a\":0,\"k\":[0,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100],\"ix\":3},\"r\":{\"a\":0,\"k\":0,\"ix\":6},\"o\":{\"a\":0,\"k\":100,\"ix\":7},\"sk\":{\"a\":0,\"k\":0,\"ix\":4},\"sa\":{\"a\":0,\"k\":0,\"ix\":5},\"nm\":\"Transform\"}],\"nm\":\"Ellipse 1\",\"np\":3,\"cix\":2,\"ix\":1,\"mn\":\"ADBE Vector Group\",\"hd\":false},{\"ty\":\"gr\",\"it\":[{\"ind\":0,\"ty\":\"sh\",\"ix\":1,\"ks\":{\"a\":0,\"k\":{\"i\":[[0,0],[-18,3]],\"o\":[[0,0],[18,-3]],\"v\":[[245.5,98.5],[260,75]],\"c\":false},\"ix\":2},\"nm\":\"Path 1\",\"mn\":\"ADBE Vector Shape - Group\",\"hd\":false},{\"ty\":\"st\",\"c\":{\"a\":0,\"k\":[1,1,1,1],\"ix\":3},\"o\":{\"a\":0,\"k\":100,\"ix\":4},\"w\":{\"a\":0,\"k\":2,\"ix\":5},\"lc\":2,\"lj\":1,\"ml\":4,\"nm\":\"Stroke 1\",\"mn\":\"ADBE Vector Graphic - Stroke\",\"hd\":false},{\"ty\":\"tr\",\"p\":{\"a\":0,\"k\":[0,0],\"ix\":2},\"a\":{\"a\":0,\"k\":[0,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100],\"ix\":3},\"r\":{\"a\":0,\"k\":0,\"ix\":6},\"o\":{\"a\":0,\"k\":100,\"ix\":7},\"sk\":{\"a\":0,\"k\":0,\"ix\":4},\"sa\":{\"a\":0,\"k\":0,\"ix\":5},\"nm\":\"Transform\"}],\"nm\":\"Shape 1\",\"np\":3,\"cix\":2,\"ix\":2,\"mn\":\"ADBE Vector Group\",\"hd\":false}],\"ip\":120,\"op\":241,\"st\":120,\"bm\":0},{\"ddd\":0,\"ind\":5,\"ty\":4,\"nm\":\"Shape Layer 4\",\"parent\":8,\"sr\":1,\"ks\":{\"o\":{\"a\":0,\"k\":100,\"ix\":11},\"r\":{\"a\":1,\"k\":[{\"i\":{\"x\":[0.859],\"y\":[1]},\"o\":{\"x\":[0.709],\"y\":[0]},\"n\":[\"0p859_1_0p709_0\"],\"t\":120,\"s\":[0],\"e\":[-10]},{\"i\":{\"x\":[0.833],\"y\":[0.833]},\"o\":{\"x\":[0.325],\"y\":[0]},\"n\":[\"0p833_0p833_0p325_0\"],\"t\":172,\"s\":[-10],\"e\":[0]},{\"i\":{\"x\":[0.833],\"y\":[0.833]},\"o\":{\"x\":[0.167],\"y\":[0.167]},\"n\":[\"0p833_0p833_0p167_0p167\"],\"t\":177,\"s\":[0],\"e\":[0]},{\"t\":240}],\"ix\":10,\"x\":\"var $bm_rt;\\nvar amp, freq, decay, n, t;\\ntry {\\n    amp = div(effect('Rotation - Overshoot')('ADBE Slider Control-0001'), 2.5), freq = div(effect('Rotation - Bounce')('ADBE Slider Control-0001'), 20), decay = div(effect('Rotation - Friction')('ADBE Slider Control-0001'), 20), n = 0, 0 < numKeys && (n = nearestKey(time).index, key(n).time > time && n--), t = 0 === n ? 0 : time - key(n).time, $bm_rt = 0 < n ? (v = velocityAtTime(sub(key(n).time, div(thisComp.frameDuration, 10))), sum(value, div(mul(mul(div(v, 100), amp), Math.sin(mul(mul(mul(freq, t), 2), Math.PI))), Math.exp(mul(decay, t))))) : value;\\n} catch (e$$4) {\\n    $bm_rt = value = value;\\n}\"},\"p\":{\"a\":0,\"k\":[1.226,-4,0],\"ix\":2},\"a\":{\"a\":0,\"k\":[245.226,98.5,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100,100],\"ix\":6}},\"ao\":0,\"ef\":[{\"ty\":5,\"nm\":\"Rotation - Overshoot\",\"np\":3,\"mn\":\"ADBE Slider Control\",\"ix\":1,\"en\":1,\"ef\":[{\"ty\":0,\"nm\":\"Slider\",\"mn\":\"ADBE Slider Control-0001\",\"ix\":1,\"v\":{\"a\":0,\"k\":10,\"ix\":1,\"x\":\"var $bm_rt;\\n$bm_rt = clamp(value, 0, 100);\"}}]},{\"ty\":5,\"nm\":\"Rotation - Bounce\",\"np\":3,\"mn\":\"ADBE Slider Control\",\"ix\":2,\"en\":1,\"ef\":[{\"ty\":0,\"nm\":\"Slider\",\"mn\":\"ADBE Slider Control-0001\",\"ix\":1,\"v\":{\"a\":0,\"k\":30,\"ix\":1,\"x\":\"var $bm_rt;\\n$bm_rt = clamp(value, 0, 100);\"}}]},{\"ty\":5,\"nm\":\"Rotation - Friction\",\"np\":3,\"mn\":\"ADBE Slider Control\",\"ix\":3,\"en\":1,\"ef\":[{\"ty\":0,\"nm\":\"Slider\",\"mn\":\"ADBE Slider Control-0001\",\"ix\":1,\"v\":{\"a\":0,\"k\":60,\"ix\":1,\"x\":\"var $bm_rt;\\n$bm_rt = clamp(value, 0, 100);\"}}]}],\"shapes\":[{\"ty\":\"gr\",\"it\":[{\"ind\":0,\"ty\":\"sh\",\"ix\":1,\"ks\":{\"a\":0,\"k\":{\"i\":[[2.485,0],[0,-2.485],[-2.485,0],[0,2.485]],\"o\":[[-2.485,0],[0,2.485],[2.485,0],[0,-2.485]],\"v\":[[-18.5,3.5],[-23,8],[-18.5,12.5],[-14,8]],\"c\":true},\"ix\":2},\"nm\":\"Path 1\",\"mn\":\"ADBE Vector Shape - Group\",\"hd\":false},{\"ty\":\"fl\",\"c\":{\"a\":0,\"k\":[1,1,1,1],\"ix\":4},\"o\":{\"a\":0,\"k\":100,\"ix\":5},\"r\":1,\"nm\":\"Fill 1\",\"mn\":\"ADBE Vector Graphic - Fill\",\"hd\":false},{\"ty\":\"tr\",\"p\":{\"a\":0,\"k\":[280,66],\"ix\":2},\"a\":{\"a\":0,\"k\":[0,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100],\"ix\":3},\"r\":{\"a\":0,\"k\":0,\"ix\":6},\"o\":{\"a\":0,\"k\":100,\"ix\":7},\"sk\":{\"a\":0,\"k\":0,\"ix\":4},\"sa\":{\"a\":0,\"k\":0,\"ix\":5},\"nm\":\"Transform\"}],\"nm\":\"Ellipse 1\",\"np\":3,\"cix\":2,\"ix\":1,\"mn\":\"ADBE Vector Group\",\"hd\":false},{\"ty\":\"gr\",\"it\":[{\"ind\":0,\"ty\":\"sh\",\"ix\":1,\"ks\":{\"a\":0,\"k\":{\"i\":[[0,0],[-18,3]],\"o\":[[0,0],[18,-3]],\"v\":[[245.5,98.5],[260,75]],\"c\":false},\"ix\":2},\"nm\":\"Path 1\",\"mn\":\"ADBE Vector Shape - Group\",\"hd\":false},{\"ty\":\"st\",\"c\":{\"a\":0,\"k\":[1,1,1,1],\"ix\":3},\"o\":{\"a\":0,\"k\":100,\"ix\":4},\"w\":{\"a\":0,\"k\":2,\"ix\":5},\"lc\":2,\"lj\":1,\"ml\":4,\"nm\":\"Stroke 1\",\"mn\":\"ADBE Vector Graphic - Stroke\",\"hd\":false},{\"ty\":\"tr\",\"p\":{\"a\":0,\"k\":[0,0],\"ix\":2},\"a\":{\"a\":0,\"k\":[0,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100],\"ix\":3},\"r\":{\"a\":0,\"k\":0,\"ix\":6},\"o\":{\"a\":0,\"k\":100,\"ix\":7},\"sk\":{\"a\":0,\"k\":0,\"ix\":4},\"sa\":{\"a\":0,\"k\":0,\"ix\":5},\"nm\":\"Transform\"}],\"nm\":\"Shape 1\",\"np\":3,\"cix\":2,\"ix\":2,\"mn\":\"ADBE Vector Group\",\"hd\":false}],\"ip\":120,\"op\":241,\"st\":120,\"bm\":0},{\"ddd\":0,\"ind\":6,\"ty\":4,\"nm\":\"Shape Layer 3\",\"parent\":8,\"sr\":1,\"ks\":{\"o\":{\"a\":0,\"k\":100,\"ix\":11},\"r\":{\"a\":1,\"k\":[{\"i\":{\"x\":[0.833],\"y\":[0.833]},\"o\":{\"x\":[0.77],\"y\":[0]},\"n\":[\"0p833_0p833_0p77_0\"],\"t\":0,\"s\":[21],\"e\":[4]},{\"i\":{\"x\":[0.833],\"y\":[0.833]},\"o\":{\"x\":[0.167],\"y\":[0.167]},\"n\":[\"0p833_0p833_0p167_0p167\"],\"t\":51,\"s\":[4],\"e\":[21]},{\"i\":{\"x\":[0.833],\"y\":[0.833]},\"o\":{\"x\":[0.167],\"y\":[0.167]},\"n\":[\"0p833_0p833_0p167_0p167\"],\"t\":55,\"s\":[21],\"e\":[21]},{\"t\":120}],\"ix\":10,\"x\":\"var $bm_rt;\\nvar amp, freq, decay, n, t;\\ntry {\\n    amp = div(effect('Rotation - Overshoot')('ADBE Slider Control-0001'), 2.5), freq = div(effect('Rotation - Bounce')('ADBE Slider Control-0001'), 20), decay = div(effect('Rotation - Friction')('ADBE Slider Control-0001'), 20), n = 0, 0 < numKeys && (n = nearestKey(time).index, key(n).time > time && n--), t = 0 === n ? 0 : time - key(n).time, $bm_rt = 0 < n ? (v = velocityAtTime(sub(key(n).time, div(thisComp.frameDuration, 10))), sum(value, div(mul(mul(div(v, 100), amp), Math.sin(mul(mul(mul(freq, t), 2), Math.PI))), Math.exp(mul(decay, t))))) : value;\\n} catch (e$$4) {\\n    $bm_rt = value = value;\\n}\"},\"p\":{\"a\":0,\"k\":[0.08,-1.677,0],\"ix\":2},\"a\":{\"a\":0,\"k\":[245.226,98.5,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100,100],\"ix\":6}},\"ao\":0,\"ef\":[{\"ty\":5,\"nm\":\"Rotation - Overshoot\",\"np\":3,\"mn\":\"ADBE Slider Control\",\"ix\":1,\"en\":1,\"ef\":[{\"ty\":0,\"nm\":\"Slider\",\"mn\":\"ADBE Slider Control-0001\",\"ix\":1,\"v\":{\"a\":0,\"k\":10,\"ix\":1,\"x\":\"var $bm_rt;\\n$bm_rt = clamp(value, 0, 100);\"}}]},{\"ty\":5,\"nm\":\"Rotation - Bounce\",\"np\":3,\"mn\":\"ADBE Slider Control\",\"ix\":2,\"en\":1,\"ef\":[{\"ty\":0,\"nm\":\"Slider\",\"mn\":\"ADBE Slider Control-0001\",\"ix\":1,\"v\":{\"a\":0,\"k\":30,\"ix\":1,\"x\":\"var $bm_rt;\\n$bm_rt = clamp(value, 0, 100);\"}}]},{\"ty\":5,\"nm\":\"Rotation - Friction\",\"np\":3,\"mn\":\"ADBE Slider Control\",\"ix\":3,\"en\":1,\"ef\":[{\"ty\":0,\"nm\":\"Slider\",\"mn\":\"ADBE Slider Control-0001\",\"ix\":1,\"v\":{\"a\":0,\"k\":60,\"ix\":1,\"x\":\"var $bm_rt;\\n$bm_rt = clamp(value, 0, 100);\"}}]}],\"shapes\":[{\"ty\":\"gr\",\"it\":[{\"ind\":0,\"ty\":\"sh\",\"ix\":1,\"ks\":{\"a\":0,\"k\":{\"i\":[[2.579,0],[0,-2.579],[-2.579,0],[0,2.579]],\"o\":[[-2.579,0],[0,2.579],[2.579,0],[0,-2.579]],\"v\":[[-18.5,3.33],[-23.17,8],[-18.5,12.67],[-13.83,8]],\"c\":true},\"ix\":2},\"nm\":\"Path 1\",\"mn\":\"ADBE Vector Shape - Group\",\"hd\":false},{\"ty\":\"fl\",\"c\":{\"a\":0,\"k\":[1,1,1,1],\"ix\":4},\"o\":{\"a\":0,\"k\":100,\"ix\":5},\"r\":1,\"nm\":\"Fill 1\",\"mn\":\"ADBE Vector Graphic - Fill\",\"hd\":false},{\"ty\":\"tr\",\"p\":{\"a\":0,\"k\":[280,66],\"ix\":2},\"a\":{\"a\":0,\"k\":[0,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100],\"ix\":3},\"r\":{\"a\":0,\"k\":0,\"ix\":6},\"o\":{\"a\":0,\"k\":100,\"ix\":7},\"sk\":{\"a\":0,\"k\":0,\"ix\":4},\"sa\":{\"a\":0,\"k\":0,\"ix\":5},\"nm\":\"Transform\"}],\"nm\":\"Ellipse 1\",\"np\":3,\"cix\":2,\"ix\":1,\"mn\":\"ADBE Vector Group\",\"hd\":false},{\"ty\":\"gr\",\"it\":[{\"ind\":0,\"ty\":\"sh\",\"ix\":1,\"ks\":{\"a\":0,\"k\":{\"i\":[[0,0],[-18,3]],\"o\":[[0,0],[18,-3]],\"v\":[[245.5,98.5],[260,75]],\"c\":false},\"ix\":2},\"nm\":\"Path 1\",\"mn\":\"ADBE Vector Shape - Group\",\"hd\":false},{\"ty\":\"st\",\"c\":{\"a\":0,\"k\":[1,1,1,1],\"ix\":3},\"o\":{\"a\":0,\"k\":100,\"ix\":4},\"w\":{\"a\":0,\"k\":2,\"ix\":5},\"lc\":2,\"lj\":1,\"ml\":4,\"nm\":\"Stroke 1\",\"mn\":\"ADBE Vector Graphic - Stroke\",\"hd\":false},{\"ty\":\"tr\",\"p\":{\"a\":0,\"k\":[0,0],\"ix\":2},\"a\":{\"a\":0,\"k\":[0,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100],\"ix\":3},\"r\":{\"a\":0,\"k\":0,\"ix\":6},\"o\":{\"a\":0,\"k\":100,\"ix\":7},\"sk\":{\"a\":0,\"k\":0,\"ix\":4},\"sa\":{\"a\":0,\"k\":0,\"ix\":5},\"nm\":\"Transform\"}],\"nm\":\"Shape 1\",\"np\":3,\"cix\":2,\"ix\":2,\"mn\":\"ADBE Vector Group\",\"hd\":false}],\"ip\":0,\"op\":121,\"st\":0,\"bm\":0},{\"ddd\":0,\"ind\":7,\"ty\":4,\"nm\":\"Shape Layer 2\",\"parent\":8,\"sr\":1,\"ks\":{\"o\":{\"a\":0,\"k\":100,\"ix\":11},\"r\":{\"a\":1,\"k\":[{\"i\":{\"x\":[0.833],\"y\":[0.833]},\"o\":{\"x\":[0.709],\"y\":[0]},\"n\":[\"0p833_0p833_0p709_0\"],\"t\":0,\"s\":[0],\"e\":[-22]},{\"i\":{\"x\":[0.833],\"y\":[0.833]},\"o\":{\"x\":[0.167],\"y\":[0.167]},\"n\":[\"0p833_0p833_0p167_0p167\"],\"t\":53,\"s\":[-22],\"e\":[0]},{\"i\":{\"x\":[0.833],\"y\":[0.833]},\"o\":{\"x\":[0.167],\"y\":[0.167]},\"n\":[\"0p833_0p833_0p167_0p167\"],\"t\":57,\"s\":[0],\"e\":[0]},{\"t\":120}],\"ix\":10,\"x\":\"var $bm_rt;\\nvar amp, freq, decay, n, t;\\ntry {\\n    amp = div(effect('Rotation - Overshoot')('ADBE Slider Control-0001'), 2.5), freq = div(effect('Rotation - Bounce')('ADBE Slider Control-0001'), 20), decay = div(effect('Rotation - Friction')('ADBE Slider Control-0001'), 20), n = 0, 0 < numKeys && (n = nearestKey(time).index, key(n).time > time && n--), t = 0 === n ? 0 : time - key(n).time, $bm_rt = 0 < n ? (v = velocityAtTime(sub(key(n).time, div(thisComp.frameDuration, 10))), sum(value, div(mul(mul(div(v, 100), amp), Math.sin(mul(mul(mul(freq, t), 2), Math.PI))), Math.exp(mul(decay, t))))) : value;\\n} catch (e$$4) {\\n    $bm_rt = value = value;\\n}\"},\"p\":{\"a\":0,\"k\":[1.226,-4,0],\"ix\":2},\"a\":{\"a\":0,\"k\":[245.226,98.5,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100,100],\"ix\":6}},\"ao\":0,\"ef\":[{\"ty\":5,\"nm\":\"Rotation - Overshoot\",\"np\":3,\"mn\":\"ADBE Slider Control\",\"ix\":1,\"en\":1,\"ef\":[{\"ty\":0,\"nm\":\"Slider\",\"mn\":\"ADBE Slider Control-0001\",\"ix\":1,\"v\":{\"a\":0,\"k\":10,\"ix\":1,\"x\":\"var $bm_rt;\\n$bm_rt = clamp(value, 0, 100);\"}}]},{\"ty\":5,\"nm\":\"Rotation - Bounce\",\"np\":3,\"mn\":\"ADBE Slider Control\",\"ix\":2,\"en\":1,\"ef\":[{\"ty\":0,\"nm\":\"Slider\",\"mn\":\"ADBE Slider Control-0001\",\"ix\":1,\"v\":{\"a\":0,\"k\":30,\"ix\":1,\"x\":\"var $bm_rt;\\n$bm_rt = clamp(value, 0, 100);\"}}]},{\"ty\":5,\"nm\":\"Rotation - Friction\",\"np\":3,\"mn\":\"ADBE Slider Control\",\"ix\":3,\"en\":1,\"ef\":[{\"ty\":0,\"nm\":\"Slider\",\"mn\":\"ADBE Slider Control-0001\",\"ix\":1,\"v\":{\"a\":0,\"k\":60,\"ix\":1,\"x\":\"var $bm_rt;\\n$bm_rt = clamp(value, 0, 100);\"}}]}],\"shapes\":[{\"ty\":\"gr\",\"it\":[{\"ind\":0,\"ty\":\"sh\",\"ix\":1,\"ks\":{\"a\":0,\"k\":{\"i\":[[2.485,0],[0,-2.485],[-2.485,0],[0,2.485]],\"o\":[[-2.485,0],[0,2.485],[2.485,0],[0,-2.485]],\"v\":[[-18.5,3.5],[-23,8],[-18.5,12.5],[-14,8]],\"c\":true},\"ix\":2},\"nm\":\"Path 1\",\"mn\":\"ADBE Vector Shape - Group\",\"hd\":false},{\"ty\":\"fl\",\"c\":{\"a\":0,\"k\":[1,1,1,1],\"ix\":4},\"o\":{\"a\":0,\"k\":100,\"ix\":5},\"r\":1,\"nm\":\"Fill 1\",\"mn\":\"ADBE Vector Graphic - Fill\",\"hd\":false},{\"ty\":\"tr\",\"p\":{\"a\":0,\"k\":[280,66],\"ix\":2},\"a\":{\"a\":0,\"k\":[0,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100],\"ix\":3},\"r\":{\"a\":0,\"k\":0,\"ix\":6},\"o\":{\"a\":0,\"k\":100,\"ix\":7},\"sk\":{\"a\":0,\"k\":0,\"ix\":4},\"sa\":{\"a\":0,\"k\":0,\"ix\":5},\"nm\":\"Transform\"}],\"nm\":\"Ellipse 1\",\"np\":3,\"cix\":2,\"ix\":1,\"mn\":\"ADBE Vector Group\",\"hd\":false},{\"ty\":\"gr\",\"it\":[{\"ind\":0,\"ty\":\"sh\",\"ix\":1,\"ks\":{\"a\":0,\"k\":{\"i\":[[0,0],[-18,3]],\"o\":[[0,0],[18,-3]],\"v\":[[245.5,98.5],[260,75]],\"c\":false},\"ix\":2},\"nm\":\"Path 1\",\"mn\":\"ADBE Vector Shape - Group\",\"hd\":false},{\"ty\":\"st\",\"c\":{\"a\":0,\"k\":[1,1,1,1],\"ix\":3},\"o\":{\"a\":0,\"k\":100,\"ix\":4},\"w\":{\"a\":0,\"k\":2,\"ix\":5},\"lc\":2,\"lj\":1,\"ml\":4,\"nm\":\"Stroke 1\",\"mn\":\"ADBE Vector Graphic - Stroke\",\"hd\":false},{\"ty\":\"tr\",\"p\":{\"a\":0,\"k\":[0,0],\"ix\":2},\"a\":{\"a\":0,\"k\":[0,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100],\"ix\":3},\"r\":{\"a\":0,\"k\":0,\"ix\":6},\"o\":{\"a\":0,\"k\":100,\"ix\":7},\"sk\":{\"a\":0,\"k\":0,\"ix\":4},\"sa\":{\"a\":0,\"k\":0,\"ix\":5},\"nm\":\"Transform\"}],\"nm\":\"Shape 1\",\"np\":3,\"cix\":2,\"ix\":2,\"mn\":\"ADBE Vector Group\",\"hd\":false}],\"ip\":0,\"op\":121,\"st\":0,\"bm\":0},{\"ddd\":0,\"ind\":8,\"ty\":3,\"nm\":\"front head\",\"parent\":13,\"sr\":1,\"ks\":{\"o\":{\"a\":0,\"k\":0,\"ix\":11},\"r\":{\"a\":0,\"k\":0,\"ix\":10},\"p\":{\"a\":1,\"k\":[{\"i\":{\"x\":0.833,\"y\":0.833},\"o\":{\"x\":0.167,\"y\":0.167},\"n\":\"0p833_0p833_0p167_0p167\",\"t\":0,\"s\":[121,202,0],\"e\":[181,202,0],\"to\":[0,0,0],\"ti\":[0,0,0]},{\"i\":{\"x\":0.833,\"y\":0.833},\"o\":{\"x\":0.167,\"y\":0.167},\"n\":\"0p833_0p833_0p167_0p167\",\"t\":60,\"s\":[181,202,0],\"e\":[181,202,0],\"to\":[0,0,0],\"ti\":[0,0,0]},{\"t\":120}],\"ix\":2,\"x\":\"var $bm_rt;\\n$bm_rt = loopOut('cycle');\"},\"a\":{\"a\":0,\"k\":[0,0,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100,100],\"ix\":6}},\"ao\":0,\"ip\":0,\"op\":241,\"st\":0,\"bm\":0},{\"ddd\":0,\"ind\":9,\"ty\":3,\"nm\":\"front\",\"parent\":13,\"sr\":1,\"ks\":{\"o\":{\"a\":0,\"k\":0,\"ix\":11},\"r\":{\"a\":0,\"k\":0,\"ix\":10},\"p\":{\"a\":1,\"k\":[{\"i\":{\"x\":0.833,\"y\":0.833},\"o\":{\"x\":0.167,\"y\":0.167},\"n\":\"0p833_0p833_0p167_0p167\",\"t\":0,\"s\":[68,202,0],\"e\":[128,202,0],\"to\":[0,0,0],\"ti\":[0,0,0]},{\"i\":{\"x\":0.833,\"y\":0.833},\"o\":{\"x\":0.167,\"y\":0.167},\"n\":\"0p833_0p833_0p167_0p167\",\"t\":60,\"s\":[128,202,0],\"e\":[128,202,0],\"to\":[0,0,0],\"ti\":[0,0,0]},{\"t\":120}],\"ix\":2,\"x\":\"var $bm_rt;\\n$bm_rt = loopOut('cycle');\"},\"a\":{\"a\":0,\"k\":[0,0,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100,100],\"ix\":6}},\"ao\":0,\"ip\":0,\"op\":241,\"st\":0,\"bm\":0},{\"ddd\":0,\"ind\":10,\"ty\":3,\"nm\":\"hump\",\"parent\":13,\"sr\":1,\"ks\":{\"o\":{\"a\":0,\"k\":0,\"ix\":11},\"r\":{\"a\":0,\"k\":0,\"ix\":10},\"p\":{\"a\":1,\"k\":[{\"i\":{\"x\":0.833,\"y\":0.833},\"o\":{\"x\":0.167,\"y\":0.167},\"n\":\"0p833_0p833_0p167_0p167\",\"t\":0,\"s\":[47,155,0],\"e\":[67,202,0],\"to\":[0,0,0],\"ti\":[0,0,0]},{\"i\":{\"x\":0.833,\"y\":0.833},\"o\":{\"x\":0.167,\"y\":0.167},\"n\":\"0p833_0p833_0p167_0p167\",\"t\":60,\"s\":[67,202,0],\"e\":[107,155,0],\"to\":[0,0,0],\"ti\":[0,0,0]},{\"t\":120}],\"ix\":2,\"x\":\"var $bm_rt;\\n$bm_rt = loopOut('cycle');\"},\"a\":{\"a\":0,\"k\":[0,0,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100,100],\"ix\":6}},\"ao\":0,\"ip\":0,\"op\":241,\"st\":0,\"bm\":0},{\"ddd\":0,\"ind\":11,\"ty\":3,\"nm\":\"back\",\"parent\":13,\"sr\":1,\"ks\":{\"o\":{\"a\":0,\"k\":0,\"ix\":11},\"r\":{\"a\":0,\"k\":0,\"ix\":10},\"p\":{\"a\":1,\"k\":[{\"i\":{\"x\":0.833,\"y\":0.833},\"o\":{\"x\":0.167,\"y\":0.167},\"n\":\"0p833_0p833_0p167_0p167\",\"t\":0,\"s\":[17,202,0],\"e\":[-3,202,0],\"to\":[0,0,0],\"ti\":[0,0,0]},{\"i\":{\"x\":0.833,\"y\":0.833},\"o\":{\"x\":0.167,\"y\":0.167},\"n\":\"0p833_0p833_0p167_0p167\",\"t\":60,\"s\":[-3,202,0],\"e\":[77,202,0],\"to\":[0,0,0],\"ti\":[0,0,0]},{\"t\":120}],\"ix\":2,\"x\":\"var $bm_rt;\\n$bm_rt = loopOut('cycle');\"},\"a\":{\"a\":0,\"k\":[0,0,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100,100],\"ix\":6}},\"ao\":0,\"ip\":0,\"op\":241,\"st\":0,\"bm\":0},{\"ddd\":0,\"ind\":12,\"ty\":3,\"nm\":\"back\",\"parent\":13,\"sr\":1,\"ks\":{\"o\":{\"a\":0,\"k\":0,\"ix\":11},\"r\":{\"a\":0,\"k\":0,\"ix\":10},\"p\":{\"a\":1,\"k\":[{\"i\":{\"x\":0.833,\"y\":0.833},\"o\":{\"x\":0.167,\"y\":0.167},\"n\":\"0p833_0p833_0p167_0p167\",\"t\":0,\"s\":[-25,202,0],\"e\":[-45,202,0],\"to\":[0,0,0],\"ti\":[0,0,0]},{\"i\":{\"x\":0.833,\"y\":0.833},\"o\":{\"x\":0.167,\"y\":0.167},\"n\":\"0p833_0p833_0p167_0p167\",\"t\":60,\"s\":[-45,202,0],\"e\":[35,202,0],\"to\":[0,0,0],\"ti\":[0,0,0]},{\"t\":120}],\"ix\":2,\"x\":\"var $bm_rt;\\n$bm_rt = loopOut('cycle');\"},\"a\":{\"a\":0,\"k\":[0,0,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100,100],\"ix\":6}},\"ao\":0,\"ip\":0,\"op\":241,\"st\":0,\"bm\":0},{\"ddd\":0,\"ind\":13,\"ty\":3,\"nm\":\"NULL CONTROL\",\"sr\":1,\"ks\":{\"o\":{\"a\":0,\"k\":0,\"ix\":11},\"r\":{\"a\":0,\"k\":0,\"ix\":10},\"p\":{\"a\":1,\"k\":[{\"i\":{\"x\":0.833,\"y\":0.833},\"o\":{\"x\":0.167,\"y\":0.167},\"n\":\"0p833_0p833_0p167_0p167\",\"t\":0,\"s\":[400,300,0],\"e\":[340,300,0],\"to\":[0,0,0],\"ti\":[0,0,0]},{\"i\":{\"x\":0.833,\"y\":0.833},\"o\":{\"x\":0.167,\"y\":0.167},\"n\":\"0p833_0p833_0p167_0p167\",\"t\":60,\"s\":[340,300,0],\"e\":[340,300,0],\"to\":[0,0,0],\"ti\":[0,0,0]},{\"t\":120}],\"ix\":2,\"x\":\"var $bm_rt;\\n$bm_rt = loopOut('cycle');\"},\"a\":{\"a\":0,\"k\":[60,60,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100,100],\"ix\":6}},\"ao\":0,\"ip\":0,\"op\":241,\"st\":0,\"bm\":0},{\"ddd\":0,\"ind\":14,\"ty\":4,\"nm\":\"Shape Layer 1\",\"sr\":1,\"ks\":{\"o\":{\"a\":0,\"k\":100,\"ix\":11},\"r\":{\"a\":0,\"k\":0,\"ix\":10},\"p\":{\"a\":0,\"k\":[400,300,0],\"ix\":2},\"a\":{\"a\":0,\"k\":[0,0,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100,100],\"ix\":6}},\"ao\":0,\"ef\":[{\"ty\":5,\"nm\":\"Shape Layer 1: Path 1 [1.1.0]\",\"np\":3,\"mn\":\"ADBE Layer Control\",\"ix\":1,\"en\":1,\"ef\":[{\"ty\":10,\"nm\":\"Layer\",\"mn\":\"ADBE Layer Control-0001\",\"ix\":1,\"v\":{\"a\":0,\"k\":12,\"ix\":1}}]},{\"ty\":5,\"nm\":\"Shape Layer 1: Path 1 [1.1.1]\",\"np\":3,\"mn\":\"ADBE Layer Control\",\"ix\":2,\"en\":1,\"ef\":[{\"ty\":10,\"nm\":\"Layer\",\"mn\":\"ADBE Layer Control-0001\",\"ix\":1,\"v\":{\"a\":0,\"k\":11,\"ix\":1}}]},{\"ty\":5,\"nm\":\"Shape Layer 1: Path 1 [1.1.2]\",\"np\":3,\"mn\":\"ADBE Layer Control\",\"ix\":3,\"en\":1,\"ef\":[{\"ty\":10,\"nm\":\"Layer\",\"mn\":\"ADBE Layer Control-0001\",\"ix\":1,\"v\":{\"a\":0,\"k\":10,\"ix\":1}}]},{\"ty\":5,\"nm\":\"Shape Layer 1: Path 1 [1.1.3]\",\"np\":3,\"mn\":\"ADBE Layer Control\",\"ix\":4,\"en\":1,\"ef\":[{\"ty\":10,\"nm\":\"Layer\",\"mn\":\"ADBE Layer Control-0001\",\"ix\":1,\"v\":{\"a\":0,\"k\":9,\"ix\":1}}]},{\"ty\":5,\"nm\":\"Shape Layer 1: Path 1 [1.1.4]\",\"np\":3,\"mn\":\"ADBE Layer Control\",\"ix\":5,\"en\":1,\"ef\":[{\"ty\":10,\"nm\":\"Layer\",\"mn\":\"ADBE Layer Control-0001\",\"ix\":1,\"v\":{\"a\":0,\"k\":8,\"ix\":1}}]}],\"shapes\":[{\"ty\":\"gr\",\"it\":[{\"ind\":0,\"ty\":\"sh\",\"ix\":1,\"ks\":{\"a\":0,\"k\":{\"i\":[[0,0],[-28,0],[-26,0],[-17,0],[0,0]],\"o\":[[0,0],[28,0],[29,0],[17,0],[0,0]],\"v\":[[-105,142],[-63,142],[-23,95],[8,142],[61,142]],\"c\":false},\"ix\":2,\"x\":\"var $bm_rt;\\nvar nullLayerNames = [\\n        'Shape Layer 1: Path 1 [1.1.0]',\\n        'Shape Layer 1: Path 1 [1.1.1]',\\n        'Shape Layer 1: Path 1 [1.1.2]',\\n        'Shape Layer 1: Path 1 [1.1.3]',\\n        'Shape Layer 1: Path 1 [1.1.4]'\\n    ];\\nvar origPath = thisProperty;\\nvar origPoints = origPath.points();\\nvar origInTang = origPath.inTangents();\\nvar origOutTang = origPath.outTangents();\\nvar getNullLayers = [];\\nfor (var i = 0; i < nullLayerNames.length; i++) {\\n    try {\\n        getNullLayers.push(effect(nullLayerNames[i])('ADBE Layer Control-0001'));\\n    } catch (err) {\\n        getNullLayers.push(null);\\n    }\\n}\\nfor (var i = 0; i < getNullLayers.length; i++) {\\n    if (getNullLayers[i] != null && getNullLayers[i].index != thisLayer.index) {\\n        origPoints[i] = fromCompToSurface(getNullLayers[i].toComp(getNullLayers[i].anchorPoint));\\n    }\\n}\\n$bm_rt = createPath(origPoints, origInTang, origOutTang, origPath.isClosed());\"},\"nm\":\"Path 1\",\"mn\":\"ADBE Vector Shape - Group\",\"hd\":false},{\"ty\":\"st\",\"c\":{\"a\":0,\"k\":[1,1,1,1],\"ix\":3},\"o\":{\"a\":0,\"k\":100,\"ix\":4},\"w\":{\"a\":0,\"k\":17,\"ix\":5},\"lc\":2,\"lj\":1,\"ml\":4,\"nm\":\"Stroke 1\",\"mn\":\"ADBE Vector Graphic - Stroke\",\"hd\":false},{\"ty\":\"tr\",\"p\":{\"a\":0,\"k\":[0,0],\"ix\":2},\"a\":{\"a\":0,\"k\":[0,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[100,100],\"ix\":3},\"r\":{\"a\":0,\"k\":0,\"ix\":6},\"o\":{\"a\":0,\"k\":100,\"ix\":7},\"sk\":{\"a\":0,\"k\":0,\"ix\":4},\"sa\":{\"a\":0,\"k\":0,\"ix\":5},\"nm\":\"Transform\"}],\"nm\":\"Shape 1\",\"np\":3,\"cix\":2,\"ix\":1,\"mn\":\"ADBE Vector Group\",\"hd\":false}],\"ip\":0,\"op\":241,\"st\":0,\"bm\":0}]}],\"layers\":[{\"ddd\":0,\"ind\":1,\"ty\":0,\"nm\":\"worm\",\"refId\":\"comp_0\",\"sr\":1,\"ks\":{\"o\":{\"a\":0,\"k\":100,\"ix\":11},\"r\":{\"a\":0,\"k\":0,\"ix\":10},\"p\":{\"a\":0,\"k\":[434,115,0],\"ix\":2},\"a\":{\"a\":0,\"k\":[400,300,0],\"ix\":1},\"s\":{\"a\":0,\"k\":[211,211,100],\"ix\":6}},\"ao\":0,\"tm\":{\"a\":1,\"k\":[{\"i\":{\"x\":[0.833],\"y\":[0.833]},\"o\":{\"x\":[0.167],\"y\":[0.167]},\"n\":[\"0p833_0p833_0p167_0p167\"],\"t\":0,\"s\":[0],\"e\":[4.017]},{\"t\":241}],\"ix\":2},\"w\":800,\"h\":600,\"ip\":0,\"op\":241,\"st\":0,\"bm\":0}]}";




void argbTorgba(rlottie::Surface &s)
{
    uint8_t *buffer = reinterpret_cast<uint8_t *>(s.buffer());
    uint32_t totalBytes = s.height() * s.bytesPerLine();
    
    for (uint32_t i = 0; i < totalBytes; i += 4) {
        unsigned char a = buffer[i+3];
      //std::cout << a<< "Hello, World!\n";
        // compute only if alpha is non zero
        if (a) {
            unsigned char r = buffer[i+2];
            unsigned char g = buffer[i+1];
            unsigned char b = buffer[i];
            
            if (a != 255) { //un premultiply
                unsigned char r2 = (unsigned char) ((float) 1 * ((float) (255 - a) / 255));
                unsigned char g2 = (unsigned char) ((float) 1 * ((float) (255 - a) / 255));
                unsigned char b2 = (unsigned char) ((float) 1 * ((float) (255 - a) / 255));
                buffer[i] = r + r2;
                buffer[i+1] = g + g2;
                buffer[i+2] = b + b2;
                
            } else {
                // only swizzle r and b
                buffer[i] = r;
                buffer[i+2] = b;
            }
            //std::cout << (int)r << "      Hello, World!\n";
            ext_dump((int)r);
        } else {
             buffer[i+3] = 255;
            // buffer[i+2] = 1;
            // buffer[i+1] = 1;
            buffer[i] = 255;
            
            //std::cout << (int)(buffer[i+1])<< " >>>> Hello, World!\n";
        }
    }
}


int  testLottieWasm(int frame ) {
     char aaa[] = "/Users/zhaoxiaofeng/AndroidStudioProjects/warlock2/wasm3/platforms/cpp/xxxxxx.bmp";

    int w = 500;
    int h = 500;

    
    auto player = rlottie::Animation::loadFromData(std::move(resource), "", "",
                                                   false);
    
    auto buffer = std::unique_ptr<uint32_t[]>(new uint32_t[w * h]);
    size_t frameCount = player->totalFrame();
//    ext_dump(frameCount);
    ext_dump(2);
    for (size_t i = 0; i < frameCount ; i++) {
        if(i!=16){
            continue;
        }
      ext_dump(3);
        rlottie::Surface surface(buffer.get(), w, h, w * 4);
    ext_dump(4);
      
        player->renderSync(i, surface);
    ext_dump(5);
        //argbTorgba(surface);
        //argbTorgba(surface);
        ext_bmp((void*)surface.buffer());
    ext_dump(6);
    }
    return frameCount;
}

}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int frameCount = testLottieWasm(2);
   
    std::string aaa = "xxxx";
    
     std::cout << frameCount << "Hello, World!\n";

    return 0;
}
