#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArenaSaveData.generated.h"

USTRUCT(BlueprintType)
struct FArenaSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrderNo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 CreatedDateTicks;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 LastModifiedDateTicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArenaLogoId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArenaMatchupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArenaTransitionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ArenaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingMatId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingRopeId[12];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingCornerPostId[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingCornerJointId[12];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingTurnbuckleCoverId[12];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingApronId[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingSideMatId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingSideFloorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingSideBarricadeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageTypeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageMovieId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageMinitronId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageHeaderId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageWallId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageRampId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageObjectId[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageObjectPlaceId[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightLEDId[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightSLId[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightEnvironmentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeZoneId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeatherId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AudienceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ScreenshotImageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ThumbnailImageData;
    
    ABP_200508_API FArenaSaveData();
};

