//
//  main.cpp
//  MySoftGl
//
//  Created by zhaoxiaofeng on 2022/7/9.
//  Copyright © 2022 zhaoxiaofeng. All rights reserved.
//

#include <iostream>
#include "glut.h"
#include "Cat.h"
#include "Lamborghini.h"
#include "gl_frontend.h"


#include<iostream>
#include<string>
#include<math.h>
using namespace std;

unsigned char* FrameBuffer;
void glInit();
void glSetup();
void glRender();

Cat S;
Lamborghini Lambor;

int W = 500;
int H = 500;


//#define FrameSize 960*960  //视频帧大小
int width = W, height = H;
#define FrameNum 300       //yuv帧数
static const double S_PI = 3.14159265358979323846;
#define scos(x)         cos((double)(x))
#define stan(x)         tan((double)(x))
#define ssqrt(x)        sqrt((double)(x))
#define ET_SIZE 300



char errorText[ET_SIZE];

void errorMsg(const char *msg)
{
    printf("error:%s ", msg);
    exit(-1);
}


void write_bmpheader(unsigned char *bitmap, int offset, int bytes, int value)
{
    int i;
    for (i = 0; i < bytes; i++)
        bitmap[offset + i] = (value >> (i << 3)) & 0xFF;
}

unsigned char *convertToBmp(unsigned char *inputImg, int width, int height, int *ouputSize)
{
    /*create a bmp format file*/
    int bitmap_x = (int)ceil((double)width * 3 / 4) * 4;
    unsigned char *bitmap = (unsigned char*)malloc(sizeof(unsigned char)*height*bitmap_x + 54);
    
    bitmap[0] = 'B';
    bitmap[1] = 'M';
    write_bmpheader(bitmap, 2, 4, height*bitmap_x + 54); //whole file size
    write_bmpheader(bitmap, 0xA, 4, 54); //offset before bitmap raw data
    write_bmpheader(bitmap, 0xE, 4, 40); //length of bitmap info header
    write_bmpheader(bitmap, 0x12, 4, width); //width
    write_bmpheader(bitmap, 0x16, 4, height); //height
    write_bmpheader(bitmap, 0x1A, 2, 1);
    write_bmpheader(bitmap, 0x1C, 2, 24); //bit per pixel
    write_bmpheader(bitmap, 0x1E, 4, 0); //compression
    write_bmpheader(bitmap, 0x22, 4, height*bitmap_x); //size of bitmap raw data
    
    for (int i = 0x26; i < 0x36; i++)
        bitmap[i] = 0;
    int k = 54;
    for (int i = height - 1; i >= 0; i--) {
        int j;
        for (j = 0; j < width; j++) {
            int index = i*width + j;
            for (int l = 0; l < 3; l++){
                unsigned char a =  inputImg[index * 4 + l];
                bitmap[k++] = a;
            }
        }
        j *= 3;
        while (j < bitmap_x) {
            bitmap[k++] = 0;
            j++;
        }
    }
    *ouputSize = k;
    return bitmap;
}

void saveToBmp(unsigned char *inputImg, int width, int height, char *outputFileName)
{
    int size;
    unsigned char *bmp = convertToBmp(inputImg, width, height, &size);
    FILE *fp = fopen(outputFileName, "wb+");
    if (fp == NULL) {
        sprintf(errorText, "Could not open file: %s", outputFileName);
        errorMsg(errorText);
    }
    fwrite(bmp, 1, size, fp);
    fclose(fp);
    free(bmp);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
        glContextInit();
        FrameBuffer = new unsigned char[W * H  * 4]();
        glutInit(0, 0, W, H, FrameBuffer);
 //       glInit();
 //       glSetup();
  //      glRender();
//            S.Init();
//       S.Draw();
        Lambor.Init();
        Lambor.Draw();

    
        glutPresent();
        saveToBmp(FrameBuffer,W,H,"/Users/zhaoxiaofeng/testgit/MySoftGL/myrender.bmp");
    return 0;
}
