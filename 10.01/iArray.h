#pragma once
class iArray
{
public:
	iArray();
	void get();
	void set();
	float average(int length);
	~iArray();
private:
	float arr[10];
	float* xArray;
};

