#include "SaveDataUtilFunctionLibrary.h"

int32 USaveDataUtilFunctionLibrary::ConvertRenderTargetToBufferJPEG(UTextureRenderTarget2D* TextureRenderTarget, TArray<uint8>& OutBuffer, int32 Quality) {
    return 0;
}

void USaveDataUtilFunctionLibrary::ConvertRenderTargetToBuffer(UTextureRenderTarget2D* TextureRenderTarget, TArray<uint8>& OutBuffer) {
}

UTexture2DDynamic* USaveDataUtilFunctionLibrary::ConvertBufferToTexture2DDynamic(const TArray<uint8>& InBuffer) {
    return NULL;
}

USaveDataUtilFunctionLibrary::USaveDataUtilFunctionLibrary() {
}

