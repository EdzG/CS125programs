#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

class Image {
private:
	int width;
	int height;
	int numOfPixels;
	std::string version;
	std::string fileName;
	std::string newFileName;
	unsigned char** pixels;
public:
	Image();
	Image(std::string name);
	Image(int w, int h, int amntpixels);
	Image(int w, int h, unsigned char** pixels, int amntpixels);
	Image(const Image& src);
	~Image();
	void rotateImag90();
	void setNewFileName(std::string newfileName);
	std::string getNewFileName();
	void allocateMemory(int h = 20, int = 20);
	void printMenu();
	void executeOption(int option);
	void rotateImag180();
	void rotateImag270();
	void flip_horizontally();
	int getWidth() const;
	int getHeight() const;
	void getPixels() const;
	void setPixels(int w, int h, unsigned char) const;
	Image& operator = (const Image& rigth);
	void readFile();
	void saveImage();
	void imageColorInversion();
	//void horizontalImage();
};

//unsigned char** rotateImag90(int, int, unsigned char**);
//unsigned char** imageColorInversion(int, int, unsigned char**);