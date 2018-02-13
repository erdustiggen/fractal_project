/*
 * Bitmap.cpp
 *
 *  Created on: 13. feb. 2018
 *      Author: ebras
 */

#include "Bitmap.h"
#include "BitmapFileHeader.h"
#include "BitmapInfoHeader.h"
#include<iostream>
using namespace FractalProject;

namespace FractalProject {

Bitmap::Bitmap(int width, int height):m_width(width), m_height(height), m_pPixel(new uint8_t[width*height*3]{}) {
	// TODO Auto-generated constructor stub

}
bool Bitmap::write(std::string filename) {

	BitMapFileHeader fileHeader;
	BitmapInfoHeader infoHeader;

	fileHeader.fileSize = sizeof(BitMapFileHeader) + sizeof(BitmapInfoHeader) + m_width*m_height*3;
	fileHeader.dataOffset = sizeof(BitMapFileHeader) + sizeof(BitmapInfoHeader);

	infoHeader.width = m_width;
	infoHeader.height = m_height;

	return false;
}
void Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) {

}
Bitmap::~Bitmap() {
	// TODO Auto-generated destructor stub
}

} /* namespace FractalProject */
