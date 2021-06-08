// Last Update:2021-06-07 18:24:25
/**
 * @file server.cpp
 * @brief 
 * @author tczengming@163.com www.benewtech.cn
 * @version 0.1.00
 * @date 2021-06-07
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <kbz-event.h>

int main() {

	for (;;) {
		char *buf;
		int len;

		// wait event from channel 123. timeout 1s.
		if (kbz_event_get(1, 1000, (void **)&buf, &len) == 0) {
			// if not timeout
			// buffer is available until next kbz_event_get call.
			printf("---------------got: %s %d:\n", buf, len);
		} else {
			printf("%s %d\n", __func__, __LINE__);
		}
		//sleep(1);
	}

	return 0;
}
