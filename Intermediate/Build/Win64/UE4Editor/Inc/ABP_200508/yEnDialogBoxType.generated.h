// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_yEnDialogBoxType_generated_h
#error "yEnDialogBoxType.generated.h already included, missing '#pragma once' in yEnDialogBoxType.h"
#endif
#define ABP_200508_yEnDialogBoxType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_yEnDialogBoxType_h


#define FOREACH_ENUM_YENDIALOGBOXTYPE(op) \
	op(yEnDialogBoxType::MessageDialog) \
	op(yEnDialogBoxType::TextEntryDialog) \
	op(yEnDialogBoxType::SinglePictureAndTextDialog) \
	op(yEnDialogBoxType::ThreePictureAndTextDialog) \
	op(yEnDialogBoxType::OnlyPictureDialog) \
	op(yEnDialogBoxType::OnlyTextDialog) \
	op(yEnDialogBoxType::SingleItemGetDialog) \
	op(yEnDialogBoxType::TutorialDialog) \
	op(yEnDialogBoxType::DisconnectedGamepadDialog) \
	op(yEnDialogBoxType::None) 

enum class yEnDialogBoxType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<yEnDialogBoxType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
