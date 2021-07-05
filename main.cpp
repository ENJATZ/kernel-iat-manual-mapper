#include "mmap.hpp"

int main(int argc, char **argv) { 
	mmap mapper(INJECTION_TYPE::KERNEL);

	if (!mapper.attach_to_process("ModernWarfare.exe"))
		return 1;

	if (!mapper.load_dll("tos-internal.dll"))
		return 1;

	if (!mapper.inject())
		return 1;

	LOG("\nPress any key to close.");
	std::getchar();
	 
	return 0;
}