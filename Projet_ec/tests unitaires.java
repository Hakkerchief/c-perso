
// Cas 1 : Correspond à un cas en 2D avec un seul point d'intersection

// Position camera = (4, 5, 0)
// Vecteur directeur du rayon = (7, -1, 0)
// Sphere : position = (11, 3, 0)
//			rayon = 1.0

// résultat attendu : intersection en (11, 4, 0)

	int array[] = {4,5,0};
	vector<float> pos(array, array + sizeof(array)/sizeof(float));

	array[0] = 7;
	array[1] = -1;
	array[2] = 0;
	vector<float> dir(array, array + sizeof(array)/sizeof(float));

	array[0] = 11;
	array[1] = 3;
	array[2] = 0;
	vector<float> cent(array, array + sizeof(array)/sizeof(float));

	vector<float> resultat;

	Camera camTest(pos);
	Sphere sphTest(1.0);
	sphTest.setPosition(cent);

	resultat = camTest.intersection(dir, sphTest);
	if (resultat.size() == 0) cout << "Pas d'intersection";
	else cout << resultat[0] << " - " << resultat[1] << " - " << resultat[2] << endl; 


/*sharedptr
 *uniqueptr
 *rien a voir*/
 
 
// Cas 2 : Correspond à un cas en 2D avec deux points d'intersection

// Position camera = (4, 5, 0)
// Vecteur directeur du rayon = (3, -1, 0)
// Sphere : position = (9, 4, 0)
//			rayon = 1.5

// résultat attendu : intersection en approximativement (3.7, 7.7, 0) 
// (résultat obtenu graphiquement)

	int array[] = {4,5,0};
	vector<float> pos(array, array + sizeof(array)/sizeof(float));

	array[0] = 3;
	array[1] = -1;
	array[2] = 0;
	vector<float> dir(array, array + sizeof(array)/sizeof(float));

	array[0] = 9;
	array[1] = 4;
	array[2] = 0;
	vector<float> cent(array, array + sizeof(array)/sizeof(float));

	vector<float> resultat;

	Camera camTest(pos);
	Sphere sphTest(1.5);
	sphTest.setPosition(cent);

	resultat = camTest.intersection(dir, sphTest);
	if (resultat.size() == 0) cout << "Pas d'intersection";
	else cout << resultat[0] << " - " << resultat[1] << " - " << resultat[2] << endl;


// Cas 3 : Correspond à un cas en 2D sans point d'intersection

// Position camera = (1, 6, 0)
// Vecteur directeur du rayon = (4, 2, 0)
// Sphere : position = (11, 3, 0)
//			rayon = 1.5

// résultat attendu : intersection en approximativement (3.7, 7.7, 0) 
// (résultat obtenu graphiquement)

	int array[] = {1,6,0};
	vector<float> pos(array, array + sizeof(array)/sizeof(float));

	array[0] = 2;
	array[1] = 1;
	array[2] = 0;
	vector<float> dir(array, array + sizeof(array)/sizeof(float));

	array[0] = 4;
	array[1] = 2;
	array[2] = 0;
	vector<float> cent(array, array + sizeof(array)/sizeof(float));

	vector<float> resultat;

	Camera camTest(pos);
	Sphere sphTest(2);
	sphTest.setPosition(cent);

	resultat = camTest.intersection(dir, sphTest);
	if (resultat.size() == 0) cout << "Pas d'intersection";
	else cout << resultat[0] << " - " << resultat[1] << " - " << resultat[2] << endl; 
	
