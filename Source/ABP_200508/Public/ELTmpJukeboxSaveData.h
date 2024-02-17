#pragma once
#include "CoreMinimal.h"
#include "EJukeBoxFilterType.h"
#include "ELTmpJukeboxSaveData.generated.h"

USTRUCT(BlueprintType)
struct FELTmpJukeboxSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_sEnableJukeBoxArray[512];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_sJukeBoxPlayedListArray[512];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_sJukeBoxPlaylistSortNumArray[512];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRandomPlayback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCreateSavedata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJukeBoxFilterType m_JukeBoxFilter;
    
    ABP_200508_API FELTmpJukeboxSaveData();
};

