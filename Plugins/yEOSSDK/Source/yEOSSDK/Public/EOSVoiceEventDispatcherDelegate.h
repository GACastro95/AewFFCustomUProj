#pragma once
#include "CoreMinimal.h"
#include "EEOSVoiceEvent.h"
#include "EOSVoiceEventDispatcherDelegate.generated.h"

class UEOSVoice;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEOSVoiceEventDispatcher, EEOSVoiceEvent, EOSVoiceEvent, UEOSVoice*, EOSVoice);

