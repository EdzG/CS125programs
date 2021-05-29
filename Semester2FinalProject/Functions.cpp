#include "Function.h"
#include <fstream>

using namespace std;

Image::Image() {
	width = 20;
	height = 20;
	version = "P5";
	fileName = "image";
	numOfPixels = 255;
	allocateMemory(height, width);

}
Image::Image(string name) {
	fileName = name;
	allocateMemory();
	
}
Image::Image(int w, int h, int amntpixels) {
	width = w;
	height = h;
	numOfPixels = amntpixels;
	allocateMemory(h, w);
}
Image::Image(int w, int h, unsigned char** pixels, int amntpixels) {
	width = w;
	height = h;
	numOfPixels = amntpixels;

	allocateMemory(h, w);
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			this->pixels[i] = pixels[i];
		}
	}

	for (int i = 0; i < h; i++) {
		delete[] pixels[i]; 
	}
	delete[] pixels;
}
Image::Image(const Image& src) {
	this->width = src.width;
	this->height = src.height;
	this->numOfPixels = src.numOfPixels;
	this->fileName = src.fileName;
	this->version = src.version;
	allocateMemory(src.height, src.width);
		for (int i = 0; i < src.height; i++) {
			for (int j = 0; j < src.width; j++) {
				pixels[i][j] = src.pixels[i][j];
			}
		}

}

string Image::getNewFileName() {
	return newFileName;
}

int Image::getWidth() const {
	return width;
}

int Image::getHeight() const {
	return height;
}

void Image::getPixels() const {

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << pixels[i][j];
		}
		cout << endl;
	}
}

void Image::setNewFileName(string savingName) {
	this->newFileName = savingName;
}

void Image::setPixels(int j, int i, unsigned char c) const {
	
			pixels[j][i] = c;

}

Image& Image::operator = (const Image& right) {

		if (this != &right) 
		{
			
			for (int i = 0; i < height; i++) {
				delete[] pixels[i];
			}
			delete[] pixels; 

			height= right.height;
			width = right.width;
			numOfPixels = right.numOfPixels;
			fileName = right.fileName;
			version = right.version;
			allocateMemory(height, width);
			for (int i = 0; i < height; i++)
			{
				for (int j = 0; j < width; j++) {
					pixels[i][j] = right.pixels[i][j];
				}
			}
		}
		return *this;
}
void Image::readFile() {
	 char c;
	ifstream inFile;
	inFile.open(fileName + ".pgm", ios::binary);
	cout << "Opening the file. " << endl;
	cout << endl;
	if (inFile)
	{
		
		inFile >> this->version;
		inFile >> this->width;
		inFile >> this->height;
		inFile >> this->numOfPixels;

		inFile.read(&c, 1);

		allocateMemory(height, width);

		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				inFile.read(&c, 1);
				
				this->setPixels(i, j, static_cast<unsigned char>(c));
					
			}
		}



		inFile.close();
		cout << "Information of the file was successfully loaded!" << endl;
		cout << endl;
	

	}
	else {
		cout << "File is not opened" << endl;
		cout << endl;
	}


}

void Image::saveImage() {
	ofstream outFile;
	outFile.open(this->newFileName + ".pgm", ios::binary);
	if (outFile.fail())
	{
		cout << "Output failed" << endl;
		cout << endl;
		return;
	}
	
		outFile << version << endl;
		outFile << height << " ";
		outFile << width << endl;
		outFile << numOfPixels << endl;
		
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				outFile << static_cast<char>(pixels[i][j]);
			}
		}

		outFile.close();
		cout << this->newFileName << " was saved. " << endl;
		cout << "The file was saved!" << endl;
		cout << endl;

	

}
void Image::imageColorInversion() {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			pixels[i][j] = numOfPixels - pixels[i][j];
		}
	}
}
void Image::rotateImag90() {
	unsigned char** temp = new unsigned char* [width];

	for (int i = 0; i < width; i++) {
		temp[i] = new unsigned char[height];
	}

	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {

			temp[i][(height - j - 1)] = pixels[j][i];
		}

	}
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			pixels[i][j] = temp[i][j];
		}
	}

	for (int i = 0; i < height; i++) {
		delete[] temp[i];
	}
	delete[] temp;
	temp = nullptr;


}

void Image::rotateImag180() {
	rotateImag90();
	rotateImag90();
}
void Image::rotateImag270() {
	rotateImag90();
	rotateImag90();
	rotateImag90();
}
void Image::flip_horizontally()
{

	for (int row = 0; row < height; row++) {
		reverse(pixels[row], pixels[row] + width);
	}
}


Image::~Image() {
	cout << "Destruction of object!" << endl;

	for (int i = 0; i < height; i++) {
		delete[] pixels[i];
	}
	delete[] pixels;

}


void Image::allocateMemory(int h, int w) {
	pixels = new unsigned char* [h];
	for (int i = 0; i < h; i++) {
		pixels[i] = new unsigned char[w];
	}
	
}




void Image::printMenu() {
	cout << " _______________________________________________________" << endl;
	cout << "|Please enter which action you would like to perform    |" << endl;
	cout << "|_______________________________________________________|" << endl;
	cout << "|1:  Rotate the image 90 Degrees.                       |" << endl;
	cout << "|_______________________________________________________|" << endl;
	cout << "|2:  Rotate the image 180 Degrees.                      |" << endl;
	cout << "|_______________________________________________________|" << endl;
	cout << "|3:  Rotate the image 270 Degrees.                      |" << endl;
	cout << "|_______________________________________________________|" << endl;
	cout << "|4:  Flip the image horizontally.                       |" << endl;
	cout << "|_______________________________________________________|" << endl;
	cout << "|5:  Invert the image.                                  |" << endl;
	cout << "|_______________________________________________________|" << endl;
	cout << "|6:  Save the image.                                    |" << endl;
	cout << "|_______________________________________________________|" << endl;
	cout << "|7:  Exit the program.                                  |" << endl;
	cout << "|_______________________________________________________|" << endl;
	cout << endl;
}

void Image::executeOption(int option) {
	switch (option)
	{
	case 1:
		cout << "You have chosen 1-To rotate the image 90 Degrees" << endl;
		rotateImag90();
		cout << "Is that all you would like to do onto the image?" << endl;
		cout << endl;
		break;

	case 2:
		cout << "You have chosen 2-To rotate the image 180 Degrees" << endl;
		rotateImag180();
		cout << "Is that all you would like to do onto the image?" << endl;
		cout << endl;
		break;

	case 3:
		cout << "You have chosen 3-To rotate the image 270 Degrees" << endl;
		rotateImag270();
		cout << "Is that all you would like to do onto the image?" << endl;
		cout << endl;
		break;

	case 4:
		cout << "You have chosen 4-To flip the image horizontally" << endl;
		flip_horizontally();
		cout << "Is that all you would like to do onto the image?" << endl;
		cout << endl;
		break;


	case 5:
		cout << "You have chosen 5-To invert the image color" << endl;
		imageColorInversion();
		cout << "Is that all you would like to do onto the image?"<< endl;
		cout << endl;
		break;

	case 6:
		cout << "You have chosen 6-To save the image()" << endl;
		cout << "Is that all you would like to do onto the image?" << endl;
		cout << endl;
		saveImage(); 

		break;

	case 7:
		cout << "You have exited the program!" << endl;
		cout << endl;
		break;

	default:
		cout << "Invalid Input" << endl;
		cout << endl;
		break;
	}
}