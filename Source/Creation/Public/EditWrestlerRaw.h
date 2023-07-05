#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WrestlerNameString.h"
#include "ELMatchRecordsWrestlerInfo.h"
#include "PersonalityParam.h"
#include "WrestlingSkillParam.h"
#include "AttireParam.h"
#include "BasicWrestlerParam.h"
#include "CommonWrestlerRaw.h"
#include "EditWrestlerSettings.h"
#include "NamedPresetParam.h"
#include "EditWrestlerRaw.generated.h"

USTRUCT(BlueprintType)
struct FEditWrestlerRaw {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime CreateDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonWrestlerRaw COMMON;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWrestlerNameString WrestlerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicWrestlerParam BasicParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttireParam Bodies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttireParam PlainClothes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPersonalityParam Personality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWrestlingSkillParam Skills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditWrestlerSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMatchRecordsWrestlerInfo MatchRecordsWrestlerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNamedPresetParam> Presets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ThumbnailData;
    
    CREATION_API FEditWrestlerRaw();
};

