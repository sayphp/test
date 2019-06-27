#include <stdio.h>
#include <sys/stat.h>
int main(void){
	struct stat buf;
	//FILE *fp = NULL;
	//fp = fopen("./a.txt", "r");
	stat("./a.txt", &buf);

	printf("文件的设备编号:%ld\n", buf.st_dev);
	printf("文件的i-node:%ld\n", buf.st_ino);
	printf("文件的类型和存取权限:%d\n", buf.st_mode);
	printf("文件的连接数目:%ld\n", buf.st_nlink);
	printf("文件的所有者用户识别码:%d\n", buf.st_uid);
	printf("文件的所有者组识别码:%d\n", buf.st_gid);
	printf("文件为设备的设备编号:%ld\n", buf.st_rdev);
	printf("文件大小:%ld\n", buf.st_size);
	printf("文件系统的I/O缓冲区大小:%ld\n", buf.st_blksize);
	printf("文件的占用文件区块的个数:%lu\n", buf.st_blocks);
	printf("文件的存取执行时间:%ld\n", buf.st_atime);
	printf("文件的最后更新时间:%ld\n", buf.st_mtime);
	printf("文件的创建时间:%ld\n", buf.st_ctime);





	return 0;
}
