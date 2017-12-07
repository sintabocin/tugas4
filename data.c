#include <stdio.h>
#include <stdbool.h>

int main(){
	char nama[30];
	char npm [30];
	float ipk;
	int nilai;
	char kelamin [20];
	bool status= true;
	printf ("Selamat Datang di Program Saya \n");
	printf ("============================== \n");
	printf ("\n");
	
	printf ("Masukan Nama: ");
	scanf ("%s", &nama);
	
	printf ("Masukan Npm: ");
	scanf ("%s", &npm);
	
	printf ("Masukan Ipk: ");
	scanf ("%f", &ipk);
	
	printf ("Masukan Nilai: ");
	scanf ("%d", &nilai);
	
	printf ("P/L: ");
	scanf ("%s", &kelamin);
	
	printf ("Status Pernikahan :");
	scanf ("%d", &status);
	
	printf ("\n");
	printf ("===================== \n");
	printf ("data diri anda adalah \n");
	printf ("===================== \n");
	printf ("\n");
	
	printf ("Nama anda adalah %s\n", nama);
	printf ("Npm anda adalah %s\n", npm);
	printf ("Ipk anda adalah %f\n", ipk);
	printf ("Nilai anda adalah %d\n", nilai);
	printf ("jenis kelamn anda adalah %s\n", kelamin);
	printf ("status pernikahan anda %d\n", status);

	return 0;
}