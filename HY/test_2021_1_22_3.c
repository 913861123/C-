#include <stdio.h>
int su(char* arr){//数组传过来的是首元素的地址
	if (*arr != '\0'){//
		return 1 + su(arr+1);//当arr读取的不是\0时下标加一
	}
	else{
		return 0;
	}
}
int main(){
	char arr[] = "abcdef";
	int x=su(&arr);
	printf("%d\n", x);
	return 0;
}