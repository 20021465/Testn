void rFilter(char* s) {
	int n = strlen(s);
	char* p = s + n - 1;
	while (*p >= 0 && *p <= 64 || *p >= 91 && *p <= 96 || *p >= 123) {
		*p = '_';
		p--;
	}
}