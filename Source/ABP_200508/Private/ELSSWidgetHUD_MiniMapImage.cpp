#include "ELSSWidgetHUD_MiniMapImage.h"

bool UELSSWidgetHUD_MiniMapImage::SetMapTexture(int32 InMapIndex) {
    return false;
}


UELSSWidgetHUD_MiniMapImage::UELSSWidgetHUD_MiniMapImage() {
    this->MapImage = NULL;
    this->MapTypeDataTable = NULL;
    this->DefaultMinimapId = 10000;
}

