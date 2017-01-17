double dot(double a[], double b[], int length) {
	int i;
	double sum = 0.0;   //fixed variable not initalizing properly
	for (i=1; i<= length; i++) { 
		sum = sum + a[i]*b[i];
		}
	return sum;
	}
