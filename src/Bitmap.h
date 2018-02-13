/*
 * Bitmap.h
 *
 *  Created on: 13. feb. 2018
 *      Author: ebras
 */

#ifndef BITMAP_H_
#define BITMAP_H_

namespace FractalProject {

class Bitmap {
private:
	int m_width;
	int m_height;
public:
	Bitmap(int width, int height);
	virtual ~Bitmap();
};

} /* namespace FractalProject */

#endif /* BITMAP_H_ */
