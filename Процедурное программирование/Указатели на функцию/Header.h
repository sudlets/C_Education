#pragma once

float function_1(float x) {
	float y;
	y = x*x;
	return y;
}
float function_2(float x) {
	float y;
	y = x-fabs(x)*2;
	return y;
}
void maxarg(float **mass, int N, float &Ymax, float &Xmax) {
	float buf = mass[0][0];
	for (int i = 0; i < N; i++) {
		if (buf <= mass[0][i]) {
			buf = mass[0][i];
			Ymax = mass[0][i];
			Xmax = mass[1][i];
		}
	}
}
