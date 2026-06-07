#include"cddrive.h"
#include"compactdisc.h"
int main()
{
	compactdisc cd1, cd2;
	CDDrive thecddrive;
	thecddrive.insertcd(cd1);
	thecddrive.play();
	thecddrive.ejectmethod();
	thecddrive.play();
	thecddrive.insertcd(cd2);
	thecddrive.play();
	thecddrive.ejectmethod();
}