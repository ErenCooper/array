#pragma once

class String {
public:
	String(int size = 80) {
		int* str = new int[size];
	}
	String(int raz) {
		int* str = new int[raz];
	}
};