#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SaveDataUtilFunctionLibrary.generated.h"

class UTexture2DDynamic;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class ELITE_GAME_API USaveDataUtilFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USaveDataUtilFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static int32 ConvertRenderTargetToBufferJPEG(UTextureRenderTarget2D* TextureRenderTarget, TArray<uint8>& OutBuffer, int32 Quality);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertRenderTargetToBuffer(UTextureRenderTarget2D* TextureRenderTarget, TArray<uint8>& OutBuffer);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2DDynamic* ConvertBufferToTexture2DDynamic(const TArray<uint8>& InBuffer);
    
};

