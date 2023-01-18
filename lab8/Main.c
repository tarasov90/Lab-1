#include <stdio.h>
void f1(int* p) {
	(*p)++;
}
void use(int* a, int* b, int* restrict c) {
	*a += *c;
	*b += *c;
}
void main() {
	char m[10];
	char* n = m;
	char* nn = &m[6];
	int res = nn - n;
	if (n < m)//n==m n!=nn
	{

	}
	int data = 0;
	int* pdata = NULL;
	if (pdata == NULL)
	{
		printf("pdata addr = %p\n", pdata);
	}
	pdata = &data;
	if (pdata) {
		printf("pdata = %p, addr data = %p \n", pdata, &data);
	}
	
	char badExample[4];
	badExample[0] = 'J';
	badExample[1] = 'o';
	badExample[2] = 'e';
	//badExample[3] = NULL;//так нельзя, надо '\0'

	void* p;
	size_t n1= sizeof(p);// size of p adress
	//size_t n2 = sizeof(*p);// size of void

	int n3 = 99;
	p = &n3;
	float  d = *((float*)p);
	//d=?

	const char* pc;
	char const* pc1;//pc and pc1 are same 
	pc = "ABC";
	char c = *pc;
	pc++;
	//*pc = 'w' mistake

	extern char* volatile pv;
	int x = 1, z = 2;
	const int* const pn = &x;
	//*pn = 5 pn = *z are mistakes;

	const int nq = 1;
	int* pnq = &nq;
	
	
	int m1 = 1;
	int* pm = &m;
	(*pm)++;
	const int* pcq = &m;
	f1(pcq);
	void const* p1 = &m1;
	
	int a = 50, b = 60, c4 = 60;
	use(&a, &b, &c);
	printf("a = %d, b = %d,c = %d\n", a, b, c4);

	char* arc[20] = {0};
	char ar1[][6] = { "One","Two","Three" };
	char *ar[] = { "One","Two","Three" };

	unsigned int count = 5;
	rsize_t cs = count * sizeof(int);
	int* p5 = (int*)malloc(cs);
	//printf("size of memory = %d",);


}