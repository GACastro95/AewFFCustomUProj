#include "DLSSSettings.h"

UDLSSSettings::UDLSSSettings() {
    this->bEnableDLSSD3D12 = true;
    this->bEnableDLSSD3D11 = true;
    this->bEnableDLSSVulkan = false;
    this->bEnableDLSSInEditorViewports = false;
    this->bEnableScreenpercentageManipulationInDLSSEditorViewports = false;
    this->bEnableDLSSInPlayInEditorViewports = false;
    this->bShowDLSSSDebugOnScreenMessages = false;
    this->bGenericDLSSBinaryExists = false;
    this->NVIDIANGXApplicationId = 0;
    this->bCustomDLSSBinaryExists = false;
}

