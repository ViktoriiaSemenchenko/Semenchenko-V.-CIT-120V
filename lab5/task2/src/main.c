int main() {
	int a=7, d=1,i=0;
	do {
		d++;
		if (a%d==0){
			if (a==d){
				i+=1;
				//число просте
			} else {
				i+=1;
				//число складне
			}
		}
	}
	while (i<1);
	/*while (i<1){
		d++;
		if (a%d==0){
			if (a==d){
				i+=1;
				//число просте
			} else {
				i+=1;
				//число складне
			}
		}
	}*/
	/*
	for (i=0; i<1; )*/
	return 0;
}
