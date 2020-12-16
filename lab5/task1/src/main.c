
int main() {
	int  a=14, b=35;
	while (a!=0&&b!=0){
		if (a>b){
			a=a%b;
		} else {
			b=b%a;
		}
	}
	int nod = a+b;
	/*int j = 1;
	for (int i=a; i!=0 && j!=0;i=a){
		if (a>b){
			a=a%b;
		} else {
			b=b%a;
		}
		j = b;
	}int nod = a+b;*/
	/*
	do{if (a>b){
			a=a%b;
		} else {
			b=b%a;
		}
	}while (a!=0&&b!=0);
	int nod = a+b;
	*/
	return 0;
}
