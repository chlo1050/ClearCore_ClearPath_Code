// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <TCHAR.h>
#include <conio.h>
#include <stdio.h>
#include <minwindef.h>
#include <gdiplus.h>
#include <gdiplusbitmap.h>
#include <objidl.h>
#include <windows.h>
#pragma comment (lib,"Gdiplus.lib")

int main()
{
	long nDmdType;
	long nReturn;
	long nPictureTime = 10000000;	// 10 Seconds, longest possible PictureTime to make bitplanes watchable with human eye -> Bitplane 0 ~ 5s, Bitplane 1 ~ 2.5s, Bitplanes 3 ~ 1.25s ...
	USHORT* pImageData = NULL;
	long nBitplanes = 12;
	long nPicNum = 1;

	

	const int nSizeX = 2560;
	const int nSizeY = 1600;



	Bitmap* MyBitmap = new Gdiplus::Bitmap(nSizeX, nSizeY, PixelFormat16bppGrayScale);


	for (int i = 0; i < nSizeX; i++)
	{
		for (int j = 0; j < nSizeY; j++)
		{

		}
	}



	/*
	memset(pImageData, 0x00, nSizeX * nSizeY * sizeof(USHORT)); // math operations ordered left to right
	for (long k = 0; k < nBitplanes; k++)
	{
		for (long i = 0; i < nSizeY; i++)
		{
			for (long j = 0; j < nSizeX; j++)
			{
				if (k * nSizeX / nBitplanes < j && j < (k + 1) * nSizeX / nBitplanes)
				{
					pImageData[(i * nSizeX) + j] = pImageData[(i * nSizeX) + j] | (0x0001 << k);
				}
			}
		}
	}
	*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
