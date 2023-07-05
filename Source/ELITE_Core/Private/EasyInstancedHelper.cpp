#include "EasyInstancedHelper.h"


void UEasyInstancedHelper::OnInitialize_Implementation() {
}


UEasyInstancedHelper::UEasyInstancedHelper() {
    this->bRegistToDefault = false;
    this->bEnableTick = false;
    this->bTickableWhenPaused = false;
    this->OwnerSubsystem = NULL;
}

