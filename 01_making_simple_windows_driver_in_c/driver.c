// from https://www.youtube.com/watch?v=GTrekHE8A00
// this is not a standard??
#define _AMD64_
#include <wdm.h>

NTSTATUS DriverEntry(void* a, void* b) {
  DbgPrint("Hello from th driver!");
  return STATUS_SUCCESS;
}
