/*
 * BitmapFileHeader.h
 *
 *  Created on: 13. feb. 2018
 *      Author: ebras
 */

#ifndef BITMAPFILEHEADER_H_
#define BITMAPFILEHEADER_H_

#include<cstdint>

using namespace std;

// Makes c++ align the struct on two byte boundaries
#pragma pack(2)

namespace FractalProject {
struct BitMapFileHeader {

	// Tells the application that it is a bitmap file
	char header[2]{'B', 'M'};

	// Must ensure 32-bit int
	int32_t fileSize;
	int32_t reserved{0};
	int32_t dataOffset;
};
}

#endif /* BITMAPFILEHEADER_H_ */
