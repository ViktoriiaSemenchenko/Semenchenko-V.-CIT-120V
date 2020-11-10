int main (){
int number = 567, result;
result = (((number%100)%10)*100)+((number%100) - ((number%100)%10))+((number-(number%100))/100);
	return 0;
}