#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETutorialCategory.h"
#include "TutorialDialogResourceParam.h"
#include "ExecuteTutorialDialogParam.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FExecuteTutorialDialogParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Memo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETutorialCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VoiceCueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> VoiceImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvalidArchive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTutorialDialogResourceParam> ResourceParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LinkUnlockableItemID;
    
    ABP_200508_API FExecuteTutorialDialogParam();
};

