void reverse(char*s){
	int n = strlen(s);
	char* p = s;
	char* q = s + n - 1;
	while (p <q) {
		char k;
		k = *p;
		*p = *q;
		*q = k;
		p++;
		q--;
	}
}
