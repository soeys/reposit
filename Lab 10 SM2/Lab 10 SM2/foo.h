#pragma once
#ifndef D
#define D
class SUM {
private:
	int x, y, s;
public:
	void set(int valueX, int valueY);
	void show(void);
	void addition(void);
	SUM(int valueX, int valueY) {
		x = valueX;
		y = valueY;
	}
};

#endif // !D


