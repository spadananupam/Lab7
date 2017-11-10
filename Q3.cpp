#include "Q3.h"
Q3::Q3(){
	newLen=0;
	newBre=0;
}
Q3::Q3(float len, float bre){
	newLen=len;
	newBre=bre;
}
float Q3::getAr() const {
	return (newLen*newBre);
}
