#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "extern.h"

void showall(FILE *fptr)
{
	struct patient *p;
	while(fread(&p, sizeof(p), 1, fptr)==1)
		printf("%s  -  %ld  -  %d  -  %c  -  %s  -  %s  -  %f  -  %f  -  %s  -  %d  -  %lf  -  %lf\n", p->name, p->pid, p->age, p->sex, p->doc, p->diag, p->height, p->weight, p->bgrp, p->stat, p->bill, p->amtdep);
}

int main()
{
	FILE *fptr = fopen("record.dat", "rb");
	showall(fptr);
	return 0;
}
