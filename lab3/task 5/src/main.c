int main (){
	int x = 123;
	float result1 = ((x - (x%100))/100)/(float) ((x%100)%10);
	int result2 = result1*100;
	float result3 = result2/100.0;
	return 0;
}
