#include "YCAM_DebugMenu.h"

UYCAM_DebugMenu::UYCAM_DebugMenu() {
    this->menuId = -1;
    this->PreviewIdxNow = 0;
    this->MaxPreview = 0;
    this->PreviewIdxJump = 0;
    this->isDeleteDuplicateCategory = true;
    this->isEndless = false;
    this->isScreenShot = false;
    this->isNotThreadTickAsyncPlayer = false;
}















void UYCAM_DebugMenu::ConvertTexture2DToBuffer(const TSoftObjectPtr<UTexture2D>& Texture, TArray<uint8>& OutBuffer) {
}



