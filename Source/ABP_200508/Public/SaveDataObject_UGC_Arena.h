#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ArenaCustomizeParam.h"
#include "SaveDataObjectBase.h"
#include "SaveDataObject_UGC_Arena.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API USaveDataObject_UGC_Arena : public USaveDataObjectBase {
    GENERATED_BODY()
public:
    USaveDataObject_UGC_Arena();
    UFUNCTION(BlueprintCallable)
    void SortArenaCustomizeParam(UPARAM(Ref) TArray<FArenaCustomizeParam>& Param);
    
    UFUNCTION(BlueprintCallable)
    void SetWeatherId(int32 Index, int32 WeatherId);
    
    UFUNCTION(BlueprintCallable)
    void SetUseCount(int32 Index, int32 UseCount);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeZoneId(int32 Index, int32 TimeZoneId);
    
    UFUNCTION(BlueprintCallable)
    void SetStageTypeId(int32 Index, int32 StageTypeId);
    
    UFUNCTION(BlueprintCallable)
    void SetStageRampId(int32 Index, int32 StageRampId);
    
    UFUNCTION(BlueprintCallable)
    void SetStageObjectId(int32 Index, int32 No, int32 StageObjectId, int32 StageObjectPlaceId);
    
    UFUNCTION(BlueprintCallable)
    void SetStageMovieId(int32 Index, int32 StageMovieId);
    
    UFUNCTION(BlueprintCallable)
    void SetRingTurnbuckleCoverId(int32 Index, int32 LineNo, int32 RingTurnbuckleCoverId);
    
    UFUNCTION(BlueprintCallable)
    void SetRingSideMatId(int32 Index, int32 RingSideMatId);
    
    UFUNCTION(BlueprintCallable)
    void SetRingSideFloorId(int32 Index, int32 RingSideFloorId);
    
    UFUNCTION(BlueprintCallable)
    void SetRingSideBarricadeId(int32 Index, int32 RingSideBarricadeId);
    
    UFUNCTION(BlueprintCallable)
    void SetRingRopeId(int32 Index, int32 LineNo, int32 RingRopeId);
    
    UFUNCTION(BlueprintCallable)
    void SetRingMatId(int32 Index, int32 RingMatId);
    
    UFUNCTION(BlueprintCallable)
    void SetRingCornerPostId(int32 Index, int32 No, int32 RingCornerPostId);
    
    UFUNCTION(BlueprintCallable)
    void SetRingCornerJointId(int32 Index, int32 RingCornerJointId);
    
    UFUNCTION(BlueprintCallable)
    void SetRingApronId(int32 Index, int32 RingApronId);
    
    UFUNCTION(BlueprintCallable)
    void SetOrderNo(int32 Index, int32 OrderNo);
    
    UFUNCTION(BlueprintCallable)
    void SetLightSLId(int32 Index, int32 No, int32 LightSLId);
    
    UFUNCTION(BlueprintCallable)
    void SetLightLightEnvironmentId(int32 Index, int32 LightEnvironmentId);
    
    UFUNCTION(BlueprintCallable)
    void SetLightLEDId(int32 Index, int32 No, int32 LightLEDId);
    
    UFUNCTION(BlueprintCallable)
    void SetLastModifiedDate(int32 Index, FDateTime LastModifiedDate);
    
    UFUNCTION(BlueprintCallable)
    void SetItemID(int32 Index, FGuid ID);
    
    UFUNCTION(BlueprintCallable)
    void SetImageData(int32 Index, const TArray<uint8>& ScreenshotImageData, const TArray<uint8>& ThumbnailImageData);
    
    UFUNCTION(BlueprintCallable)
    void SetCreatedDate(int32 Index, FDateTime CreatedDate);
    
    UFUNCTION(BlueprintCallable)
    void SetArenaTransitionId(int32 Index, int32 ArenaTransitionId);
    
    UFUNCTION(BlueprintCallable)
    void SetArenaName(int32 Index, UPARAM(Ref) FString& ArenaName);
    
    UFUNCTION(BlueprintCallable)
    void SetArenaMatchupId(int32 Index, int32 ArenaMatchupId);
    
    UFUNCTION(BlueprintCallable)
    void SetArenaLogoId(int32 Index, int32 ArenaLogoId);
    
    UFUNCTION(BlueprintCallable)
    void SetArenaCustomizeParam_ALL(const TArray<FArenaCustomizeParam>& Param);
    
    UFUNCTION(BlueprintCallable)
    void SetArenaCustomizeParam(int32 Index, const FArenaCustomizeParam& Param);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeatherId(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUseCount(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTimeZoneId(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<uint8> GetThumbnailImageData(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStageTypeId(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStageRampId(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStageObjectId(int32 Index, int32 No, int32& PlaceId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStageMovieId(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<uint8> GetScreenshotImageData(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRingTurnbuckleCoverId(int32 Index, int32 LineNo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRingSideMatId(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRingSideFloorId(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRingSideBarricadeId(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRingRopeId(int32 Index, int32 LineNo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRingMatId(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRingCornerPostId(int32 Index, int32 No) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRingCornerJointId(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRingApronId(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOrderNo(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLightSLId(int32 Index, int32 No) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLightLEDId(int32 Index, int32 No) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLightEnvironmentId(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetLastModifiedDate(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetItemId(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetCreatedDate(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArenaTransitionId(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetArenaName(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArenaMatchupId(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArenaLogoId(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetArenaCustomizeParam_All(TArray<FArenaCustomizeParam>& Param) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetArenaCustomizeParam(int32 Index, FArenaCustomizeParam& Param) const;
    
};

