// Module:		BallClass.h
// Author:		Mark Berrett
// Date:		April 15, 2020
// Purpose:		Header file for BallClass.cpp
//				Create, move, delete ellipse
//

#pragma once
class BallClass
{
public:
	BallClass(HWND);						// constructor

	void Draw(HDC);							// answer WM_PAINT
	void Move(HWND);						// update location


private:
	int r, g, b;							// color
	RECT rDim;								// location and size in double
	POINT rSpeed;							// speed as a double

	int GetRandomInt(int, int);				// return random integer

};

