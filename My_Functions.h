void in_mass(int* mass, int size)
{
	srand(static_cast<unsigned int>(time(0)));
	for (int i = 0; i < size; i++)
		mass[i] = rand() % 25 - 5;
}

void out_mass(int* mass, int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(3) << mass[i] << " ";
	cout << endl;
}

void x_mass(int* a_mass, int* b_mass, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (a_mass[i] > 0 && b_mass[i] < 0);
		else if (a_mass[i] < 0 && b_mass[i] > 0)
			a_mass[i] = b_mass[i];
		else a_mass[i] = 0;
	}
}

void y_mass(int* b_mass, int* c_mass, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (b_mass[i] > 0 && c_mass[i] < 0);
		else if (b_mass[i] < 0 && c_mass[i] > 0)
			b_mass[i] = c_mass[i];
		else b_mass[i] = 0;
	}
}
