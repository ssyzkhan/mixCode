#ifndef _SWAP_H
#define _SWAP_H
void swap(void* x, void* y, int size){
	void* temp=(void*)malloc(size);
	memcpy(temp,x,size);
	memcpy(x,y,size);
	memcpy(y,temp,size);
	free(temp);
	temp=NULL;
}
#endif
