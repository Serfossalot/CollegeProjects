#ifndef NumberArray_H
#define NumberArray_H

class NumberArray
{
private:
	int size = 0;
	float* arrayPtr = nullptr;
	

public:
	NumberArray(int size);
	~NumberArray();

	void setNumberValue(int, float);
	float getNumberValue(int index) const
	float average(int size);
};

#endif