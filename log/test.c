/** test.c **/
 
#include "stdio.h"
#include "stdlib.h"
#include "log.h"
int main(){
	LogWrite(INFO,"%s","Hello World!");
	LogWrite(DEBUG,"%s","H.e.l.l.o W.o.r.l.d!");
	LogWrite(WARN,"%s","H e l l o W o r l d!");
	LogWrite(ERROR,"%s [FUNC: %s/%s LINE: %d]","H.e.l.l.o W.o.r.l.d!",__FILE__,__FUNCTION__,__LINE__);
	return 0;
} 