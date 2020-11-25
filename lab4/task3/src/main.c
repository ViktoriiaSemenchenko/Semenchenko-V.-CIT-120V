int main (){
	int k=9;
	int m=6;
	int n=3;
	int x=0;
		if (k<m && m<n) {
		// ничего не меняем
		} 
		if (k>m && m>n){
		x=n;
		n=k;
		k=x;
		}
		if (k<m && m>n){
		x=m;
		m=n;
		n=x;
		}
		if (k>m && m<n){
		x=k;
		k=m;
		m=n;
		n=x;
		}
		else {
		// все условия выполнены
		}	
	return 0;
}
