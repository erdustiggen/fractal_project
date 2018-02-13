/*
 * Bitmap.h
 *
 *  Created on: 13. feb. 2018
 *      Author: ebras
 */

#ifndef BITMAP_H_
#define BITMAP_H_
#include<string.h>
#include <cstdint>
#include <memory> // In order to make unique_ptr work
#include <iostream>



namespace FractalProject {

// Allocating memory to hold information about colors on screen


class Bitmap {
private:
	int m_width{0};
	int m_height{0};
	std::unique_ptr<uint8_t[]> m_pPixel{nullptr};
public:
	Bitmap(int width, int height);
	bool write(std::string filename);
	void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
	virtual ~Bitmap();
};

} /* namespace FractalProject */

#endif /* BITMAP_H_ */
