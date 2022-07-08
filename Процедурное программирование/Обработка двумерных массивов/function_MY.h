#pragma once
void in_mass(int **mass, int n, int m) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> mass[i][j]; 
}
void out_mass(int **mass, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << setw(2) << mass[i][j] << " ";
		cout << endl;
	}
	cout << endl;
}

void umnozh(int **mass, int n, int m) {
	int *e = new int[n];
	int min, max, tmp, s, t;
	for (int i = 0; i < n; i++) {
		e[i] = 1;
		for (int j = 0; j < m; j++)
			e[i] *= mass[i][j];
	}
	min = e[0];
	max = e[0];
	for (int i = 0; i < n; i++) {
		if (e[i] >= max) {
			max = e[i];
			s = i;
		}
		if (e[i] <= min) {
			min = e[i];
			t = i;
		}
	}
	for (int i = 0; i < n; i++)
		cout << i << " " << e[i] << endl;
	cout << endl;
	for (int i = 0; i < m; i++) {
		tmp = mass[s][i];
		mass[s][i] = mass[t][i];
		mass[t][i] = tmp;
	}
	delete[] e;
}