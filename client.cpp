// Last Update:2021-06-07 19:18:46
/**
 * @file client.cpp
 * @brief 
 * @author tczengming@163.com www.benewtech.cn
 * @version 0.1.00
 * @date 2021-06-07
 */

#include <unistd.h>
#include <stdio.h>
#include <kbz-event.h>

int main() {
  // post event to channel 123.
  char hello[] = "hello";
  //while (true)
  {
      printf("%s %d\n", __func__, __LINE__);
      kbz_event_post(1, hello, 6);
      //sleep(3);
      printf("%s %d\n", __func__, __LINE__);
  }
  return 0;
}
