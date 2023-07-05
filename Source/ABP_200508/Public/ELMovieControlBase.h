#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMovieType.h"
#include "ELMovieControlBase.generated.h"

class UELMovieControlBase;
class UELMoviePlayerBase;
class UTexture;

UCLASS(Blueprintable)
class ABP_200508_API UELMovieControlBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UELMoviePlayerBase*> m_cPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UTexture*> m_cTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FString> m_cTexturePaths;
    
public:
    UELMovieControlBase();
    UFUNCTION(BlueprintCallable)
    bool SuspendAll(TArray<int32> Excludes);
    
    UFUNCTION(BlueprintCallable)
    bool StopAll(TArray<int32> Excludes);
    
    UFUNCTION(BlueprintCallable)
    UELMoviePlayerBase* StartPrepare(int32 MovieSlotID, FName MovieDataID, bool Loop);
    
    UFUNCTION(BlueprintCallable)
    bool SetupWithTexturePath(UELMoviePlayerBase*& Player, int32 SlotNo, const FString& TexturePath, bool IsLooping, bool DropOldMovie, EMovieType MovieType);
    
    UFUNCTION(BlueprintCallable)
    bool SetupWithTexture(UELMoviePlayerBase*& Player, int32 SlotNo, UTexture* Texture, bool IsLooping, bool DropOldMovie, EMovieType MovieType);
    
    UFUNCTION(BlueprintCallable)
    bool Setup(UELMoviePlayerBase*& Player, int32 SlotNo, bool IsLooping, bool DropOldMovie, EMovieType MovieType);
    
    UFUNCTION(BlueprintCallable)
    bool SetTexturePathList(TMap<int32, FString> TexturePaths);
    
    UFUNCTION(BlueprintCallable)
    bool SetTextureList(TMap<int32, UTexture*> Textures);
    
    UFUNCTION(BlueprintCallable)
    bool SeekAll(float Time, TArray<int32> Excludes);
    
    UFUNCTION(BlueprintCallable)
    bool ResumeAll(TArray<int32> Excludes);
    
    UFUNCTION(BlueprintCallable)
    bool PlayAll(TArray<int32> Excludes);
    
    UFUNCTION(BlueprintCallable)
    bool IsPreparedAll(TArray<int32> Excludes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlphaMovie(int32 MovieSlotID) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayer(UELMoviePlayerBase*& Player, int32 SlotNo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetMoviePath(const FName& MovieDataID, FString& MoviePath);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetMovieFrames(const FName& MovieDataID, float& FadeInTime, float& FadeOutTime, float& TotalTime);
    
    UFUNCTION(BlueprintCallable)
    bool DestroyAll();
    
    UFUNCTION(BlueprintCallable)
    bool Destroy(int32 SlotNo);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateMovieControl(UELMovieControlBase* ELMovieControlBase);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeMovieResource(UELMoviePlayerBase*& Player, int32 SlotNo, const FString& MoviePath, bool IsLooping);
    
};

