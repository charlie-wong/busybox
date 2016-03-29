/**************************************************************************************************
** FileName     :  c.c
** Author       :  Charlie Wong, ChangSha/HunNan/China
** EMail        :  1213charlie@163.com
** HomePage     :  https://github.com/charlie-wong/
** Date/Time    :  16/01/14 18:10:46
** Description  :  
** License      :  GNU General Public License v3 for 'c.c'
**                 See <http://www.gnu.org/licenses/> for more details.
**************************************************************************************************/
#include "libbb.h"
#include <stdio.h>
#include<unistd.h>
#include<sys/syscall.h>
#include<sys/types.h>

int wlc_main(int argc, char **argv)
{
	int i;
	printf("wlc kernel test function args\n");
	for(i = 0; i < argc; i++)
	{
		printf("arg[%d] \n", i);
	}
	printf("wlc kernel test function beg\n");
	printf("-----------------------------\n");
	pid_t pid = 0x10;
	printf("before system call = %X\n", pid);
	pid = syscall(285);
	printf("after  system call = %X\n", pid);
	printf("-----------------------------\n");
	printf("wlc kernel test function end\n");
	return 0;
}

