#ifndef Pereferia_H
#define Pereferia_H

class Pereferia
{
private:
	int peref = 1;
	char qqqq;
public:
	Pereferia();
	void Create_Pereferia();
	void Read();
	void Read(const char name1[]);
	Pereferia(const Pereferia&) = delete;
	Pereferia & operator=(const Pereferia&) = delete;
	void* operator new(size_t) = delete;
	void* operator new[](size_t) = delete;
	void operator delete(void*) = delete;
	void operator delete[](void*) = delete;
    ~Pereferia();
};

#endif Pereferia_H
