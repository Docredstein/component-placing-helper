#pragma once
#include <string>
//#include "serialib.h"
class CNC
{
public:
	CNC();
	CNC(std::string COM_PORT,  int baudrate = 115200);
	int init();
	void setComPort(std::string COM_PORT);
	void move(int x, int y, int z =-1);
	void setBaudrate(int baudrate);
	void setOrigin();
	void setOrigin(float x, float y);
	bool isOpened();



protected:
	std::string m_COM_PORT;
	int m_baudrate;
	float m_x0;
	float m_y0;
	float m_x;
	float m_y;
	bool opened;

};

