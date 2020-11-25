int main (){
	int r = 5; //задаем радиус
	#define PI 3.14 
	char com = 's';
		if ( com == 'l'){
		  	int result = 2*PI*r ;
		 } else if ( com == 's'){
		  	int result = PI*r*r ;
		 } else if ( com == 'v') {
		  	int result = (4*PI*r*r*r)/3 ;
		 } else {
		 char result = "error";
		 }
	return 0;
}
