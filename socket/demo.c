#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>

int main(void){
	char *request = "GET /test.php HTTP/1.1\nHost: 192.168.241.0:8020\nConnection: keep-alive\nUpgrade-Insecure-Requests: 1\nUser-Agent: Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/70.0.3538.77 Safari/537.36\nAccept: text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8\n\n";
	char buffer[256];
	int s,//socket
		c,//链接
		r;//返回
	struct sockaddr_in addr;//socket地址g结构

	s = socket(AF_INET, SOCK_STREAM, 0);
	if(s<0){
		printf("the socket create failed");
		exit(0);
	}
	addr.sin_family = AF_INET;
	addr.sin_port = htons(8020);
	addr.sin_addr.s_addr = inet_addr("192.168.241.0");
	c = connect(s, (struct sockaddr *)&addr, sizeof(addr));
	if(c<0){
		printf("connect to the server failed\n");
		exit(0);
	}

	//printf("send the msg str:[%s],\nlen:[%ld]\n", request, strlen(request));
	r = send(s, request, strlen(request), 0);
	if(r < 0){
		printf("send msg failed\n");
		exit(0);
	}
	do{
		memset(buffer, 0, 256);
		r = recv(s, buffer, sizeof(buffer)-1, 0);
		printf("%s", buffer);
	}while(r==255);

	r = shutdown(s, 2);
	return 1;
}
