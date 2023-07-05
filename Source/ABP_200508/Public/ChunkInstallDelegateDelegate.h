#pragma once
#include "CoreMinimal.h"
#include "ChunkInstallDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FChunkInstallDelegate, int32, chunkNo);

