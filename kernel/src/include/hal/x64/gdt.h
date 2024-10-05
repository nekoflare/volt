#ifndef __GDT_H__
#define __GDT_H__

#include <stdint.h>

typedef struct {
	uint16_t limit;
	uintptr_t base;
} __attribute((packed)) gdtPointer_t;

typedef struct {
	uint16_t limitLow;
	uint16_t baseLow;
	uint8_t baseMid;
	uint8_t accessByte;
	uint8_t limitHighAndFlags;
	uint8_t baseHigh;
} __attribute((packed)) gdtEntry_t;

void gdt_init();
void gdt_flush(gdtPointer_t gdtr);

#endif // __GDT_H__