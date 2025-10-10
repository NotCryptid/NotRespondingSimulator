#include <windows.h>
int WINAPI WinMain(HINSTANCE h, HINSTANCE, LPSTR, int) {
    HWND w = CreateWindowExA(0, "STATIC", "naw gng i ain't running", WS_OVERLAPPEDWINDOW|WS_VISIBLE,
                             CW_USEDEFAULT, CW_USEDEFAULT, 320, 200, 0, 0, h, 0);
    ShowWindow(w, SW_SHOW);
    UpdateWindow(w);
    Sleep(INFINITE);
    return 0;
}
