#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "yEnDialogBoxChoices.h"
#include "yEnDialogBoxResult.h"
#include "DialogBoxChoicesParam.generated.h"

USTRUCT(BlueprintType)
struct FDialogBoxChoicesParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    yEnDialogBoxChoices m_Choices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_ChoicesName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    yEnDialogBoxResult m_Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCancelable;
    
    ABP_200508_API FDialogBoxChoicesParam();
};

