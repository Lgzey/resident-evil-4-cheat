#include <iostream>
#include <windows.h>
#include <tlhelp32.h>

using namespace std;

int main(){

int money_ = 0x4FA8;
int money_ptr = 0x0125A760;
int DW_money= money_+money_ptr;
int aim ;

cout << "Money: ";
cin >> aim;

DWORD IDprOC;
DWORD m0ney = (DWORD) DW_money;

HWND TAP = FindWindowA(NULL,"Resident Evil 4");
GetWindowThreadProcessId(TAP,&IDprOC);
HANDLE proccess = OpenProcess(PROCESS_ALL_ACCESS, FALSE,IDprOC);
WriteProcessMemory(proccess,(PBYTE*)m0ney,&aim,sizeof(aim),0);

return 0;
}