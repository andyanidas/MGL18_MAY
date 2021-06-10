#include<iostream>
#include<time.h>       /* time */

using namespace std;

int main(){
	srand(time(NULL));
	
	int randomNum = rand()%10;
	for(int i = 0; i<10; i++){
		randomNum = rand()%10;
		cout<<randomNum<<endl;
	}
	
	return 0;
}
/*//12
toog taa togloomond tavtai moril
ta 1-100 hoorondonh neg random toog taah yostoi
Tanii taamaglal: 30
heterhii ih baina
Tanii taamaglal: 15
heterhii ih baina
Tanii taamaglal: 5
heterhii baga baina
Tanii taamaglal: 10
heterhii baga baina
Tanii taamaglal: 12
Tanid bayar hurgey taa toog 5n udaagiin 
oroldlogoor zov taalaa!
*/
/*
hint:
*1-100 random too generete hii ter toogoo taalgana!
*while loop ashiglaad hereglegch toog taatal
while loop ergeldene
while dotor if nohtsol baina (random>taasan)
*(taasan == random) ? while loop 
zogsoh yostoi

*/





