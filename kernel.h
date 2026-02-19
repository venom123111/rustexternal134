#include <iostream>
#include "Windows.h"
#include <TlHelp32.h>
#include <cstdint>
#include "chrono"
#include <filesystem>

#define CTL_CODE( DeviceType, Function, Method, Access ) (                 \
    ((DeviceType) << 16) | ((Access) << 14) | ((Function) << 2) | (Method) \
)

#define MouseCallBack CTL_CODE(0x00000022, 0x07855, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

namespace structs {

typedef struct _NF_MOUSE_REQUEST
{
    long x;
    long y;
    unsigned short button_flags;
}NF_MOUSE_REQUEST, * PNF_MOUSE_REQUEST;

}

namespace mem {
HANDLE driver_handle;
INT32 process_id;

bool Init()
{
    int id[4];
    __cpuid(id, 1);
    wchar_t buffer[64];

    wsprintfW(buffer, (L"\\.\\%08X"), id[0]);
    driver_handle = CreateFileW(buffer, GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);
    if (!driver_handle || (driver_handle == INVALID_HANDLE_VALUE))
        return false;
    return true;
}

void mouse_event(long x, long y, unsigned short button_flags)
{
    if (driver_handle)
    {
        ULONG bytes;
        structs::NF_MOUSE_REQUEST mouse_request = { 0 };
        mouse_request.x = x;
        mouse_request.y = y;
        mouse_request.button_flags = button_flags;
        DeviceIoControl(driver_handle, MouseCallBack, &mouse_request, sizeof(mouse_request), &mouse_request, sizeof(mouse_request), &bytes, 0);
    }
}
}