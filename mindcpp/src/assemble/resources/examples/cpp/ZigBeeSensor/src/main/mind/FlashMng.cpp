#include "FlashMng.adl.hpp"
#include <stdio.h>
#include "FlashMngExt.hpp"


void FlashMng::WritePage(int address, int byte) {
  // @fixme Temporary removed. Add the lib projet in GitHub
  FlashMngExt flash;
  flash.WriteByte(address, byte);
  //printf("Write bytes ...\n");
  return;
}


void FlashMng::ReadPage(int address, int *byte) {
  // @fixme Temporary removed. Add the lib projet in GitHub
  FlashMngExt flash;
  flash.ReadByte(address, byte);
  //printf("Read bytes ...\n");
  return;
}
