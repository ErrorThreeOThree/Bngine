#include "SDL.h"
#include "include/util/math/Mat.h"

#undef main

using namespace Mat;

int main()
{
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_CreateWindow("Bngine", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1500, 1000, 0);
	V2f test;
	test.x = 10;
	test.y = 12;
	SDL_Delay(1000);
	
	M22f mat1, mat2;
	mat1._11 = 1;
	mat1._12 = 2;
	mat1._21 = 1;
	mat1._22 = 3;
	mat2._11 = 2;
	mat2._12 = 3;
	mat2._21 = 2;
	mat2._22 = 5;

	M33f mat13, mat23;
	mat13._11 = 1;
	mat13._12 = 2;
	mat13._13 = 3;
	mat13._21 = 1;
	mat13._22 = 3;
	mat13._23 = 4;
	mat13._31 = 1;
	mat13._32 = 3;
	mat13._33 = 4;
	mat23._11 = 2;
	mat23._12 = 3;
	mat23._13 = 3;
	mat23._21 = 2;
	mat23._22 = 5;
	mat23._23 = 3;
	mat23._31 = 3;
	mat23._32 = 3;
	mat23._33 = 3;

	V3f v13;
	v13.x = 1;
	v13.y = 2;
	v13.z = 3;

	V2f v1, v2;
	v1.x = 1;
	v1.y = 1;
	v2.x = 2;
	v2.y = 2;
	std::cout << v2 - v1 << std::endl;
	std::cout << v2*2+v1 << std::endl;
	std::cout << (v1 == v2) << std::endl;
	v1 = v2;
	std::cout << v1 << std::endl;
	std::cout << (v1 == v2) << std::endl;

	std::cout << mat1 << std::endl;
	std::cout << mat2 << std::endl;
	std::cout << mat1 * mat2 << std::endl;
	std::cout << mat1 * v2 << std::endl;

	std::cout << mat13 << std::endl;
	std::cout << mat23 << std::endl;
	std::cout << mat13 + mat23 << std::endl;
	std::cout << mat13 - mat23 << std::endl;
	std::cout << mat13 * mat23 << std::endl;
	std::cout << mat13 * v13 << std::endl;
	std::cout << v1.norm() << std::endl;

	return 1;
}