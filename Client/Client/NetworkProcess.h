#ifndef __NETWORK_H__
#define __NETWORK_H__
#include <Windows.h>

//////////////////////////////////////////////
// Network Function
//
//////////////////////////////////////////////
// External Call
bool Start(WCHAR * IP);
void Stop();
bool NetworkProcess();

// Internal Call
bool ProcRecv();

//////////////////////////////////////////////
// Logic Function
//
//////////////////////////////////////////////
void MoveStar(int iID, int iX, int iY);

#endif