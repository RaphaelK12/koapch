#pragma once

//////////////////////////////////////////////////////////////////////////////////////////////

void * operator new(size_t theSize) throw();
void * operator new[] (size_t theSize) throw();

void operator delete(void * thePtr) throw();
void operator delete[](void * thePtr) throw();