// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/CustomWrestlerAssistComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomWrestlerAssistComponent() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UCustomWrestlerAssistComponent_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UCustomWrestlerAssistComponent();
	CREATION_API UClass* Z_Construct_UClass_UMyWrestlerDataEditComponent();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EPreviewAttire();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EEditTexTarget();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPaintParam();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EEditPartsSlot();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsParam();
	CREATION_API UClass* Z_Construct_UClass_UEditWrestlerPaintAsset_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UEditWrestlerPartsAsset_NoRegister();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPaintData();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsData();
	ABP_200508_API UClass* Z_Construct_UClass_UMyWrestlerDataObject_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UTemplateScoutAsset_NoRegister();
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EScoutWrestlerTemplateOption();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EBasicFunctionResult();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FAttireData();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsCategoryDetails();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EAttireType();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FNamedPresetParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FAttireParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPersonParam();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EFaceType();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGender();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EBasicWrestlerIntParamType();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EBasicFindResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditColorParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditColorPack();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsCategoryName();
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsKey();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedColorList();
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FAttireDataSet();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FCostumeParam();
	ELITE_API UFunction* Z_Construct_UDelegateFunction_ELITE_OnAssetLoadFinishedDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execAddEditPaintParam)
	{
		P_GET_ENUM(EPreviewAttire,Z_Param_AttireType);
		P_GET_ENUM(EEditTexTarget,Z_Param_PaintSlot);
		P_GET_STRUCT_REF(FEditPaintParam,Z_Param_Out_NewParam);
		P_GET_PROPERTY(FIntProperty,Z_Param_PresetNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddEditPaintParam(EPreviewAttire(Z_Param_AttireType),EEditTexTarget(Z_Param_PaintSlot),Z_Param_Out_NewParam,Z_Param_PresetNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execAddEditPartsParam)
	{
		P_GET_ENUM(EPreviewAttire,Z_Param_AttireType);
		P_GET_ENUM(EEditPartsSlot,Z_Param_PartsSlot);
		P_GET_STRUCT_REF(FEditPartsParam,Z_Param_Out_NewParam);
		P_GET_PROPERTY(FIntProperty,Z_Param_PresetNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddEditPartsParam(EPreviewAttire(Z_Param_AttireType),EEditPartsSlot(Z_Param_PartsSlot),Z_Param_Out_NewParam,Z_Param_PresetNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execAddLoadEditPaintsAsset)
	{
		P_GET_ENUM(EPreviewAttire,Z_Param_InAttire);
		P_GET_ENUM(EEditTexTarget,Z_Param_InSlot);
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UEditWrestlerPaintAsset>,Z_Param_Out_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddLoadEditPaintsAsset(EPreviewAttire(Z_Param_InAttire),EEditTexTarget(Z_Param_InSlot),Z_Param_Out_Asset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execAddLoadEditPartsAsset)
	{
		P_GET_ENUM(EPreviewAttire,Z_Param_InAttire);
		P_GET_ENUM(EEditPartsSlot,Z_Param_InSlot);
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UEditWrestlerPartsAsset>,Z_Param_Out_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddLoadEditPartsAsset(EPreviewAttire(Z_Param_InAttire),EEditPartsSlot(Z_Param_InSlot),Z_Param_Out_Asset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execAddNewPreset)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_NewPresetName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NewIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SourcePresetIndex);
		P_GET_UBOOL(Z_Param_bCopy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddNewPreset(Z_Param_Out_NewPresetName,Z_Param_Out_NewIndex,Z_Param_SourcePresetIndex,Z_Param_bCopy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execAddPreviewPaintData)
	{
		P_GET_ENUM(EPreviewAttire,Z_Param_AttireType);
		P_GET_ENUM(EEditTexTarget,Z_Param_PaintSlot);
		P_GET_STRUCT_REF(FEditPaintData,Z_Param_Out_NewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPreviewPaintData(EPreviewAttire(Z_Param_AttireType),EEditTexTarget(Z_Param_PaintSlot),Z_Param_Out_NewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execAddPreviewPartsData)
	{
		P_GET_ENUM(EPreviewAttire,Z_Param_AttireType);
		P_GET_ENUM(EEditPartsSlot,Z_Param_PartsSlot);
		P_GET_STRUCT_REF(FEditPartsData,Z_Param_Out_NewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPreviewPartsData(EPreviewAttire(Z_Param_AttireType),EEditPartsSlot(Z_Param_PartsSlot),Z_Param_Out_NewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execApplyTemplateData)
	{
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param_TargetObject);
		P_GET_OBJECT(UTemplateScoutAsset,Z_Param_TemplateScoutAsset);
		P_GET_ENUM(EScoutWrestlerTemplateOption,Z_Param_Option);
		P_GET_ENUM_REF(EBasicFunctionResult,Z_Param_Out_resultType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyWrestlerDataObject**)Z_Param__Result=P_THIS->ApplyTemplateData(Z_Param_TargetObject,Z_Param_TemplateScoutAsset,EScoutWrestlerTemplateOption(Z_Param_Option),(EBasicFunctionResult&)(Z_Param_Out_resultType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execCanEditStreetClothes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanEditStreetClothes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execCheckCompatiableImpl)
	{
		P_GET_STRUCT_REF(FAttireData,Z_Param_Out_CoordinateData);
		P_GET_STRUCT_REF(FEditPartsCategoryDetails,Z_Param_Out_EditPartsCategoryDetails);
		P_GET_TSET_REF(EEditPartsSlot,Z_Param_Out_EquippedParts);
		P_GET_TSET_REF(EEditPartsSlot,Z_Param_Out_IncompatiableParts);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckCompatiableImpl(Z_Param_Out_CoordinateData,Z_Param_Out_EditPartsCategoryDetails,Z_Param_Out_EquippedParts,Z_Param_Out_IncompatiableParts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execCheckFinishedAssetLoad)
	{
		P_GET_UBOOL(Z_Param_bWithNotStarted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckFinishedAssetLoad(Z_Param_bWithNotStarted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execCheckFinishLoadEditPaints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckFinishLoadEditPaints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execCheckFinishLoadEditParts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckFinishLoadEditParts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execCheckModify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckModify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execClearAllLoadCue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllLoadCue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execCopyAllAttire)
	{
		P_GET_UBOOL(Z_Param_bRevert);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyAllAttire(Z_Param_bRevert);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execCopyAttire)
	{
		P_GET_ENUM(EPreviewAttire,Z_Param_AttireType);
		P_GET_UBOOL(Z_Param_bRevert);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyAttire(EPreviewAttire(Z_Param_AttireType),Z_Param_bRevert);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetAllEquippedPartsIDs)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_EquippedPartsIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllEquippedPartsIDs(Z_Param_Out_EquippedPartsIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetAssetCompatibleData)
	{
		P_GET_TSET_REF(EEditPartsSlot,Z_Param_Out_SomeUnpossible);
		P_GET_TSET_REF(EEditPartsSlot,Z_Param_Out_AllUnpossible);
		P_GET_OBJECT(UEditWrestlerPartsAsset,Z_Param_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAssetCompatibleData(Z_Param_Out_SomeUnpossible,Z_Param_Out_AllUnpossible,Z_Param_Asset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetCurrentAttireType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAttireType*)Z_Param__Result=P_THIS->GetCurrentAttireType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetCurrentPreset)
	{
		P_GET_STRUCT_REF(FNamedPresetParam,Z_Param_Out_Preset);
		P_GET_UBOOL(Z_Param_bPreview);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCurrentPreset(Z_Param_Out_Preset,Z_Param_bPreview);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetEditAttireParam)
	{
		P_GET_ENUM(EPreviewAttire,Z_Param_AttireType);
		P_GET_STRUCT_REF(FAttireParam,Z_Param_Out_Out);
		P_GET_PROPERTY(FIntProperty,Z_Param_PresetNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEditAttireParam(EPreviewAttire(Z_Param_AttireType),Z_Param_Out_Out,Z_Param_PresetNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetEditPaintParam)
	{
		P_GET_STRUCT_REF(FEditPaintParam,Z_Param_Out_Out);
		P_GET_ENUM(EPreviewAttire,Z_Param_AttireType);
		P_GET_ENUM(EEditTexTarget,Z_Param_PaintSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_PresetNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEditPaintParam(Z_Param_Out_Out,EPreviewAttire(Z_Param_AttireType),EEditTexTarget(Z_Param_PaintSlot),Z_Param_PresetNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetEditPartsParam)
	{
		P_GET_STRUCT_REF(FEditPartsParam,Z_Param_Out_Out);
		P_GET_ENUM(EPreviewAttire,Z_Param_AttireType);
		P_GET_ENUM(EEditPartsSlot,Z_Param_PartsSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_PresetNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEditPartsParam(Z_Param_Out_Out,EPreviewAttire(Z_Param_AttireType),EEditPartsSlot(Z_Param_PartsSlot),Z_Param_PresetNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetEditPerson)
	{
		P_GET_STRUCT_REF(FEditPersonParam,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetEditPerson(Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetFaceType)
	{
		P_GET_ENUM_REF(EFaceType,Z_Param_Out_FaceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFaceType((EFaceType&)(Z_Param_Out_FaceType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetGender)
	{
		P_GET_ENUM_REF(EGender,Z_Param_Out_Gender);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGender((EGender&)(Z_Param_Out_Gender));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetNickName)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_NickName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNickName(Z_Param_Out_NickName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetNickNameText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NickName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNickNameText(Z_Param_Out_NickName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetPersonParam)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Out);
		P_GET_ENUM(EBasicWrestlerIntParamType,Z_Param_ParamType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPersonParam(Z_Param_Out_Out,EBasicWrestlerIntParamType(Z_Param_ParamType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetPreset)
	{
		P_GET_STRUCT_REF(FNamedPresetParam,Z_Param_Out_Preset);
		P_GET_PROPERTY(FIntProperty,Z_Param_PresetNo);
		P_GET_UBOOL(Z_Param_bPreview);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPreset(Z_Param_Out_Preset,Z_Param_PresetNo,Z_Param_bPreview);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetPresetNames)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPresetNames(Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetPreviewAttire)
	{
		P_GET_ENUM(EPreviewAttire,Z_Param_AttireType);
		P_GET_STRUCT_REF(FAttireData,Z_Param_Out_AttireData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPreviewAttire(EPreviewAttire(Z_Param_AttireType),Z_Param_Out_AttireData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetPreviewAttireConst)
	{
		P_GET_ENUM(EPreviewAttire,Z_Param_AttireType);
		P_GET_STRUCT_REF(FAttireData,Z_Param_Out_AttireData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPreviewAttireConst(EPreviewAttire(Z_Param_AttireType),Z_Param_Out_AttireData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetPreviewCoordinate)
	{
		P_GET_ENUM(EAttireType,Z_Param_AttireType);
		P_GET_STRUCT_REF(FAttireData,Z_Param_Out_CoordinateData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPreviewCoordinate(EAttireType(Z_Param_AttireType),Z_Param_Out_CoordinateData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetPreviewPaintData)
	{
		P_GET_STRUCT_REF(FEditPaintData,Z_Param_Out_Out);
		P_GET_ENUM_REF(EBasicFindResult,Z_Param_Out_Result);
		P_GET_ENUM(EPreviewAttire,Z_Param_AttireType);
		P_GET_ENUM(EEditTexTarget,Z_Param_PaintSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPreviewPaintData(Z_Param_Out_Out,(EBasicFindResult&)(Z_Param_Out_Result),EPreviewAttire(Z_Param_AttireType),EEditTexTarget(Z_Param_PaintSlot));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetPreviewPartsData)
	{
		P_GET_STRUCT_REF(FEditPartsData,Z_Param_Out_Out);
		P_GET_ENUM_REF(EBasicFindResult,Z_Param_Out_Result);
		P_GET_ENUM(EPreviewAttire,Z_Param_AttireType);
		P_GET_ENUM(EEditPartsSlot,Z_Param_PartsSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPreviewPartsData(Z_Param_Out_Out,(EBasicFindResult&)(Z_Param_Out_Result),EPreviewAttire(Z_Param_AttireType),EEditPartsSlot(Z_Param_PartsSlot));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetShortName)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ShortName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetShortName(Z_Param_Out_ShortName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetShortNameText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_ShortName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetShortNameText(Z_Param_Out_ShortName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetSnsName)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SNSName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSnsName(Z_Param_Out_SNSName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetSnsNameText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_SNSName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSnsNameText(Z_Param_Out_SNSName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetTemporaryAttire)
	{
		P_GET_ENUM(EPreviewAttire,Z_Param_AttireType);
		P_GET_STRUCT_REF(FAttireData,Z_Param_Out_AttireData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTemporaryAttire(EPreviewAttire(Z_Param_AttireType),Z_Param_Out_AttireData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetUID)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_UID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUID(Z_Param_Out_UID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetWrestlerID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=P_THIS->GetWrestlerID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetWrestlerName)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_UpperName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_LowerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWrestlerName(Z_Param_Out_UpperName,Z_Param_Out_LowerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetWrestlerNameText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_WrestlerName);
		P_GET_UBOOL(Z_Param_bUpper);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWrestlerNameText(Z_Param_Out_WrestlerName,Z_Param_bUpper);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execGetWrestlerProfilesTexts)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_WrestlerNameText);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_WrestlerSnsText);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_WeightText);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_HeightText);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_HomeTownText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWrestlerProfilesTexts(Z_Param_Out_WrestlerNameText,Z_Param_Out_WrestlerSnsText,Z_Param_Out_WeightText,Z_Param_Out_HeightText,Z_Param_Out_HomeTownText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execIsDisplayBirthday)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDisplayBirthday();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execIsDisplayHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDisplayHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execIsDisplayHomeTown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDisplayHomeTown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execIsDisplayWeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDisplayWeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execIsLoading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoading();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execIsModify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsModify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execLoadEditPaintsAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadEditPaintsAssets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execLoadEditPartsAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadEditPartsAssets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execMakeColorPacks)
	{
		P_GET_TARRAY_REF(FEditColorParam,Z_Param_Out_ColorPallet);
		P_GET_TARRAY_REF(FEditColorPack,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakeColorPacks(Z_Param_Out_ColorPallet,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execMakeIgnoreCategories)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_GET_ENUM(EGender,Z_Param_Gender);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FEditPartsCategoryName>*)Z_Param__Result=P_THIS->MakeIgnoreCategories_Implementation(EWrestlerID_N(Z_Param_WrestlerID),EGender(Z_Param_Gender));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execOnCompleteAssetLoad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompleteAssetLoad_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execOnFinishCustomize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFinishCustomize_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execOnReset)
	{
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param_NewData);
		P_GET_PROPERTY(FIntProperty,Z_Param_PresetNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReset_Implementation(Z_Param_NewData,Z_Param_PresetNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execOnStartCustomize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartCustomize_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execPostLoad_EditPaintAsset)
	{
		P_GET_STRUCT_REF(FEditPartsKey,Z_Param_Out_Key);
		P_GET_OBJECT(UEditWrestlerPaintAsset,Z_Param_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostLoad_EditPaintAsset(Z_Param_Out_Key,Z_Param_Asset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execPostLoad_EditPartsAsset)
	{
		P_GET_STRUCT_REF(FEditPartsKey,Z_Param_Out_Key);
		P_GET_OBJECT(UEditWrestlerPartsAsset,Z_Param_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostLoad_EditPartsAsset(Z_Param_Out_Key,Z_Param_Asset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execRelocateFacialParts)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PartsID);
		P_GET_UBOOL(Z_Param_bPreview);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RelocateFacialParts(Z_Param_PartsID,Z_Param_bPreview);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execRemoveAttires)
	{
		P_GET_ENUM(EAttireType,Z_Param_AttireType);
		P_GET_TSET_REF(EEditPartsSlot,Z_Param_Out_PartsSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAttires(EAttireType(Z_Param_AttireType),Z_Param_Out_PartsSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execRemoveEditPaintParam)
	{
		P_GET_ENUM(EPreviewAttire,Z_Param_PreviewAttireType);
		P_GET_ENUM(EEditTexTarget,Z_Param_PaintSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_PresetNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveEditPaintParam(EPreviewAttire(Z_Param_PreviewAttireType),EEditTexTarget(Z_Param_PaintSlot),Z_Param_PresetNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execRemoveEditPartsParam)
	{
		P_GET_ENUM(EPreviewAttire,Z_Param_AttireType);
		P_GET_ENUM(EEditPartsSlot,Z_Param_PartsSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_PresetNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveEditPartsParam(EPreviewAttire(Z_Param_AttireType),EEditPartsSlot(Z_Param_PartsSlot),Z_Param_PresetNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execRemovePreset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TargetPresetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemovePreset(Z_Param_TargetPresetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execRemovePreviewPaintData)
	{
		P_GET_ENUM(EPreviewAttire,Z_Param_AttireType);
		P_GET_ENUM(EEditTexTarget,Z_Param_PaintSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePreviewPaintData(EPreviewAttire(Z_Param_AttireType),EEditTexTarget(Z_Param_PaintSlot));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execRemovePreviewPartsData)
	{
		P_GET_ENUM(EPreviewAttire,Z_Param_AttireType);
		P_GET_ENUM(EEditPartsSlot,Z_Param_PartsSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePreviewPartsData(EPreviewAttire(Z_Param_AttireType),EEditPartsSlot(Z_Param_PartsSlot));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execResetModify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetModify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execResetPreviewAttire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetPreviewAttire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execResetTemporaryAttire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetTemporaryAttire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execSearchFaceType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PartsID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFaceType*)Z_Param__Result=P_THIS->SearchFaceType(Z_Param_PartsID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execSelectPreset)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bChanged);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewPresetNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectPreset(Z_Param_Out_bChanged,Z_Param_NewPresetNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execSetCurrentAttireType)
	{
		P_GET_ENUM(EAttireType,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentAttireType(EAttireType(Z_Param_NewValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execSetNickName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NickName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNickName(Z_Param_NickName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execSetPersonParam)
	{
		P_GET_ENUM(EBasicWrestlerIntParamType,Z_Param_ParamType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPersonParam(EBasicWrestlerIntParamType(Z_Param_ParamType),Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execSetPreset)
	{
		P_GET_STRUCT_REF(FNamedPresetParam,Z_Param_Out_NewPreset);
		P_GET_PROPERTY(FIntProperty,Z_Param_PresetNo);
		P_GET_UBOOL(Z_Param_bPreview);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetPreset(Z_Param_Out_NewPreset,Z_Param_PresetNo,Z_Param_bPreview);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execSetPreviewAttire)
	{
		P_GET_ENUM(EPreviewAttire,Z_Param_AttireType);
		P_GET_STRUCT(FAttireData,Z_Param_NewAttireData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreviewAttire(EPreviewAttire(Z_Param_AttireType),Z_Param_NewAttireData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execSetPreviewBodyMode)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreviewBodyMode(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execSetShortName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ShortName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShortName(Z_Param_ShortName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execSetSnsName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SNSName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSnsName(Z_Param_SNSName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execSetWrestlerName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UpperName);
		P_GET_PROPERTY(FStrProperty,Z_Param_LowerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWrestlerName(Z_Param_UpperName,Z_Param_LowerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execUpdateAssetLoadingStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateAssetLoadingStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execUpdateIgnoreCategories)
	{
		P_GET_TSET(FEditPartsCategoryName,Z_Param_NewSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateIgnoreCategories(Z_Param_NewSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execUpdatePaintAttire)
	{
		P_GET_ENUM(EPreviewAttire,Z_Param_PreviewAttireType);
		P_GET_ENUM(EEditTexTarget,Z_Param_PaintSlot);
		P_GET_STRUCT_REF(FEditPaintParam,Z_Param_Out_NewParam);
		P_GET_UBOOL(Z_Param_bPreview);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePaintAttire(EPreviewAttire(Z_Param_PreviewAttireType),EEditTexTarget(Z_Param_PaintSlot),Z_Param_Out_NewParam,Z_Param_bPreview);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execUpdatePaintColor)
	{
		P_GET_ENUM(EEditTexTarget,Z_Param_PaintSlot);
		P_GET_ENUM(EAttireType,Z_Param_AttireType);
		P_GET_PROPERTY(FIntProperty,Z_Param_ColorSlotNo);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewColorID);
		P_GET_UBOOL(Z_Param_bPreview);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePaintColor(EEditTexTarget(Z_Param_PaintSlot),EAttireType(Z_Param_AttireType),Z_Param_ColorSlotNo,Z_Param_NewColorID,Z_Param_bPreview);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execUpdatePaintColors)
	{
		P_GET_ENUM(EEditTexTarget,Z_Param_PaintSlot);
		P_GET_ENUM(EAttireType,Z_Param_AttireType);
		P_GET_STRUCT(FIndexedColorList,Z_Param_ColorIDs);
		P_GET_UBOOL(Z_Param_bPreview);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePaintColors(EEditTexTarget(Z_Param_PaintSlot),EAttireType(Z_Param_AttireType),Z_Param_ColorIDs,Z_Param_bPreview);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execUpdatePartsAttire)
	{
		P_GET_ENUM(EPreviewAttire,Z_Param_PreviewAttireType);
		P_GET_ENUM(EEditPartsSlot,Z_Param_PartsSlot);
		P_GET_STRUCT_REF(FEditPartsParam,Z_Param_Out_NewParam);
		P_GET_UBOOL(Z_Param_bPreview);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePartsAttire(EPreviewAttire(Z_Param_PreviewAttireType),EEditPartsSlot(Z_Param_PartsSlot),Z_Param_Out_NewParam,Z_Param_bPreview);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execUpdatePartsColor)
	{
		P_GET_ENUM(EEditPartsSlot,Z_Param_PartsSlot);
		P_GET_ENUM(EAttireType,Z_Param_AttireType);
		P_GET_PROPERTY(FIntProperty,Z_Param_ColorSlotNo);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewColorID);
		P_GET_UBOOL(Z_Param_bPreview);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdatePartsColor(EEditPartsSlot(Z_Param_PartsSlot),EAttireType(Z_Param_AttireType),Z_Param_ColorSlotNo,Z_Param_NewColorID,Z_Param_bPreview);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execUpdatePartsColors)
	{
		P_GET_ENUM(EEditPartsSlot,Z_Param_PartsSlot);
		P_GET_ENUM(EAttireType,Z_Param_AttireType);
		P_GET_STRUCT(FIndexedColorList,Z_Param_ColorIDs);
		P_GET_UBOOL(Z_Param_bPreview);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdatePartsColors(EEditPartsSlot(Z_Param_PartsSlot),EAttireType(Z_Param_AttireType),Z_Param_ColorIDs,Z_Param_bPreview);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execUpdatePresetName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Preset);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewPresetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePresetName(Z_Param_Preset,Z_Param_NewPresetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execUpdatePreviewPersonParam)
	{
		P_GET_ENUM(EBasicWrestlerIntParamType,Z_Param_ParamType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_GET_UBOOL(Z_Param_bPreview);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePreviewPersonParam(EBasicWrestlerIntParamType(Z_Param_ParamType),Z_Param_NewValue,Z_Param_bPreview);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomWrestlerAssistComponent::execValidateFaceType)
	{
		P_GET_ENUM_REF(EFaceType,Z_Param_Out_NowFaceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ValidateFaceType((EFaceType&)(Z_Param_Out_NowFaceType));
		P_NATIVE_END;
	}
	static FName NAME_UCustomWrestlerAssistComponent_MakeIgnoreCategories = FName(TEXT("MakeIgnoreCategories"));
	TSet<FEditPartsCategoryName> UCustomWrestlerAssistComponent::MakeIgnoreCategories(const EWrestlerID_N WrestlerID, const EGender Gender)
	{
		CustomWrestlerAssistComponent_eventMakeIgnoreCategories_Parms Parms;
		Parms.WrestlerID=WrestlerID;
		Parms.Gender=Gender;
		ProcessEvent(FindFunctionChecked(NAME_UCustomWrestlerAssistComponent_MakeIgnoreCategories),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UCustomWrestlerAssistComponent_OnCompleteAssetLoad = FName(TEXT("OnCompleteAssetLoad"));
	void UCustomWrestlerAssistComponent::OnCompleteAssetLoad()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCustomWrestlerAssistComponent_OnCompleteAssetLoad),NULL);
	}
	static FName NAME_UCustomWrestlerAssistComponent_OnFinishCustomize = FName(TEXT("OnFinishCustomize"));
	void UCustomWrestlerAssistComponent::OnFinishCustomize()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCustomWrestlerAssistComponent_OnFinishCustomize),NULL);
	}
	static FName NAME_UCustomWrestlerAssistComponent_OnLoadFinished_EditPaints = FName(TEXT("OnLoadFinished_EditPaints"));
	void UCustomWrestlerAssistComponent::OnLoadFinished_EditPaints()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCustomWrestlerAssistComponent_OnLoadFinished_EditPaints),NULL);
	}
	static FName NAME_UCustomWrestlerAssistComponent_OnLoadFinished_EditParts = FName(TEXT("OnLoadFinished_EditParts"));
	void UCustomWrestlerAssistComponent::OnLoadFinished_EditParts()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCustomWrestlerAssistComponent_OnLoadFinished_EditParts),NULL);
	}
	static FName NAME_UCustomWrestlerAssistComponent_OnRelocateFacialParts = FName(TEXT("OnRelocateFacialParts"));
	void UCustomWrestlerAssistComponent::OnRelocateFacialParts(const EFaceType NewFaceType, const EFaceType PrevFaceType, bool bPreview)
	{
		CustomWrestlerAssistComponent_eventOnRelocateFacialParts_Parms Parms;
		Parms.NewFaceType=NewFaceType;
		Parms.PrevFaceType=PrevFaceType;
		Parms.bPreview=bPreview ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCustomWrestlerAssistComponent_OnRelocateFacialParts),&Parms);
	}
	static FName NAME_UCustomWrestlerAssistComponent_OnReset = FName(TEXT("OnReset"));
	void UCustomWrestlerAssistComponent::OnReset(UMyWrestlerDataObject* NewData, const int32 PresetNo)
	{
		CustomWrestlerAssistComponent_eventOnReset_Parms Parms;
		Parms.NewData=NewData;
		Parms.PresetNo=PresetNo;
		ProcessEvent(FindFunctionChecked(NAME_UCustomWrestlerAssistComponent_OnReset),&Parms);
	}
	static FName NAME_UCustomWrestlerAssistComponent_OnStartCustomize = FName(TEXT("OnStartCustomize"));
	void UCustomWrestlerAssistComponent::OnStartCustomize()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCustomWrestlerAssistComponent_OnStartCustomize),NULL);
	}
	void UCustomWrestlerAssistComponent::StaticRegisterNativesUCustomWrestlerAssistComponent()
	{
		UClass* Class = UCustomWrestlerAssistComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEditPaintParam", &UCustomWrestlerAssistComponent::execAddEditPaintParam },
			{ "AddEditPartsParam", &UCustomWrestlerAssistComponent::execAddEditPartsParam },
			{ "AddLoadEditPaintsAsset", &UCustomWrestlerAssistComponent::execAddLoadEditPaintsAsset },
			{ "AddLoadEditPartsAsset", &UCustomWrestlerAssistComponent::execAddLoadEditPartsAsset },
			{ "AddNewPreset", &UCustomWrestlerAssistComponent::execAddNewPreset },
			{ "AddPreviewPaintData", &UCustomWrestlerAssistComponent::execAddPreviewPaintData },
			{ "AddPreviewPartsData", &UCustomWrestlerAssistComponent::execAddPreviewPartsData },
			{ "ApplyTemplateData", &UCustomWrestlerAssistComponent::execApplyTemplateData },
			{ "CanEditStreetClothes", &UCustomWrestlerAssistComponent::execCanEditStreetClothes },
			{ "CheckCompatiableImpl", &UCustomWrestlerAssistComponent::execCheckCompatiableImpl },
			{ "CheckFinishedAssetLoad", &UCustomWrestlerAssistComponent::execCheckFinishedAssetLoad },
			{ "CheckFinishLoadEditPaints", &UCustomWrestlerAssistComponent::execCheckFinishLoadEditPaints },
			{ "CheckFinishLoadEditParts", &UCustomWrestlerAssistComponent::execCheckFinishLoadEditParts },
			{ "CheckModify", &UCustomWrestlerAssistComponent::execCheckModify },
			{ "ClearAllLoadCue", &UCustomWrestlerAssistComponent::execClearAllLoadCue },
			{ "CopyAllAttire", &UCustomWrestlerAssistComponent::execCopyAllAttire },
			{ "CopyAttire", &UCustomWrestlerAssistComponent::execCopyAttire },
			{ "GetAllEquippedPartsIDs", &UCustomWrestlerAssistComponent::execGetAllEquippedPartsIDs },
			{ "GetAssetCompatibleData", &UCustomWrestlerAssistComponent::execGetAssetCompatibleData },
			{ "GetCurrentAttireType", &UCustomWrestlerAssistComponent::execGetCurrentAttireType },
			{ "GetCurrentPreset", &UCustomWrestlerAssistComponent::execGetCurrentPreset },
			{ "GetEditAttireParam", &UCustomWrestlerAssistComponent::execGetEditAttireParam },
			{ "GetEditPaintParam", &UCustomWrestlerAssistComponent::execGetEditPaintParam },
			{ "GetEditPartsParam", &UCustomWrestlerAssistComponent::execGetEditPartsParam },
			{ "GetEditPerson", &UCustomWrestlerAssistComponent::execGetEditPerson },
			{ "GetFaceType", &UCustomWrestlerAssistComponent::execGetFaceType },
			{ "GetGender", &UCustomWrestlerAssistComponent::execGetGender },
			{ "GetNickName", &UCustomWrestlerAssistComponent::execGetNickName },
			{ "GetNickNameText", &UCustomWrestlerAssistComponent::execGetNickNameText },
			{ "GetPersonParam", &UCustomWrestlerAssistComponent::execGetPersonParam },
			{ "GetPreset", &UCustomWrestlerAssistComponent::execGetPreset },
			{ "GetPresetNames", &UCustomWrestlerAssistComponent::execGetPresetNames },
			{ "GetPreviewAttire", &UCustomWrestlerAssistComponent::execGetPreviewAttire },
			{ "GetPreviewAttireConst", &UCustomWrestlerAssistComponent::execGetPreviewAttireConst },
			{ "GetPreviewCoordinate", &UCustomWrestlerAssistComponent::execGetPreviewCoordinate },
			{ "GetPreviewPaintData", &UCustomWrestlerAssistComponent::execGetPreviewPaintData },
			{ "GetPreviewPartsData", &UCustomWrestlerAssistComponent::execGetPreviewPartsData },
			{ "GetShortName", &UCustomWrestlerAssistComponent::execGetShortName },
			{ "GetShortNameText", &UCustomWrestlerAssistComponent::execGetShortNameText },
			{ "GetSnsName", &UCustomWrestlerAssistComponent::execGetSnsName },
			{ "GetSnsNameText", &UCustomWrestlerAssistComponent::execGetSnsNameText },
			{ "GetTemporaryAttire", &UCustomWrestlerAssistComponent::execGetTemporaryAttire },
			{ "GetUID", &UCustomWrestlerAssistComponent::execGetUID },
			{ "GetWrestlerID", &UCustomWrestlerAssistComponent::execGetWrestlerID },
			{ "GetWrestlerName", &UCustomWrestlerAssistComponent::execGetWrestlerName },
			{ "GetWrestlerNameText", &UCustomWrestlerAssistComponent::execGetWrestlerNameText },
			{ "GetWrestlerProfilesTexts", &UCustomWrestlerAssistComponent::execGetWrestlerProfilesTexts },
			{ "IsDisplayBirthday", &UCustomWrestlerAssistComponent::execIsDisplayBirthday },
			{ "IsDisplayHeight", &UCustomWrestlerAssistComponent::execIsDisplayHeight },
			{ "IsDisplayHomeTown", &UCustomWrestlerAssistComponent::execIsDisplayHomeTown },
			{ "IsDisplayWeight", &UCustomWrestlerAssistComponent::execIsDisplayWeight },
			{ "IsLoading", &UCustomWrestlerAssistComponent::execIsLoading },
			{ "IsModify", &UCustomWrestlerAssistComponent::execIsModify },
			{ "LoadEditPaintsAssets", &UCustomWrestlerAssistComponent::execLoadEditPaintsAssets },
			{ "LoadEditPartsAssets", &UCustomWrestlerAssistComponent::execLoadEditPartsAssets },
			{ "MakeColorPacks", &UCustomWrestlerAssistComponent::execMakeColorPacks },
			{ "MakeIgnoreCategories", &UCustomWrestlerAssistComponent::execMakeIgnoreCategories },
			{ "OnCompleteAssetLoad", &UCustomWrestlerAssistComponent::execOnCompleteAssetLoad },
			{ "OnFinishCustomize", &UCustomWrestlerAssistComponent::execOnFinishCustomize },
			{ "OnReset", &UCustomWrestlerAssistComponent::execOnReset },
			{ "OnStartCustomize", &UCustomWrestlerAssistComponent::execOnStartCustomize },
			{ "PostLoad_EditPaintAsset", &UCustomWrestlerAssistComponent::execPostLoad_EditPaintAsset },
			{ "PostLoad_EditPartsAsset", &UCustomWrestlerAssistComponent::execPostLoad_EditPartsAsset },
			{ "RelocateFacialParts", &UCustomWrestlerAssistComponent::execRelocateFacialParts },
			{ "RemoveAttires", &UCustomWrestlerAssistComponent::execRemoveAttires },
			{ "RemoveEditPaintParam", &UCustomWrestlerAssistComponent::execRemoveEditPaintParam },
			{ "RemoveEditPartsParam", &UCustomWrestlerAssistComponent::execRemoveEditPartsParam },
			{ "RemovePreset", &UCustomWrestlerAssistComponent::execRemovePreset },
			{ "RemovePreviewPaintData", &UCustomWrestlerAssistComponent::execRemovePreviewPaintData },
			{ "RemovePreviewPartsData", &UCustomWrestlerAssistComponent::execRemovePreviewPartsData },
			{ "ResetModify", &UCustomWrestlerAssistComponent::execResetModify },
			{ "ResetPreviewAttire", &UCustomWrestlerAssistComponent::execResetPreviewAttire },
			{ "ResetTemporaryAttire", &UCustomWrestlerAssistComponent::execResetTemporaryAttire },
			{ "SearchFaceType", &UCustomWrestlerAssistComponent::execSearchFaceType },
			{ "SelectPreset", &UCustomWrestlerAssistComponent::execSelectPreset },
			{ "SetCurrentAttireType", &UCustomWrestlerAssistComponent::execSetCurrentAttireType },
			{ "SetNickName", &UCustomWrestlerAssistComponent::execSetNickName },
			{ "SetPersonParam", &UCustomWrestlerAssistComponent::execSetPersonParam },
			{ "SetPreset", &UCustomWrestlerAssistComponent::execSetPreset },
			{ "SetPreviewAttire", &UCustomWrestlerAssistComponent::execSetPreviewAttire },
			{ "SetPreviewBodyMode", &UCustomWrestlerAssistComponent::execSetPreviewBodyMode },
			{ "SetShortName", &UCustomWrestlerAssistComponent::execSetShortName },
			{ "SetSnsName", &UCustomWrestlerAssistComponent::execSetSnsName },
			{ "SetWrestlerName", &UCustomWrestlerAssistComponent::execSetWrestlerName },
			{ "UpdateAssetLoadingStatus", &UCustomWrestlerAssistComponent::execUpdateAssetLoadingStatus },
			{ "UpdateIgnoreCategories", &UCustomWrestlerAssistComponent::execUpdateIgnoreCategories },
			{ "UpdatePaintAttire", &UCustomWrestlerAssistComponent::execUpdatePaintAttire },
			{ "UpdatePaintColor", &UCustomWrestlerAssistComponent::execUpdatePaintColor },
			{ "UpdatePaintColors", &UCustomWrestlerAssistComponent::execUpdatePaintColors },
			{ "UpdatePartsAttire", &UCustomWrestlerAssistComponent::execUpdatePartsAttire },
			{ "UpdatePartsColor", &UCustomWrestlerAssistComponent::execUpdatePartsColor },
			{ "UpdatePartsColors", &UCustomWrestlerAssistComponent::execUpdatePartsColors },
			{ "UpdatePresetName", &UCustomWrestlerAssistComponent::execUpdatePresetName },
			{ "UpdatePreviewPersonParam", &UCustomWrestlerAssistComponent::execUpdatePreviewPersonParam },
			{ "ValidateFaceType", &UCustomWrestlerAssistComponent::execValidateFaceType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics
	{
		struct CustomWrestlerAssistComponent_eventAddEditPaintParam_Parms
		{
			EPreviewAttire AttireType;
			EEditTexTarget PaintSlot;
			FEditPaintParam NewParam;
			int32 PresetNo;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PaintSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PaintSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewParam;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PresetNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddEditPaintParam_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::NewProp_AttireType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::NewProp_PaintSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::NewProp_PaintSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::NewProp_PaintSlot = { "PaintSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddEditPaintParam_Parms, PaintSlot), Z_Construct_UEnum_Creation_EEditTexTarget, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::NewProp_PaintSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::NewProp_PaintSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::NewProp_NewParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::NewProp_NewParam = { "NewParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddEditPaintParam_Parms, NewParam), Z_Construct_UScriptStruct_FEditPaintParam, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::NewProp_NewParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::NewProp_NewParam_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::NewProp_PresetNo = { "PresetNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddEditPaintParam_Parms, PresetNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::NewProp_PaintSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::NewProp_PaintSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::NewProp_NewParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::NewProp_PresetNo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "AddEditPaintParam", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventAddEditPaintParam_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics
	{
		struct CustomWrestlerAssistComponent_eventAddEditPartsParam_Parms
		{
			EPreviewAttire AttireType;
			EEditPartsSlot PartsSlot;
			FEditPartsParam NewParam;
			int32 PresetNo;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartsSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PartsSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewParam;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PresetNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddEditPartsParam_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::NewProp_AttireType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::NewProp_PartsSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::NewProp_PartsSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::NewProp_PartsSlot = { "PartsSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddEditPartsParam_Parms, PartsSlot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::NewProp_PartsSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::NewProp_PartsSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::NewProp_NewParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::NewProp_NewParam = { "NewParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddEditPartsParam_Parms, NewParam), Z_Construct_UScriptStruct_FEditPartsParam, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::NewProp_NewParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::NewProp_NewParam_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::NewProp_PresetNo = { "PresetNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddEditPartsParam_Parms, PresetNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::NewProp_PartsSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::NewProp_PartsSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::NewProp_NewParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::NewProp_PresetNo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "AddEditPartsParam", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventAddEditPartsParam_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics
	{
		struct CustomWrestlerAssistComponent_eventAddLoadEditPaintsAsset_Parms
		{
			EPreviewAttire InAttire;
			EEditTexTarget InSlot;
			TSoftObjectPtr<UEditWrestlerPaintAsset> Asset;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InAttire_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAttire_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InAttire;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::NewProp_InAttire_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::NewProp_InAttire_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::NewProp_InAttire = { "InAttire", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddLoadEditPaintsAsset_Parms, InAttire), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::NewProp_InAttire_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::NewProp_InAttire_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::NewProp_InSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::NewProp_InSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::NewProp_InSlot = { "InSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddLoadEditPaintsAsset_Parms, InSlot), Z_Construct_UEnum_Creation_EEditTexTarget, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::NewProp_InSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::NewProp_InSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddLoadEditPaintsAsset_Parms, Asset), Z_Construct_UClass_UEditWrestlerPaintAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::NewProp_Asset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::NewProp_InAttire_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::NewProp_InAttire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::NewProp_InSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::NewProp_InSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "AddLoadEditPaintsAsset", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventAddLoadEditPaintsAsset_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics
	{
		struct CustomWrestlerAssistComponent_eventAddLoadEditPartsAsset_Parms
		{
			EPreviewAttire InAttire;
			EEditPartsSlot InSlot;
			TSoftObjectPtr<UEditWrestlerPartsAsset> Asset;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InAttire_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAttire_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InAttire;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::NewProp_InAttire_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::NewProp_InAttire_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::NewProp_InAttire = { "InAttire", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddLoadEditPartsAsset_Parms, InAttire), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::NewProp_InAttire_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::NewProp_InAttire_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::NewProp_InSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::NewProp_InSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::NewProp_InSlot = { "InSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddLoadEditPartsAsset_Parms, InSlot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::NewProp_InSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::NewProp_InSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddLoadEditPartsAsset_Parms, Asset), Z_Construct_UClass_UEditWrestlerPartsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::NewProp_Asset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::NewProp_InAttire_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::NewProp_InAttire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::NewProp_InSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::NewProp_InSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "AddLoadEditPartsAsset", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventAddLoadEditPartsAsset_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics
	{
		struct CustomWrestlerAssistComponent_eventAddNewPreset_Parms
		{
			FString NewPresetName;
			int32 NewIndex;
			int32 SourcePresetIndex;
			bool bCopy;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewPresetName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePresetIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourcePresetIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCopy_MetaData[];
#endif
		static void NewProp_bCopy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::NewProp_NewPresetName = { "NewPresetName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddNewPreset_Parms, NewPresetName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddNewPreset_Parms, NewIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::NewProp_SourcePresetIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::NewProp_SourcePresetIndex = { "SourcePresetIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddNewPreset_Parms, SourcePresetIndex), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::NewProp_SourcePresetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::NewProp_SourcePresetIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::NewProp_bCopy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::NewProp_bCopy_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventAddNewPreset_Parms*)Obj)->bCopy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::NewProp_bCopy = { "bCopy", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventAddNewPreset_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::NewProp_bCopy_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::NewProp_bCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::NewProp_bCopy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::NewProp_NewPresetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::NewProp_NewIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::NewProp_SourcePresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::NewProp_bCopy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "AddNewPreset", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventAddNewPreset_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics
	{
		struct CustomWrestlerAssistComponent_eventAddPreviewPaintData_Parms
		{
			EPreviewAttire AttireType;
			EEditTexTarget PaintSlot;
			FEditPaintData NewData;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PaintSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PaintSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddPreviewPaintData_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::NewProp_AttireType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::NewProp_PaintSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::NewProp_PaintSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::NewProp_PaintSlot = { "PaintSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddPreviewPaintData_Parms, PaintSlot), Z_Construct_UEnum_Creation_EEditTexTarget, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::NewProp_PaintSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::NewProp_PaintSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::NewProp_NewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::NewProp_NewData = { "NewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddPreviewPaintData_Parms, NewData), Z_Construct_UScriptStruct_FEditPaintData, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::NewProp_NewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::NewProp_NewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::NewProp_PaintSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::NewProp_PaintSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::NewProp_NewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "AddPreviewPaintData", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventAddPreviewPaintData_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics
	{
		struct CustomWrestlerAssistComponent_eventAddPreviewPartsData_Parms
		{
			EPreviewAttire AttireType;
			EEditPartsSlot PartsSlot;
			FEditPartsData NewData;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartsSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PartsSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddPreviewPartsData_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::NewProp_AttireType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::NewProp_PartsSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::NewProp_PartsSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::NewProp_PartsSlot = { "PartsSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddPreviewPartsData_Parms, PartsSlot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::NewProp_PartsSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::NewProp_PartsSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::NewProp_NewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::NewProp_NewData = { "NewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventAddPreviewPartsData_Parms, NewData), Z_Construct_UScriptStruct_FEditPartsData, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::NewProp_NewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::NewProp_NewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::NewProp_PartsSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::NewProp_PartsSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::NewProp_NewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "AddPreviewPartsData", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventAddPreviewPartsData_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics
	{
		struct CustomWrestlerAssistComponent_eventApplyTemplateData_Parms
		{
			UMyWrestlerDataObject* TargetObject;
			UTemplateScoutAsset* TemplateScoutAsset;
			EScoutWrestlerTemplateOption Option;
			EBasicFunctionResult resultType;
			UMyWrestlerDataObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TemplateScoutAsset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Option_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Option;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_resultType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_resultType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::NewProp_TargetObject = { "TargetObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventApplyTemplateData_Parms, TargetObject), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::NewProp_TemplateScoutAsset = { "TemplateScoutAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventApplyTemplateData_Parms, TemplateScoutAsset), Z_Construct_UClass_UTemplateScoutAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::NewProp_Option_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::NewProp_Option_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventApplyTemplateData_Parms, Option), Z_Construct_UEnum_ELITE_EScoutWrestlerTemplateOption, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::NewProp_Option_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::NewProp_Option_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::NewProp_resultType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::NewProp_resultType = { "resultType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventApplyTemplateData_Parms, resultType), Z_Construct_UEnum_ELITE_Core_EBasicFunctionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventApplyTemplateData_Parms, ReturnValue), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::NewProp_TargetObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::NewProp_TemplateScoutAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::NewProp_Option_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::NewProp_Option,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::NewProp_resultType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::NewProp_resultType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "ApplyTemplateData", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventApplyTemplateData_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_CanEditStreetClothes_Statics
	{
		struct CustomWrestlerAssistComponent_eventCanEditStreetClothes_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_CanEditStreetClothes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventCanEditStreetClothes_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CanEditStreetClothes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventCanEditStreetClothes_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_CanEditStreetClothes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_CanEditStreetClothes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_CanEditStreetClothes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_CanEditStreetClothes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CanEditStreetClothes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "CanEditStreetClothes", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventCanEditStreetClothes_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_CanEditStreetClothes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CanEditStreetClothes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CanEditStreetClothes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CanEditStreetClothes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_CanEditStreetClothes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_CanEditStreetClothes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics
	{
		struct CustomWrestlerAssistComponent_eventCheckCompatiableImpl_Parms
		{
			FAttireData CoordinateData;
			FEditPartsCategoryDetails EditPartsCategoryDetails;
			TSet<EEditPartsSlot> EquippedParts;
			TSet<EEditPartsSlot> IncompatiableParts;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoordinateData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoordinateData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditPartsCategoryDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditPartsCategoryDetails;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquippedParts_ElementProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EquippedParts_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_EquippedParts;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IncompatiableParts_ElementProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IncompatiableParts_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_IncompatiableParts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::NewProp_CoordinateData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::NewProp_CoordinateData = { "CoordinateData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventCheckCompatiableImpl_Parms, CoordinateData), Z_Construct_UScriptStruct_FAttireData, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::NewProp_CoordinateData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::NewProp_CoordinateData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::NewProp_EditPartsCategoryDetails_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::NewProp_EditPartsCategoryDetails = { "EditPartsCategoryDetails", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventCheckCompatiableImpl_Parms, EditPartsCategoryDetails), Z_Construct_UScriptStruct_FEditPartsCategoryDetails, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::NewProp_EditPartsCategoryDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::NewProp_EditPartsCategoryDetails_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::NewProp_EquippedParts_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::NewProp_EquippedParts_ElementProp = { "EquippedParts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::NewProp_EquippedParts = { "EquippedParts", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventCheckCompatiableImpl_Parms, EquippedParts), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::NewProp_IncompatiableParts_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::NewProp_IncompatiableParts_ElementProp = { "IncompatiableParts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::NewProp_IncompatiableParts = { "IncompatiableParts", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventCheckCompatiableImpl_Parms, IncompatiableParts), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::NewProp_CoordinateData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::NewProp_EditPartsCategoryDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::NewProp_EquippedParts_ElementProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::NewProp_EquippedParts_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::NewProp_EquippedParts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::NewProp_IncompatiableParts_ElementProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::NewProp_IncompatiableParts_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::NewProp_IncompatiableParts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "CheckCompatiableImpl", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventCheckCompatiableImpl_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishedAssetLoad_Statics
	{
		struct CustomWrestlerAssistComponent_eventCheckFinishedAssetLoad_Parms
		{
			bool bWithNotStarted;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWithNotStarted_MetaData[];
#endif
		static void NewProp_bWithNotStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWithNotStarted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishedAssetLoad_Statics::NewProp_bWithNotStarted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishedAssetLoad_Statics::NewProp_bWithNotStarted_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventCheckFinishedAssetLoad_Parms*)Obj)->bWithNotStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishedAssetLoad_Statics::NewProp_bWithNotStarted = { "bWithNotStarted", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventCheckFinishedAssetLoad_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishedAssetLoad_Statics::NewProp_bWithNotStarted_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishedAssetLoad_Statics::NewProp_bWithNotStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishedAssetLoad_Statics::NewProp_bWithNotStarted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishedAssetLoad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishedAssetLoad_Statics::NewProp_bWithNotStarted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishedAssetLoad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishedAssetLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "CheckFinishedAssetLoad", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventCheckFinishedAssetLoad_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishedAssetLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishedAssetLoad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishedAssetLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishedAssetLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishedAssetLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishedAssetLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditPaints_Statics
	{
		struct CustomWrestlerAssistComponent_eventCheckFinishLoadEditPaints_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditPaints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventCheckFinishLoadEditPaints_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditPaints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventCheckFinishLoadEditPaints_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditPaints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditPaints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditPaints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditPaints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditPaints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "CheckFinishLoadEditPaints", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventCheckFinishLoadEditPaints_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditPaints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditPaints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditPaints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditPaints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditPaints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditPaints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditParts_Statics
	{
		struct CustomWrestlerAssistComponent_eventCheckFinishLoadEditParts_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditParts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventCheckFinishLoadEditParts_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditParts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventCheckFinishLoadEditParts_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditParts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditParts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditParts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditParts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditParts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "CheckFinishLoadEditParts", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventCheckFinishLoadEditParts_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditParts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditParts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditParts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditParts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditParts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditParts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckModify_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckModify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckModify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "CheckModify", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckModify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckModify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckModify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckModify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_ClearAllLoadCue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_ClearAllLoadCue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_ClearAllLoadCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "ClearAllLoadCue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_ClearAllLoadCue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_ClearAllLoadCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_ClearAllLoadCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_ClearAllLoadCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAllAttire_Statics
	{
		struct CustomWrestlerAssistComponent_eventCopyAllAttire_Parms
		{
			bool bRevert;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRevert_MetaData[];
#endif
		static void NewProp_bRevert_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRevert;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAllAttire_Statics::NewProp_bRevert_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAllAttire_Statics::NewProp_bRevert_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventCopyAllAttire_Parms*)Obj)->bRevert = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAllAttire_Statics::NewProp_bRevert = { "bRevert", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventCopyAllAttire_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAllAttire_Statics::NewProp_bRevert_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAllAttire_Statics::NewProp_bRevert_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAllAttire_Statics::NewProp_bRevert_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAllAttire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAllAttire_Statics::NewProp_bRevert,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAllAttire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAllAttire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "CopyAllAttire", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventCopyAllAttire_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAllAttire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAllAttire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAllAttire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAllAttire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAllAttire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAllAttire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics
	{
		struct CustomWrestlerAssistComponent_eventCopyAttire_Parms
		{
			EPreviewAttire AttireType;
			bool bRevert;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRevert_MetaData[];
#endif
		static void NewProp_bRevert_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRevert;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventCopyAttire_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics::NewProp_AttireType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics::NewProp_bRevert_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics::NewProp_bRevert_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventCopyAttire_Parms*)Obj)->bRevert = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics::NewProp_bRevert = { "bRevert", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventCopyAttire_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics::NewProp_bRevert_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics::NewProp_bRevert_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics::NewProp_bRevert_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics::NewProp_bRevert,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "CopyAttire", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventCopyAttire_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAllEquippedPartsIDs_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetAllEquippedPartsIDs_Parms
		{
			TArray<int32> EquippedPartsIDs;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EquippedPartsIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquippedPartsIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAllEquippedPartsIDs_Statics::NewProp_EquippedPartsIDs_Inner = { "EquippedPartsIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAllEquippedPartsIDs_Statics::NewProp_EquippedPartsIDs = { "EquippedPartsIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetAllEquippedPartsIDs_Parms, EquippedPartsIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAllEquippedPartsIDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAllEquippedPartsIDs_Statics::NewProp_EquippedPartsIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAllEquippedPartsIDs_Statics::NewProp_EquippedPartsIDs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAllEquippedPartsIDs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAllEquippedPartsIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetAllEquippedPartsIDs", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetAllEquippedPartsIDs_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAllEquippedPartsIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAllEquippedPartsIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAllEquippedPartsIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAllEquippedPartsIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAllEquippedPartsIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAllEquippedPartsIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetAssetCompatibleData_Parms
		{
			TSet<EEditPartsSlot> SomeUnpossible;
			TSet<EEditPartsSlot> AllUnpossible;
			UEditWrestlerPartsAsset* Asset;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SomeUnpossible_ElementProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SomeUnpossible_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_SomeUnpossible;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AllUnpossible_ElementProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AllUnpossible_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_AllUnpossible;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics::NewProp_SomeUnpossible_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics::NewProp_SomeUnpossible_ElementProp = { "SomeUnpossible", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics::NewProp_SomeUnpossible = { "SomeUnpossible", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetAssetCompatibleData_Parms, SomeUnpossible), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics::NewProp_AllUnpossible_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics::NewProp_AllUnpossible_ElementProp = { "AllUnpossible", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics::NewProp_AllUnpossible = { "AllUnpossible", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetAssetCompatibleData_Parms, AllUnpossible), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetAssetCompatibleData_Parms, Asset), Z_Construct_UClass_UEditWrestlerPartsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics::NewProp_SomeUnpossible_ElementProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics::NewProp_SomeUnpossible_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics::NewProp_SomeUnpossible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics::NewProp_AllUnpossible_ElementProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics::NewProp_AllUnpossible_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics::NewProp_AllUnpossible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetAssetCompatibleData", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetAssetCompatibleData_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentAttireType_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetCurrentAttireType_Parms
		{
			EAttireType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentAttireType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentAttireType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetCurrentAttireType_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Core_EAttireType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentAttireType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentAttireType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentAttireType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentAttireType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentAttireType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetCurrentAttireType", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetCurrentAttireType_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentAttireType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentAttireType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentAttireType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentAttireType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentAttireType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentAttireType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetCurrentPreset_Parms
		{
			FNamedPresetParam Preset;
			bool bPreview;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Preset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreview_MetaData[];
#endif
		static void NewProp_bPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreview;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetCurrentPreset_Parms, Preset), Z_Construct_UScriptStruct_FNamedPresetParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset_Statics::NewProp_bPreview_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset_Statics::NewProp_bPreview_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventGetCurrentPreset_Parms*)Obj)->bPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset_Statics::NewProp_bPreview = { "bPreview", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventGetCurrentPreset_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset_Statics::NewProp_bPreview_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset_Statics::NewProp_bPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset_Statics::NewProp_bPreview_MetaData)) };
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventGetCurrentPreset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventGetCurrentPreset_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset_Statics::NewProp_Preset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset_Statics::NewProp_bPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetCurrentPreset", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetCurrentPreset_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetEditAttireParam_Parms
		{
			EPreviewAttire AttireType;
			FAttireParam Out;
			int32 PresetNo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PresetNo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetEditAttireParam_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::NewProp_AttireType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetEditAttireParam_Parms, Out), Z_Construct_UScriptStruct_FAttireParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::NewProp_PresetNo = { "PresetNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetEditAttireParam_Parms, PresetNo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventGetEditAttireParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventGetEditAttireParam_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::NewProp_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::NewProp_PresetNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetEditAttireParam", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetEditAttireParam_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetEditPaintParam_Parms
		{
			FEditPaintParam Out;
			EPreviewAttire AttireType;
			EEditTexTarget PaintSlot;
			int32 PresetNo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PaintSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PaintSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PresetNo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetEditPaintParam_Parms, Out), Z_Construct_UScriptStruct_FEditPaintParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetEditPaintParam_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::NewProp_AttireType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::NewProp_PaintSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::NewProp_PaintSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::NewProp_PaintSlot = { "PaintSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetEditPaintParam_Parms, PaintSlot), Z_Construct_UEnum_Creation_EEditTexTarget, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::NewProp_PaintSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::NewProp_PaintSlot_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::NewProp_PresetNo = { "PresetNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetEditPaintParam_Parms, PresetNo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventGetEditPaintParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventGetEditPaintParam_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::NewProp_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::NewProp_PaintSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::NewProp_PaintSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::NewProp_PresetNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetEditPaintParam", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetEditPaintParam_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetEditPartsParam_Parms
		{
			FEditPartsParam Out;
			EPreviewAttire AttireType;
			EEditPartsSlot PartsSlot;
			int32 PresetNo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartsSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PartsSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PresetNo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetEditPartsParam_Parms, Out), Z_Construct_UScriptStruct_FEditPartsParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetEditPartsParam_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::NewProp_AttireType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::NewProp_PartsSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::NewProp_PartsSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::NewProp_PartsSlot = { "PartsSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetEditPartsParam_Parms, PartsSlot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::NewProp_PartsSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::NewProp_PartsSlot_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::NewProp_PresetNo = { "PresetNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetEditPartsParam_Parms, PresetNo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventGetEditPartsParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventGetEditPartsParam_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::NewProp_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::NewProp_PartsSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::NewProp_PartsSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::NewProp_PresetNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetEditPartsParam", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetEditPartsParam_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPerson_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetEditPerson_Parms
		{
			FEditPersonParam Out;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPerson_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetEditPerson_Parms, Out), Z_Construct_UScriptStruct_FEditPersonParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPerson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPerson_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPerson_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPerson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetEditPerson", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetEditPerson_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPerson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPerson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPerson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPerson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPerson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPerson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetFaceType_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetFaceType_Parms
		{
			EFaceType FaceType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FaceType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FaceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetFaceType_Statics::NewProp_FaceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetFaceType_Statics::NewProp_FaceType = { "FaceType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetFaceType_Parms, FaceType), Z_Construct_UEnum_Creation_EFaceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetFaceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetFaceType_Statics::NewProp_FaceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetFaceType_Statics::NewProp_FaceType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetFaceType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetFaceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetFaceType", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetFaceType_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetFaceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetFaceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetFaceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetFaceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetFaceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetFaceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetGender_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetGender_Parms
		{
			EGender Gender;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetGender_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetGender_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetGender_Parms, Gender), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetGender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetGender_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetGender_Statics::NewProp_Gender,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetGender_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetGender", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetGender_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetGender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetGender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetGender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetGender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetGender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetGender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickName_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetNickName_Parms
		{
			FString NickName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NickName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickName_Statics::NewProp_NickName = { "NickName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetNickName_Parms, NickName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickName_Statics::NewProp_NickName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetNickName", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetNickName_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickNameText_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetNickNameText_Parms
		{
			FText NickName;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NickName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickNameText_Statics::NewProp_NickName = { "NickName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetNickNameText_Parms, NickName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickNameText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickNameText_Statics::NewProp_NickName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickNameText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickNameText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetNickNameText", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetNickNameText_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickNameText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickNameText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickNameText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickNameText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickNameText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickNameText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPersonParam_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetPersonParam_Parms
		{
			int32 Out;
			EBasicWrestlerIntParamType ParamType;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParamType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ParamType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPersonParam_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetPersonParam_Parms, Out), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPersonParam_Statics::NewProp_ParamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPersonParam_Statics::NewProp_ParamType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPersonParam_Statics::NewProp_ParamType = { "ParamType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetPersonParam_Parms, ParamType), Z_Construct_UEnum_Creation_EBasicWrestlerIntParamType, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPersonParam_Statics::NewProp_ParamType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPersonParam_Statics::NewProp_ParamType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPersonParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPersonParam_Statics::NewProp_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPersonParam_Statics::NewProp_ParamType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPersonParam_Statics::NewProp_ParamType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPersonParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPersonParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetPersonParam", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetPersonParam_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPersonParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPersonParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPersonParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPersonParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPersonParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPersonParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetPreset_Parms
		{
			FNamedPresetParam Preset;
			int32 PresetNo;
			bool bPreview;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Preset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PresetNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreview_MetaData[];
#endif
		static void NewProp_bPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreview;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetPreset_Parms, Preset), Z_Construct_UScriptStruct_FNamedPresetParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::NewProp_PresetNo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::NewProp_PresetNo = { "PresetNo", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetPreset_Parms, PresetNo), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::NewProp_PresetNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::NewProp_PresetNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::NewProp_bPreview_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::NewProp_bPreview_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventGetPreset_Parms*)Obj)->bPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::NewProp_bPreview = { "bPreview", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventGetPreset_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::NewProp_bPreview_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::NewProp_bPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::NewProp_bPreview_MetaData)) };
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventGetPreset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventGetPreset_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::NewProp_Preset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::NewProp_PresetNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::NewProp_bPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetPreset", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetPreset_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPresetNames_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetPresetNames_Parms
		{
			TArray<FString> Out;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Out_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPresetNames_Statics::NewProp_Out_Inner = { "Out", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPresetNames_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetPresetNames_Parms, Out), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPresetNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPresetNames_Statics::NewProp_Out_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPresetNames_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPresetNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPresetNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetPresetNames", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetPresetNames_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPresetNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPresetNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPresetNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPresetNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPresetNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPresetNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttire_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetPreviewAttire_Parms
		{
			EPreviewAttire AttireType;
			FAttireData AttireData;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttireData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttire_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttire_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttire_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetPreviewAttire_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttire_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttire_Statics::NewProp_AttireType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttire_Statics::NewProp_AttireData = { "AttireData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetPreviewAttire_Parms, AttireData), Z_Construct_UScriptStruct_FAttireData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttire_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttire_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttire_Statics::NewProp_AttireData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetPreviewAttire", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetPreviewAttire_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttireConst_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetPreviewAttireConst_Parms
		{
			EPreviewAttire AttireType;
			FAttireData AttireData;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttireData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttireConst_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttireConst_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttireConst_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetPreviewAttireConst_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttireConst_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttireConst_Statics::NewProp_AttireType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttireConst_Statics::NewProp_AttireData = { "AttireData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetPreviewAttireConst_Parms, AttireData), Z_Construct_UScriptStruct_FAttireData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttireConst_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttireConst_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttireConst_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttireConst_Statics::NewProp_AttireData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttireConst_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttireConst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetPreviewAttireConst", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetPreviewAttireConst_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttireConst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttireConst_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttireConst_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttireConst_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttireConst()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttireConst_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewCoordinate_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetPreviewCoordinate_Parms
		{
			EAttireType AttireType;
			FAttireData CoordinateData;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoordinateData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewCoordinate_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewCoordinate_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewCoordinate_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetPreviewCoordinate_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EAttireType, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewCoordinate_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewCoordinate_Statics::NewProp_AttireType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewCoordinate_Statics::NewProp_CoordinateData = { "CoordinateData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetPreviewCoordinate_Parms, CoordinateData), Z_Construct_UScriptStruct_FAttireData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewCoordinate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewCoordinate_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewCoordinate_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewCoordinate_Statics::NewProp_CoordinateData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewCoordinate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewCoordinate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetPreviewCoordinate", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetPreviewCoordinate_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewCoordinate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewCoordinate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewCoordinate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewCoordinate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewCoordinate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewCoordinate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetPreviewPaintData_Parms
		{
			FEditPaintData Out;
			EBasicFindResult Result;
			EPreviewAttire AttireType;
			EEditTexTarget PaintSlot;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PaintSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PaintSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetPreviewPaintData_Parms, Out), Z_Construct_UScriptStruct_FEditPaintData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetPreviewPaintData_Parms, Result), Z_Construct_UEnum_ELITE_Core_EBasicFindResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetPreviewPaintData_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::NewProp_AttireType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::NewProp_PaintSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::NewProp_PaintSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::NewProp_PaintSlot = { "PaintSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetPreviewPaintData_Parms, PaintSlot), Z_Construct_UEnum_Creation_EEditTexTarget, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::NewProp_PaintSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::NewProp_PaintSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::NewProp_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::NewProp_PaintSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::NewProp_PaintSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetPreviewPaintData", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetPreviewPaintData_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetPreviewPartsData_Parms
		{
			FEditPartsData Out;
			EBasicFindResult Result;
			EPreviewAttire AttireType;
			EEditPartsSlot PartsSlot;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartsSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PartsSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetPreviewPartsData_Parms, Out), Z_Construct_UScriptStruct_FEditPartsData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetPreviewPartsData_Parms, Result), Z_Construct_UEnum_ELITE_Core_EBasicFindResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetPreviewPartsData_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::NewProp_AttireType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::NewProp_PartsSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::NewProp_PartsSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::NewProp_PartsSlot = { "PartsSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetPreviewPartsData_Parms, PartsSlot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::NewProp_PartsSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::NewProp_PartsSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::NewProp_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::NewProp_PartsSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::NewProp_PartsSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetPreviewPartsData", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetPreviewPartsData_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortName_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetShortName_Parms
		{
			FString ShortName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShortName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortName_Statics::NewProp_ShortName = { "ShortName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetShortName_Parms, ShortName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortName_Statics::NewProp_ShortName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetShortName", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetShortName_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortNameText_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetShortNameText_Parms
		{
			FText ShortName;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ShortName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortNameText_Statics::NewProp_ShortName = { "ShortName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetShortNameText_Parms, ShortName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortNameText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortNameText_Statics::NewProp_ShortName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortNameText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortNameText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetShortNameText", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetShortNameText_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortNameText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortNameText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortNameText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortNameText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortNameText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortNameText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsName_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetSnsName_Parms
		{
			FString SNSName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SNSName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsName_Statics::NewProp_SNSName = { "SNSName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetSnsName_Parms, SNSName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsName_Statics::NewProp_SNSName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetSnsName", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetSnsName_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsNameText_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetSnsNameText_Parms
		{
			FText SNSName;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SNSName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsNameText_Statics::NewProp_SNSName = { "SNSName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetSnsNameText_Parms, SNSName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsNameText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsNameText_Statics::NewProp_SNSName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsNameText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsNameText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetSnsNameText", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetSnsNameText_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsNameText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsNameText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsNameText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsNameText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsNameText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsNameText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetTemporaryAttire_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetTemporaryAttire_Parms
		{
			EPreviewAttire AttireType;
			FAttireData AttireData;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttireData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetTemporaryAttire_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetTemporaryAttire_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetTemporaryAttire_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetTemporaryAttire_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetTemporaryAttire_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetTemporaryAttire_Statics::NewProp_AttireType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetTemporaryAttire_Statics::NewProp_AttireData = { "AttireData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetTemporaryAttire_Parms, AttireData), Z_Construct_UScriptStruct_FAttireData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetTemporaryAttire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetTemporaryAttire_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetTemporaryAttire_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetTemporaryAttire_Statics::NewProp_AttireData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetTemporaryAttire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetTemporaryAttire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetTemporaryAttire", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetTemporaryAttire_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetTemporaryAttire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetTemporaryAttire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetTemporaryAttire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetTemporaryAttire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetTemporaryAttire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetTemporaryAttire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetUID_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetUID_Parms
		{
			FGuid UID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetUID_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetUID_Parms, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetUID_Statics::NewProp_UID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetUID", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetUID_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerID_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetWrestlerID_Parms
		{
			EWrestlerID_N ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerID_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetWrestlerID_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerID_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetWrestlerID", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetWrestlerID_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerName_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetWrestlerName_Parms
		{
			FString UpperName;
			FString LowerName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UpperName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LowerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerName_Statics::NewProp_UpperName = { "UpperName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetWrestlerName_Parms, UpperName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerName_Statics::NewProp_LowerName = { "LowerName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetWrestlerName_Parms, LowerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerName_Statics::NewProp_UpperName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerName_Statics::NewProp_LowerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetWrestlerName", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetWrestlerName_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerNameText_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetWrestlerNameText_Parms
		{
			FText WrestlerName;
			bool bUpper;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_WrestlerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpper_MetaData[];
#endif
		static void NewProp_bUpper_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpper;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerNameText_Statics::NewProp_WrestlerName = { "WrestlerName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetWrestlerNameText_Parms, WrestlerName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerNameText_Statics::NewProp_bUpper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerNameText_Statics::NewProp_bUpper_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventGetWrestlerNameText_Parms*)Obj)->bUpper = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerNameText_Statics::NewProp_bUpper = { "bUpper", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventGetWrestlerNameText_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerNameText_Statics::NewProp_bUpper_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerNameText_Statics::NewProp_bUpper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerNameText_Statics::NewProp_bUpper_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerNameText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerNameText_Statics::NewProp_WrestlerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerNameText_Statics::NewProp_bUpper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerNameText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerNameText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetWrestlerNameText", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetWrestlerNameText_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerNameText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerNameText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerNameText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerNameText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerNameText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerNameText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerProfilesTexts_Statics
	{
		struct CustomWrestlerAssistComponent_eventGetWrestlerProfilesTexts_Parms
		{
			FText WrestlerNameText;
			FText WrestlerSnsText;
			FText WeightText;
			FText HeightText;
			FText HomeTownText;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_WrestlerNameText;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_WrestlerSnsText;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_WeightText;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HeightText;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HomeTownText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerProfilesTexts_Statics::NewProp_WrestlerNameText = { "WrestlerNameText", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetWrestlerProfilesTexts_Parms, WrestlerNameText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerProfilesTexts_Statics::NewProp_WrestlerSnsText = { "WrestlerSnsText", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetWrestlerProfilesTexts_Parms, WrestlerSnsText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerProfilesTexts_Statics::NewProp_WeightText = { "WeightText", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetWrestlerProfilesTexts_Parms, WeightText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerProfilesTexts_Statics::NewProp_HeightText = { "HeightText", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetWrestlerProfilesTexts_Parms, HeightText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerProfilesTexts_Statics::NewProp_HomeTownText = { "HomeTownText", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventGetWrestlerProfilesTexts_Parms, HomeTownText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerProfilesTexts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerProfilesTexts_Statics::NewProp_WrestlerNameText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerProfilesTexts_Statics::NewProp_WrestlerSnsText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerProfilesTexts_Statics::NewProp_WeightText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerProfilesTexts_Statics::NewProp_HeightText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerProfilesTexts_Statics::NewProp_HomeTownText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerProfilesTexts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerProfilesTexts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "GetWrestlerProfilesTexts", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventGetWrestlerProfilesTexts_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerProfilesTexts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerProfilesTexts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerProfilesTexts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerProfilesTexts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerProfilesTexts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerProfilesTexts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayBirthday_Statics
	{
		struct CustomWrestlerAssistComponent_eventIsDisplayBirthday_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayBirthday_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventIsDisplayBirthday_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayBirthday_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventIsDisplayBirthday_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayBirthday_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayBirthday_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayBirthday_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayBirthday_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayBirthday_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "IsDisplayBirthday", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventIsDisplayBirthday_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayBirthday_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayBirthday_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayBirthday_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayBirthday_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayBirthday()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayBirthday_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHeight_Statics
	{
		struct CustomWrestlerAssistComponent_eventIsDisplayHeight_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventIsDisplayHeight_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventIsDisplayHeight_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "IsDisplayHeight", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventIsDisplayHeight_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHomeTown_Statics
	{
		struct CustomWrestlerAssistComponent_eventIsDisplayHomeTown_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHomeTown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventIsDisplayHomeTown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHomeTown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventIsDisplayHomeTown_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHomeTown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHomeTown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHomeTown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHomeTown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHomeTown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "IsDisplayHomeTown", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventIsDisplayHomeTown_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHomeTown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHomeTown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHomeTown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHomeTown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHomeTown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHomeTown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayWeight_Statics
	{
		struct CustomWrestlerAssistComponent_eventIsDisplayWeight_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayWeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventIsDisplayWeight_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventIsDisplayWeight_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayWeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayWeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "IsDisplayWeight", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventIsDisplayWeight_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsLoading_Statics
	{
		struct CustomWrestlerAssistComponent_eventIsLoading_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsLoading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventIsLoading_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsLoading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventIsLoading_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsLoading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsLoading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsLoading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsLoading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "IsLoading", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventIsLoading_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsLoading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsModify_Statics
	{
		struct CustomWrestlerAssistComponent_eventIsModify_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsModify_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventIsModify_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsModify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventIsModify_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsModify_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsModify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsModify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsModify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsModify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "IsModify", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventIsModify_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsModify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsModify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsModify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsModify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsModify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsModify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_LoadEditPaintsAssets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_LoadEditPaintsAssets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_LoadEditPaintsAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "LoadEditPaintsAssets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_LoadEditPaintsAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_LoadEditPaintsAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_LoadEditPaintsAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_LoadEditPaintsAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_LoadEditPartsAssets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_LoadEditPartsAssets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_LoadEditPartsAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "LoadEditPartsAssets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_LoadEditPartsAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_LoadEditPartsAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_LoadEditPartsAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_LoadEditPartsAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeColorPacks_Statics
	{
		struct CustomWrestlerAssistComponent_eventMakeColorPacks_Parms
		{
			TArray<FEditColorParam> ColorPallet;
			TArray<FEditColorPack> Out;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorPallet_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorPallet_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColorPallet;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeColorPacks_Statics::NewProp_ColorPallet_Inner = { "ColorPallet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditColorParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeColorPacks_Statics::NewProp_ColorPallet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeColorPacks_Statics::NewProp_ColorPallet = { "ColorPallet", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventMakeColorPacks_Parms, ColorPallet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeColorPacks_Statics::NewProp_ColorPallet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeColorPacks_Statics::NewProp_ColorPallet_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeColorPacks_Statics::NewProp_Out_Inner = { "Out", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditColorPack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeColorPacks_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventMakeColorPacks_Parms, Out), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeColorPacks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeColorPacks_Statics::NewProp_ColorPallet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeColorPacks_Statics::NewProp_ColorPallet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeColorPacks_Statics::NewProp_Out_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeColorPacks_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeColorPacks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeColorPacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "MakeColorPacks", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventMakeColorPacks_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeColorPacks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeColorPacks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeColorPacks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeColorPacks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeColorPacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeColorPacks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventMakeIgnoreCategories_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::NewProp_WrestlerID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::NewProp_Gender_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventMakeIgnoreCategories_Parms, Gender), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::NewProp_Gender_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditPartsCategoryName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventMakeIgnoreCategories_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::NewProp_ReturnValue_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "MakeIgnoreCategories", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventMakeIgnoreCategories_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnCompleteAssetLoad_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnCompleteAssetLoad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnCompleteAssetLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "OnCompleteAssetLoad", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnCompleteAssetLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnCompleteAssetLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnCompleteAssetLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnCompleteAssetLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnFinishCustomize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnFinishCustomize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnFinishCustomize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "OnFinishCustomize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnFinishCustomize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnFinishCustomize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnFinishCustomize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnFinishCustomize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnLoadFinished_EditPaints_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnLoadFinished_EditPaints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnLoadFinished_EditPaints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "OnLoadFinished_EditPaints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnLoadFinished_EditPaints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnLoadFinished_EditPaints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnLoadFinished_EditPaints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnLoadFinished_EditPaints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnLoadFinished_EditParts_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnLoadFinished_EditParts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnLoadFinished_EditParts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "OnLoadFinished_EditParts", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnLoadFinished_EditParts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnLoadFinished_EditParts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnLoadFinished_EditParts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnLoadFinished_EditParts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFaceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewFaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewFaceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PrevFaceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevFaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PrevFaceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreview_MetaData[];
#endif
		static void NewProp_bPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreview;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::NewProp_NewFaceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::NewProp_NewFaceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::NewProp_NewFaceType = { "NewFaceType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventOnRelocateFacialParts_Parms, NewFaceType), Z_Construct_UEnum_Creation_EFaceType, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::NewProp_NewFaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::NewProp_NewFaceType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::NewProp_PrevFaceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::NewProp_PrevFaceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::NewProp_PrevFaceType = { "PrevFaceType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventOnRelocateFacialParts_Parms, PrevFaceType), Z_Construct_UEnum_Creation_EFaceType, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::NewProp_PrevFaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::NewProp_PrevFaceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::NewProp_bPreview_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::NewProp_bPreview_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventOnRelocateFacialParts_Parms*)Obj)->bPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::NewProp_bPreview = { "bPreview", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventOnRelocateFacialParts_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::NewProp_bPreview_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::NewProp_bPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::NewProp_bPreview_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::NewProp_NewFaceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::NewProp_NewFaceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::NewProp_PrevFaceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::NewProp_PrevFaceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::NewProp_bPreview,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "OnRelocateFacialParts", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventOnRelocateFacialParts_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnReset_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PresetNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnReset_Statics::NewProp_NewData = { "NewData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventOnReset_Parms, NewData), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnReset_Statics::NewProp_PresetNo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnReset_Statics::NewProp_PresetNo = { "PresetNo", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventOnReset_Parms, PresetNo), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnReset_Statics::NewProp_PresetNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnReset_Statics::NewProp_PresetNo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnReset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnReset_Statics::NewProp_NewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnReset_Statics::NewProp_PresetNo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnReset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "OnReset", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventOnReset_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnReset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnReset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnStartCustomize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnStartCustomize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnStartCustomize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "OnStartCustomize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnStartCustomize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnStartCustomize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnStartCustomize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnStartCustomize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPaintAsset_Statics
	{
		struct CustomWrestlerAssistComponent_eventPostLoad_EditPaintAsset_Parms
		{
			FEditPartsKey Key;
			UEditWrestlerPaintAsset* Asset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPaintAsset_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPaintAsset_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventPostLoad_EditPaintAsset_Parms, Key), Z_Construct_UScriptStruct_FEditPartsKey, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPaintAsset_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPaintAsset_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPaintAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventPostLoad_EditPaintAsset_Parms, Asset), Z_Construct_UClass_UEditWrestlerPaintAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPaintAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPaintAsset_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPaintAsset_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPaintAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPaintAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "PostLoad_EditPaintAsset", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventPostLoad_EditPaintAsset_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPaintAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPaintAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPaintAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPaintAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPaintAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPaintAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPartsAsset_Statics
	{
		struct CustomWrestlerAssistComponent_eventPostLoad_EditPartsAsset_Parms
		{
			FEditPartsKey Key;
			UEditWrestlerPartsAsset* Asset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPartsAsset_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPartsAsset_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventPostLoad_EditPartsAsset_Parms, Key), Z_Construct_UScriptStruct_FEditPartsKey, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPartsAsset_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPartsAsset_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPartsAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventPostLoad_EditPartsAsset_Parms, Asset), Z_Construct_UClass_UEditWrestlerPartsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPartsAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPartsAsset_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPartsAsset_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPartsAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPartsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "PostLoad_EditPartsAsset", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventPostLoad_EditPartsAsset_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPartsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPartsAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPartsAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPartsAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPartsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPartsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts_Statics
	{
		struct CustomWrestlerAssistComponent_eventRelocateFacialParts_Parms
		{
			int32 PartsID;
			bool bPreview;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PartsID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreview_MetaData[];
#endif
		static void NewProp_bPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreview;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts_Statics::NewProp_PartsID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts_Statics::NewProp_PartsID = { "PartsID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventRelocateFacialParts_Parms, PartsID), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts_Statics::NewProp_PartsID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts_Statics::NewProp_PartsID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts_Statics::NewProp_bPreview_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts_Statics::NewProp_bPreview_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventRelocateFacialParts_Parms*)Obj)->bPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts_Statics::NewProp_bPreview = { "bPreview", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventRelocateFacialParts_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts_Statics::NewProp_bPreview_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts_Statics::NewProp_bPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts_Statics::NewProp_bPreview_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts_Statics::NewProp_PartsID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts_Statics::NewProp_bPreview,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "RelocateFacialParts", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventRelocateFacialParts_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics
	{
		struct CustomWrestlerAssistComponent_eventRemoveAttires_Parms
		{
			EAttireType AttireType;
			TSet<EEditPartsSlot> PartsSlot;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartsSlot_ElementProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PartsSlot_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_PartsSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventRemoveAttires_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EAttireType, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::NewProp_AttireType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::NewProp_PartsSlot_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::NewProp_PartsSlot_ElementProp = { "PartsSlot", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::NewProp_PartsSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::NewProp_PartsSlot = { "PartsSlot", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventRemoveAttires_Parms, PartsSlot), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::NewProp_PartsSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::NewProp_PartsSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::NewProp_PartsSlot_ElementProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::NewProp_PartsSlot_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::NewProp_PartsSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "RemoveAttires", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventRemoveAttires_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics
	{
		struct CustomWrestlerAssistComponent_eventRemoveEditPaintParam_Parms
		{
			EPreviewAttire PreviewAttireType;
			EEditTexTarget PaintSlot;
			int32 PresetNo;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviewAttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewAttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreviewAttireType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PaintSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PaintSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PresetNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::NewProp_PreviewAttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::NewProp_PreviewAttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::NewProp_PreviewAttireType = { "PreviewAttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventRemoveEditPaintParam_Parms, PreviewAttireType), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::NewProp_PreviewAttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::NewProp_PreviewAttireType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::NewProp_PaintSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::NewProp_PaintSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::NewProp_PaintSlot = { "PaintSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventRemoveEditPaintParam_Parms, PaintSlot), Z_Construct_UEnum_Creation_EEditTexTarget, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::NewProp_PaintSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::NewProp_PaintSlot_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::NewProp_PresetNo = { "PresetNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventRemoveEditPaintParam_Parms, PresetNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::NewProp_PreviewAttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::NewProp_PreviewAttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::NewProp_PaintSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::NewProp_PaintSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::NewProp_PresetNo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "RemoveEditPaintParam", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventRemoveEditPaintParam_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics
	{
		struct CustomWrestlerAssistComponent_eventRemoveEditPartsParam_Parms
		{
			EPreviewAttire AttireType;
			EEditPartsSlot PartsSlot;
			int32 PresetNo;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartsSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PartsSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PresetNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventRemoveEditPartsParam_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::NewProp_AttireType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::NewProp_PartsSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::NewProp_PartsSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::NewProp_PartsSlot = { "PartsSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventRemoveEditPartsParam_Parms, PartsSlot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::NewProp_PartsSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::NewProp_PartsSlot_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::NewProp_PresetNo = { "PresetNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventRemoveEditPartsParam_Parms, PresetNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::NewProp_PartsSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::NewProp_PartsSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::NewProp_PresetNo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "RemoveEditPartsParam", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventRemoveEditPartsParam_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreset_Statics
	{
		struct CustomWrestlerAssistComponent_eventRemovePreset_Parms
		{
			int32 TargetPresetIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPresetIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetPresetIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreset_Statics::NewProp_TargetPresetIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreset_Statics::NewProp_TargetPresetIndex = { "TargetPresetIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventRemovePreset_Parms, TargetPresetIndex), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreset_Statics::NewProp_TargetPresetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreset_Statics::NewProp_TargetPresetIndex_MetaData)) };
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventRemovePreset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventRemovePreset_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreset_Statics::NewProp_TargetPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "RemovePreset", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventRemovePreset_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics
	{
		struct CustomWrestlerAssistComponent_eventRemovePreviewPaintData_Parms
		{
			EPreviewAttire AttireType;
			EEditTexTarget PaintSlot;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PaintSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PaintSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventRemovePreviewPaintData_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics::NewProp_AttireType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics::NewProp_PaintSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics::NewProp_PaintSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics::NewProp_PaintSlot = { "PaintSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventRemovePreviewPaintData_Parms, PaintSlot), Z_Construct_UEnum_Creation_EEditTexTarget, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics::NewProp_PaintSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics::NewProp_PaintSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics::NewProp_PaintSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics::NewProp_PaintSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "RemovePreviewPaintData", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventRemovePreviewPaintData_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics
	{
		struct CustomWrestlerAssistComponent_eventRemovePreviewPartsData_Parms
		{
			EPreviewAttire AttireType;
			EEditPartsSlot PartsSlot;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartsSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PartsSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventRemovePreviewPartsData_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics::NewProp_AttireType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics::NewProp_PartsSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics::NewProp_PartsSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics::NewProp_PartsSlot = { "PartsSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventRemovePreviewPartsData_Parms, PartsSlot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics::NewProp_PartsSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics::NewProp_PartsSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics::NewProp_PartsSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics::NewProp_PartsSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "RemovePreviewPartsData", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventRemovePreviewPartsData_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetModify_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetModify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetModify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "ResetModify", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetModify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetModify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetModify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetModify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetPreviewAttire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetPreviewAttire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetPreviewAttire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "ResetPreviewAttire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetPreviewAttire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetPreviewAttire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetPreviewAttire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetPreviewAttire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetTemporaryAttire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetTemporaryAttire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetTemporaryAttire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "ResetTemporaryAttire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetTemporaryAttire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetTemporaryAttire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetTemporaryAttire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetTemporaryAttire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_SearchFaceType_Statics
	{
		struct CustomWrestlerAssistComponent_eventSearchFaceType_Parms
		{
			int32 PartsID;
			EFaceType ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PartsID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SearchFaceType_Statics::NewProp_PartsID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SearchFaceType_Statics::NewProp_PartsID = { "PartsID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventSearchFaceType_Parms, PartsID), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SearchFaceType_Statics::NewProp_PartsID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SearchFaceType_Statics::NewProp_PartsID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SearchFaceType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SearchFaceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventSearchFaceType_Parms, ReturnValue), Z_Construct_UEnum_Creation_EFaceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_SearchFaceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SearchFaceType_Statics::NewProp_PartsID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SearchFaceType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SearchFaceType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SearchFaceType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SearchFaceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "SearchFaceType", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventSearchFaceType_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_SearchFaceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SearchFaceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SearchFaceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SearchFaceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_SearchFaceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_SearchFaceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_SelectPreset_Statics
	{
		struct CustomWrestlerAssistComponent_eventSelectPreset_Parms
		{
			bool bChanged;
			int32 NewPresetNo;
		};
		static void NewProp_bChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPresetNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewPresetNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_SelectPreset_Statics::NewProp_bChanged_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventSelectPreset_Parms*)Obj)->bChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SelectPreset_Statics::NewProp_bChanged = { "bChanged", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventSelectPreset_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_SelectPreset_Statics::NewProp_bChanged_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SelectPreset_Statics::NewProp_NewPresetNo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SelectPreset_Statics::NewProp_NewPresetNo = { "NewPresetNo", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventSelectPreset_Parms, NewPresetNo), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SelectPreset_Statics::NewProp_NewPresetNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SelectPreset_Statics::NewProp_NewPresetNo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_SelectPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SelectPreset_Statics::NewProp_bChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SelectPreset_Statics::NewProp_NewPresetNo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SelectPreset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SelectPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "SelectPreset", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventSelectPreset_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_SelectPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SelectPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SelectPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SelectPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_SelectPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_SelectPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetCurrentAttireType_Statics
	{
		struct CustomWrestlerAssistComponent_eventSetCurrentAttireType_Parms
		{
			EAttireType NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetCurrentAttireType_Statics::NewProp_NewValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetCurrentAttireType_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetCurrentAttireType_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventSetCurrentAttireType_Parms, NewValue), Z_Construct_UEnum_ELITE_Core_EAttireType, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetCurrentAttireType_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetCurrentAttireType_Statics::NewProp_NewValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetCurrentAttireType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetCurrentAttireType_Statics::NewProp_NewValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetCurrentAttireType_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetCurrentAttireType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetCurrentAttireType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "SetCurrentAttireType", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventSetCurrentAttireType_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetCurrentAttireType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetCurrentAttireType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetCurrentAttireType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetCurrentAttireType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetCurrentAttireType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetCurrentAttireType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetNickName_Statics
	{
		struct CustomWrestlerAssistComponent_eventSetNickName_Parms
		{
			FString NickName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NickName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NickName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetNickName_Statics::NewProp_NickName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetNickName_Statics::NewProp_NickName = { "NickName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventSetNickName_Parms, NickName), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetNickName_Statics::NewProp_NickName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetNickName_Statics::NewProp_NickName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetNickName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetNickName_Statics::NewProp_NickName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetNickName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetNickName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "SetNickName", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventSetNickName_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetNickName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetNickName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetNickName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetNickName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetNickName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetNickName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam_Statics
	{
		struct CustomWrestlerAssistComponent_eventSetPersonParam_Parms
		{
			EBasicWrestlerIntParamType ParamType;
			int32 NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParamType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ParamType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam_Statics::NewProp_ParamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam_Statics::NewProp_ParamType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam_Statics::NewProp_ParamType = { "ParamType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventSetPersonParam_Parms, ParamType), Z_Construct_UEnum_Creation_EBasicWrestlerIntParamType, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam_Statics::NewProp_ParamType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam_Statics::NewProp_ParamType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventSetPersonParam_Parms, NewValue), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam_Statics::NewProp_NewValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam_Statics::NewProp_ParamType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam_Statics::NewProp_ParamType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "SetPersonParam", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventSetPersonParam_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics
	{
		struct CustomWrestlerAssistComponent_eventSetPreset_Parms
		{
			FNamedPresetParam NewPreset;
			int32 PresetNo;
			bool bPreview;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPreset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPreset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PresetNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreview_MetaData[];
#endif
		static void NewProp_bPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreview;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::NewProp_NewPreset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::NewProp_NewPreset = { "NewPreset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventSetPreset_Parms, NewPreset), Z_Construct_UScriptStruct_FNamedPresetParam, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::NewProp_NewPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::NewProp_NewPreset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::NewProp_PresetNo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::NewProp_PresetNo = { "PresetNo", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventSetPreset_Parms, PresetNo), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::NewProp_PresetNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::NewProp_PresetNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::NewProp_bPreview_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::NewProp_bPreview_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventSetPreset_Parms*)Obj)->bPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::NewProp_bPreview = { "bPreview", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventSetPreset_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::NewProp_bPreview_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::NewProp_bPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::NewProp_bPreview_MetaData)) };
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventSetPreset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventSetPreset_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::NewProp_NewPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::NewProp_PresetNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::NewProp_bPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "SetPreset", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventSetPreset_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire_Statics
	{
		struct CustomWrestlerAssistComponent_eventSetPreviewAttire_Parms
		{
			EPreviewAttire AttireType;
			FAttireData NewAttireData;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewAttireData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewAttireData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventSetPreviewAttire_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire_Statics::NewProp_AttireType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire_Statics::NewProp_NewAttireData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire_Statics::NewProp_NewAttireData = { "NewAttireData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventSetPreviewAttire_Parms, NewAttireData), Z_Construct_UScriptStruct_FAttireData, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire_Statics::NewProp_NewAttireData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire_Statics::NewProp_NewAttireData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire_Statics::NewProp_NewAttireData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "SetPreviewAttire", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventSetPreviewAttire_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewBodyMode_Statics
	{
		struct CustomWrestlerAssistComponent_eventSetPreviewBodyMode_Parms
		{
			bool bNewValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNewValue_MetaData[];
#endif
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewBodyMode_Statics::NewProp_bNewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewBodyMode_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventSetPreviewBodyMode_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewBodyMode_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventSetPreviewBodyMode_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewBodyMode_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewBodyMode_Statics::NewProp_bNewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewBodyMode_Statics::NewProp_bNewValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewBodyMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewBodyMode_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewBodyMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewBodyMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "SetPreviewBodyMode", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventSetPreviewBodyMode_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewBodyMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewBodyMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewBodyMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewBodyMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewBodyMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewBodyMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetShortName_Statics
	{
		struct CustomWrestlerAssistComponent_eventSetShortName_Parms
		{
			FString ShortName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShortName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShortName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetShortName_Statics::NewProp_ShortName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetShortName_Statics::NewProp_ShortName = { "ShortName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventSetShortName_Parms, ShortName), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetShortName_Statics::NewProp_ShortName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetShortName_Statics::NewProp_ShortName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetShortName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetShortName_Statics::NewProp_ShortName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetShortName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetShortName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "SetShortName", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventSetShortName_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetShortName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetShortName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetShortName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetShortName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetShortName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetShortName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetSnsName_Statics
	{
		struct CustomWrestlerAssistComponent_eventSetSnsName_Parms
		{
			FString SNSName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SNSName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SNSName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetSnsName_Statics::NewProp_SNSName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetSnsName_Statics::NewProp_SNSName = { "SNSName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventSetSnsName_Parms, SNSName), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetSnsName_Statics::NewProp_SNSName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetSnsName_Statics::NewProp_SNSName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetSnsName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetSnsName_Statics::NewProp_SNSName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetSnsName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetSnsName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "SetSnsName", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventSetSnsName_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetSnsName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetSnsName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetSnsName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetSnsName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetSnsName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetSnsName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetWrestlerName_Statics
	{
		struct CustomWrestlerAssistComponent_eventSetWrestlerName_Parms
		{
			FString UpperName;
			FString LowerName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UpperName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LowerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetWrestlerName_Statics::NewProp_UpperName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetWrestlerName_Statics::NewProp_UpperName = { "UpperName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventSetWrestlerName_Parms, UpperName), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetWrestlerName_Statics::NewProp_UpperName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetWrestlerName_Statics::NewProp_UpperName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetWrestlerName_Statics::NewProp_LowerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetWrestlerName_Statics::NewProp_LowerName = { "LowerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventSetWrestlerName_Parms, LowerName), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetWrestlerName_Statics::NewProp_LowerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetWrestlerName_Statics::NewProp_LowerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetWrestlerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetWrestlerName_Statics::NewProp_UpperName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetWrestlerName_Statics::NewProp_LowerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetWrestlerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetWrestlerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "SetWrestlerName", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventSetWrestlerName_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetWrestlerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetWrestlerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetWrestlerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetWrestlerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetWrestlerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetWrestlerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateAssetLoadingStatus_Statics
	{
		struct CustomWrestlerAssistComponent_eventUpdateAssetLoadingStatus_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateAssetLoadingStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventUpdateAssetLoadingStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateAssetLoadingStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventUpdateAssetLoadingStatus_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateAssetLoadingStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateAssetLoadingStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateAssetLoadingStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateAssetLoadingStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateAssetLoadingStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "UpdateAssetLoadingStatus", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventUpdateAssetLoadingStatus_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateAssetLoadingStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateAssetLoadingStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateAssetLoadingStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateAssetLoadingStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateAssetLoadingStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateAssetLoadingStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateIgnoreCategories_Statics
	{
		struct CustomWrestlerAssistComponent_eventUpdateIgnoreCategories_Parms
		{
			TSet<FEditPartsCategoryName> NewSet;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_NewSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateIgnoreCategories_Statics::NewProp_NewSet_ElementProp = { "NewSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditPartsCategoryName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateIgnoreCategories_Statics::NewProp_NewSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateIgnoreCategories_Statics::NewProp_NewSet = { "NewSet", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdateIgnoreCategories_Parms, NewSet), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateIgnoreCategories_Statics::NewProp_NewSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateIgnoreCategories_Statics::NewProp_NewSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateIgnoreCategories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateIgnoreCategories_Statics::NewProp_NewSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateIgnoreCategories_Statics::NewProp_NewSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateIgnoreCategories_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateIgnoreCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "UpdateIgnoreCategories", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventUpdateIgnoreCategories_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateIgnoreCategories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateIgnoreCategories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateIgnoreCategories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateIgnoreCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateIgnoreCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateIgnoreCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics
	{
		struct CustomWrestlerAssistComponent_eventUpdatePaintAttire_Parms
		{
			EPreviewAttire PreviewAttireType;
			EEditTexTarget PaintSlot;
			FEditPaintParam NewParam;
			bool bPreview;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviewAttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewAttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreviewAttireType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PaintSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PaintSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreview_MetaData[];
#endif
		static void NewProp_bPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreview;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_PreviewAttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_PreviewAttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_PreviewAttireType = { "PreviewAttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePaintAttire_Parms, PreviewAttireType), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_PreviewAttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_PreviewAttireType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_PaintSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_PaintSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_PaintSlot = { "PaintSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePaintAttire_Parms, PaintSlot), Z_Construct_UEnum_Creation_EEditTexTarget, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_PaintSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_PaintSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_NewParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_NewParam = { "NewParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePaintAttire_Parms, NewParam), Z_Construct_UScriptStruct_FEditPaintParam, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_NewParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_NewParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_bPreview_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_bPreview_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventUpdatePaintAttire_Parms*)Obj)->bPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_bPreview = { "bPreview", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventUpdatePaintAttire_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_bPreview_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_bPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_bPreview_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_PreviewAttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_PreviewAttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_PaintSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_PaintSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_NewParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::NewProp_bPreview,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "UpdatePaintAttire", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventUpdatePaintAttire_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics
	{
		struct CustomWrestlerAssistComponent_eventUpdatePaintColor_Parms
		{
			EEditTexTarget PaintSlot;
			EAttireType AttireType;
			int32 ColorSlotNo;
			int32 NewColorID;
			bool bPreview;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PaintSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PaintSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSlotNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColorSlotNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewColorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewColorID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreview_MetaData[];
#endif
		static void NewProp_bPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreview;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_PaintSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_PaintSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_PaintSlot = { "PaintSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePaintColor_Parms, PaintSlot), Z_Construct_UEnum_Creation_EEditTexTarget, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_PaintSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_PaintSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePaintColor_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EAttireType, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_AttireType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_ColorSlotNo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_ColorSlotNo = { "ColorSlotNo", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePaintColor_Parms, ColorSlotNo), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_ColorSlotNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_ColorSlotNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_NewColorID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_NewColorID = { "NewColorID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePaintColor_Parms, NewColorID), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_NewColorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_NewColorID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_bPreview_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_bPreview_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventUpdatePaintColor_Parms*)Obj)->bPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_bPreview = { "bPreview", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventUpdatePaintColor_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_bPreview_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_bPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_bPreview_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_PaintSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_PaintSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_ColorSlotNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_NewColorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::NewProp_bPreview,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "UpdatePaintColor", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventUpdatePaintColor_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics
	{
		struct CustomWrestlerAssistComponent_eventUpdatePaintColors_Parms
		{
			EEditTexTarget PaintSlot;
			EAttireType AttireType;
			FIndexedColorList ColorIDs;
			bool bPreview;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PaintSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PaintSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorIDs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreview_MetaData[];
#endif
		static void NewProp_bPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreview;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_PaintSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_PaintSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_PaintSlot = { "PaintSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePaintColors_Parms, PaintSlot), Z_Construct_UEnum_Creation_EEditTexTarget, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_PaintSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_PaintSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePaintColors_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EAttireType, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_AttireType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_ColorIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_ColorIDs = { "ColorIDs", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePaintColors_Parms, ColorIDs), Z_Construct_UScriptStruct_FIndexedColorList, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_ColorIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_ColorIDs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_bPreview_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_bPreview_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventUpdatePaintColors_Parms*)Obj)->bPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_bPreview = { "bPreview", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventUpdatePaintColors_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_bPreview_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_bPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_bPreview_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_PaintSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_PaintSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_ColorIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::NewProp_bPreview,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "UpdatePaintColors", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventUpdatePaintColors_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics
	{
		struct CustomWrestlerAssistComponent_eventUpdatePartsAttire_Parms
		{
			EPreviewAttire PreviewAttireType;
			EEditPartsSlot PartsSlot;
			FEditPartsParam NewParam;
			bool bPreview;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviewAttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewAttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreviewAttireType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartsSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PartsSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreview_MetaData[];
#endif
		static void NewProp_bPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreview;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_PreviewAttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_PreviewAttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_PreviewAttireType = { "PreviewAttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePartsAttire_Parms, PreviewAttireType), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_PreviewAttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_PreviewAttireType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_PartsSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_PartsSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_PartsSlot = { "PartsSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePartsAttire_Parms, PartsSlot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_PartsSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_PartsSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_NewParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_NewParam = { "NewParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePartsAttire_Parms, NewParam), Z_Construct_UScriptStruct_FEditPartsParam, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_NewParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_NewParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_bPreview_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_bPreview_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventUpdatePartsAttire_Parms*)Obj)->bPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_bPreview = { "bPreview", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventUpdatePartsAttire_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_bPreview_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_bPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_bPreview_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_PreviewAttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_PreviewAttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_PartsSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_PartsSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_NewParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::NewProp_bPreview,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "UpdatePartsAttire", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventUpdatePartsAttire_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics
	{
		struct CustomWrestlerAssistComponent_eventUpdatePartsColor_Parms
		{
			EEditPartsSlot PartsSlot;
			EAttireType AttireType;
			int32 ColorSlotNo;
			int32 NewColorID;
			bool bPreview;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartsSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PartsSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSlotNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColorSlotNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewColorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewColorID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreview_MetaData[];
#endif
		static void NewProp_bPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreview;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_PartsSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_PartsSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_PartsSlot = { "PartsSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePartsColor_Parms, PartsSlot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_PartsSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_PartsSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePartsColor_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EAttireType, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_AttireType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_ColorSlotNo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_ColorSlotNo = { "ColorSlotNo", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePartsColor_Parms, ColorSlotNo), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_ColorSlotNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_ColorSlotNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_NewColorID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_NewColorID = { "NewColorID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePartsColor_Parms, NewColorID), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_NewColorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_NewColorID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_bPreview_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_bPreview_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventUpdatePartsColor_Parms*)Obj)->bPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_bPreview = { "bPreview", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventUpdatePartsColor_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_bPreview_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_bPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_bPreview_MetaData)) };
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventUpdatePartsColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventUpdatePartsColor_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_PartsSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_PartsSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_ColorSlotNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_NewColorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_bPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "UpdatePartsColor", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventUpdatePartsColor_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics
	{
		struct CustomWrestlerAssistComponent_eventUpdatePartsColors_Parms
		{
			EEditPartsSlot PartsSlot;
			EAttireType AttireType;
			FIndexedColorList ColorIDs;
			bool bPreview;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartsSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PartsSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorIDs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreview_MetaData[];
#endif
		static void NewProp_bPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreview;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_PartsSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_PartsSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_PartsSlot = { "PartsSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePartsColors_Parms, PartsSlot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_PartsSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_PartsSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePartsColors_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EAttireType, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_AttireType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_ColorIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_ColorIDs = { "ColorIDs", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePartsColors_Parms, ColorIDs), Z_Construct_UScriptStruct_FIndexedColorList, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_ColorIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_ColorIDs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_bPreview_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_bPreview_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventUpdatePartsColors_Parms*)Obj)->bPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_bPreview = { "bPreview", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventUpdatePartsColors_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_bPreview_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_bPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_bPreview_MetaData)) };
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventUpdatePartsColors_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventUpdatePartsColors_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_PartsSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_PartsSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_ColorIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_bPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "UpdatePartsColors", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventUpdatePartsColors_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePresetName_Statics
	{
		struct CustomWrestlerAssistComponent_eventUpdatePresetName_Parms
		{
			int32 Preset;
			FString NewPresetName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Preset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPresetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewPresetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePresetName_Statics::NewProp_Preset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePresetName_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePresetName_Parms, Preset), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePresetName_Statics::NewProp_Preset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePresetName_Statics::NewProp_Preset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePresetName_Statics::NewProp_NewPresetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePresetName_Statics::NewProp_NewPresetName = { "NewPresetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePresetName_Parms, NewPresetName), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePresetName_Statics::NewProp_NewPresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePresetName_Statics::NewProp_NewPresetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePresetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePresetName_Statics::NewProp_Preset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePresetName_Statics::NewProp_NewPresetName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePresetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePresetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "UpdatePresetName", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventUpdatePresetName_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePresetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePresetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePresetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePresetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePresetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics
	{
		struct CustomWrestlerAssistComponent_eventUpdatePreviewPersonParam_Parms
		{
			EBasicWrestlerIntParamType ParamType;
			int32 NewValue;
			bool bPreview;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParamType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ParamType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreview_MetaData[];
#endif
		static void NewProp_bPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreview;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::NewProp_ParamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::NewProp_ParamType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::NewProp_ParamType = { "ParamType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePreviewPersonParam_Parms, ParamType), Z_Construct_UEnum_Creation_EBasicWrestlerIntParamType, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::NewProp_ParamType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::NewProp_ParamType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventUpdatePreviewPersonParam_Parms, NewValue), METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::NewProp_NewValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::NewProp_bPreview_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::NewProp_bPreview_SetBit(void* Obj)
	{
		((CustomWrestlerAssistComponent_eventUpdatePreviewPersonParam_Parms*)Obj)->bPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::NewProp_bPreview = { "bPreview", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomWrestlerAssistComponent_eventUpdatePreviewPersonParam_Parms), &Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::NewProp_bPreview_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::NewProp_bPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::NewProp_bPreview_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::NewProp_ParamType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::NewProp_ParamType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::NewProp_bPreview,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "UpdatePreviewPersonParam", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventUpdatePreviewPersonParam_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomWrestlerAssistComponent_ValidateFaceType_Statics
	{
		struct CustomWrestlerAssistComponent_eventValidateFaceType_Parms
		{
			EFaceType NowFaceType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NowFaceType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NowFaceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_ValidateFaceType_Statics::NewProp_NowFaceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_ValidateFaceType_Statics::NewProp_NowFaceType = { "NowFaceType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomWrestlerAssistComponent_eventValidateFaceType_Parms, NowFaceType), Z_Construct_UEnum_Creation_EFaceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomWrestlerAssistComponent_ValidateFaceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_ValidateFaceType_Statics::NewProp_NowFaceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomWrestlerAssistComponent_ValidateFaceType_Statics::NewProp_NowFaceType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWrestlerAssistComponent_ValidateFaceType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWrestlerAssistComponent_ValidateFaceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWrestlerAssistComponent, nullptr, "ValidateFaceType", nullptr, nullptr, sizeof(CustomWrestlerAssistComponent_eventValidateFaceType_Parms), Z_Construct_UFunction_UCustomWrestlerAssistComponent_ValidateFaceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_ValidateFaceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWrestlerAssistComponent_ValidateFaceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWrestlerAssistComponent_ValidateFaceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWrestlerAssistComponent_ValidateFaceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWrestlerAssistComponent_ValidateFaceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomWrestlerAssistComponent_NoRegister()
	{
		return UCustomWrestlerAssistComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPresetNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentPresetNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetNameLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PresetNameLimit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IgnoreCategory_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_IgnoreCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemporaryAttire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TemporaryAttire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewAttire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewAttire;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentAttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentAttireType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreviewBodyMode_MetaData[];
#endif
		static void NewProp_bPreviewBodyMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreviewBodyMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActivePartsSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivePartsSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActivePartsSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExclusionParts_ElementProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExclusionParts_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExclusionParts_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ExclusionParts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewModel_Match_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewModel_Match;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewModel_Entrance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewModel_Entrance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewModel_Plain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewModel_Plain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RosterPreviewCostume_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RosterPreviewCostume;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyPreviewAttire_Male_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyPreviewAttire_Male_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BodyPreviewAttire_Male_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyPreviewAttire_Male_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BodyPreviewAttire_Male;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyPreviewAttire_Female_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyPreviewAttire_Female_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BodyPreviewAttire_Female_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyPreviewAttire_Female_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BodyPreviewAttire_Female;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAssetLoadFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAssetLoadFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAssetLoading_MetaData[];
#endif
		static void NewProp_bAssetLoading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAssetLoading;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LoadingPartsCue_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadingPartsCue_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingPartsCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LoadingPartsCue;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LoadingPaintCue_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadingPaintCue_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingPaintCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LoadingPaintCue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseTablePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PoseTablePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FightStyleTablePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FightStyleTablePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponTablePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponTablePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditingData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMyWrestlerDataEditComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPaintParam, "AddEditPaintParam" }, // 1145176019
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddEditPartsParam, "AddEditPartsParam" }, // 2277379686
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPaintsAsset, "AddLoadEditPaintsAsset" }, // 279196385
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddLoadEditPartsAsset, "AddLoadEditPartsAsset" }, // 2125569765
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddNewPreset, "AddNewPreset" }, // 1087198899
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPaintData, "AddPreviewPaintData" }, // 2837681102
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_AddPreviewPartsData, "AddPreviewPartsData" }, // 1775327166
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_ApplyTemplateData, "ApplyTemplateData" }, // 1355109091
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_CanEditStreetClothes, "CanEditStreetClothes" }, // 3824483762
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckCompatiableImpl, "CheckCompatiableImpl" }, // 29489302
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishedAssetLoad, "CheckFinishedAssetLoad" }, // 777955296
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditPaints, "CheckFinishLoadEditPaints" }, // 3647111980
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckFinishLoadEditParts, "CheckFinishLoadEditParts" }, // 3485369657
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_CheckModify, "CheckModify" }, // 2285176916
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_ClearAllLoadCue, "ClearAllLoadCue" }, // 1145220860
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAllAttire, "CopyAllAttire" }, // 114934014
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_CopyAttire, "CopyAttire" }, // 882285479
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAllEquippedPartsIDs, "GetAllEquippedPartsIDs" }, // 2848458754
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetAssetCompatibleData, "GetAssetCompatibleData" }, // 3262876903
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentAttireType, "GetCurrentAttireType" }, // 4175462320
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetCurrentPreset, "GetCurrentPreset" }, // 675101685
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditAttireParam, "GetEditAttireParam" }, // 767407069
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPaintParam, "GetEditPaintParam" }, // 244953794
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPartsParam, "GetEditPartsParam" }, // 1416679869
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetEditPerson, "GetEditPerson" }, // 2660091112
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetFaceType, "GetFaceType" }, // 76853420
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetGender, "GetGender" }, // 3279969635
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickName, "GetNickName" }, // 431673084
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetNickNameText, "GetNickNameText" }, // 2765259886
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPersonParam, "GetPersonParam" }, // 3538463110
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreset, "GetPreset" }, // 3166122286
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPresetNames, "GetPresetNames" }, // 531277855
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttire, "GetPreviewAttire" }, // 1733463832
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewAttireConst, "GetPreviewAttireConst" }, // 2164352690
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewCoordinate, "GetPreviewCoordinate" }, // 2283064125
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPaintData, "GetPreviewPaintData" }, // 2375958590
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetPreviewPartsData, "GetPreviewPartsData" }, // 388029774
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortName, "GetShortName" }, // 2965722655
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetShortNameText, "GetShortNameText" }, // 2212716892
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsName, "GetSnsName" }, // 779683926
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetSnsNameText, "GetSnsNameText" }, // 2571792027
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetTemporaryAttire, "GetTemporaryAttire" }, // 3521438447
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetUID, "GetUID" }, // 1569865988
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerID, "GetWrestlerID" }, // 896746136
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerName, "GetWrestlerName" }, // 2571863016
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerNameText, "GetWrestlerNameText" }, // 1588905027
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_GetWrestlerProfilesTexts, "GetWrestlerProfilesTexts" }, // 116423408
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayBirthday, "IsDisplayBirthday" }, // 3516136520
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHeight, "IsDisplayHeight" }, // 1556668474
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayHomeTown, "IsDisplayHomeTown" }, // 1314754333
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsDisplayWeight, "IsDisplayWeight" }, // 2460505351
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsLoading, "IsLoading" }, // 479365505
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_IsModify, "IsModify" }, // 4066258018
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_LoadEditPaintsAssets, "LoadEditPaintsAssets" }, // 959958133
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_LoadEditPartsAssets, "LoadEditPartsAssets" }, // 1826142347
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeColorPacks, "MakeColorPacks" }, // 1279438840
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_MakeIgnoreCategories, "MakeIgnoreCategories" }, // 4106278926
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnCompleteAssetLoad, "OnCompleteAssetLoad" }, // 4105411729
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnFinishCustomize, "OnFinishCustomize" }, // 1902111054
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnLoadFinished_EditPaints, "OnLoadFinished_EditPaints" }, // 886927577
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnLoadFinished_EditParts, "OnLoadFinished_EditParts" }, // 2427256582
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnRelocateFacialParts, "OnRelocateFacialParts" }, // 4131119919
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnReset, "OnReset" }, // 1985580625
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_OnStartCustomize, "OnStartCustomize" }, // 3907543326
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPaintAsset, "PostLoad_EditPaintAsset" }, // 2062187695
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_PostLoad_EditPartsAsset, "PostLoad_EditPartsAsset" }, // 687478958
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_RelocateFacialParts, "RelocateFacialParts" }, // 562060386
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveAttires, "RemoveAttires" }, // 2519380799
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPaintParam, "RemoveEditPaintParam" }, // 3076656522
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemoveEditPartsParam, "RemoveEditPartsParam" }, // 56692795
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreset, "RemovePreset" }, // 2835702100
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPaintData, "RemovePreviewPaintData" }, // 2846885461
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_RemovePreviewPartsData, "RemovePreviewPartsData" }, // 2903983474
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetModify, "ResetModify" }, // 38159619
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetPreviewAttire, "ResetPreviewAttire" }, // 123540243
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_ResetTemporaryAttire, "ResetTemporaryAttire" }, // 3743049165
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_SearchFaceType, "SearchFaceType" }, // 3327466667
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_SelectPreset, "SelectPreset" }, // 1560810068
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetCurrentAttireType, "SetCurrentAttireType" }, // 3047917211
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetNickName, "SetNickName" }, // 1867952118
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPersonParam, "SetPersonParam" }, // 1987631015
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreset, "SetPreset" }, // 3569460125
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewAttire, "SetPreviewAttire" }, // 2385482249
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetPreviewBodyMode, "SetPreviewBodyMode" }, // 996123358
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetShortName, "SetShortName" }, // 198818756
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetSnsName, "SetSnsName" }, // 3226162372
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_SetWrestlerName, "SetWrestlerName" }, // 3273841102
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateAssetLoadingStatus, "UpdateAssetLoadingStatus" }, // 2508716286
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdateIgnoreCategories, "UpdateIgnoreCategories" }, // 1980055037
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintAttire, "UpdatePaintAttire" }, // 4251343950
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColor, "UpdatePaintColor" }, // 2866823816
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePaintColors, "UpdatePaintColors" }, // 3837617321
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsAttire, "UpdatePartsAttire" }, // 3638342372
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColor, "UpdatePartsColor" }, // 2721056551
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePartsColors, "UpdatePartsColors" }, // 2789147471
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePresetName, "UpdatePresetName" }, // 80339588
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_UpdatePreviewPersonParam, "UpdatePreviewPersonParam" }, // 888819501
		{ &Z_Construct_UFunction_UCustomWrestlerAssistComponent_ValidateFaceType, "ValidateFaceType" }, // 3853890643
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CustomWrestlerAssistComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_CurrentPresetNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_CurrentPresetNo = { "CurrentPresetNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, CurrentPresetNo), METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_CurrentPresetNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_CurrentPresetNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PresetNameLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PresetNameLimit = { "PresetNameLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, PresetNameLimit), METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PresetNameLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PresetNameLimit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_IgnoreCategory_ElementProp = { "IgnoreCategory", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditPartsCategoryName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_IgnoreCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_IgnoreCategory = { "IgnoreCategory", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, IgnoreCategory), METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_IgnoreCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_IgnoreCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_TemporaryAttire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_TemporaryAttire = { "TemporaryAttire", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, TemporaryAttire), Z_Construct_UScriptStruct_FAttireDataSet, METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_TemporaryAttire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_TemporaryAttire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewAttire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewAttire = { "PreviewAttire", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, PreviewAttire), Z_Construct_UScriptStruct_FAttireDataSet, METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewAttire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewAttire_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_CurrentAttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_CurrentAttireType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_CurrentAttireType = { "CurrentAttireType", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, CurrentAttireType), Z_Construct_UEnum_ELITE_Core_EAttireType, METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_CurrentAttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_CurrentAttireType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_bPreviewBodyMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_bPreviewBodyMode_SetBit(void* Obj)
	{
		((UCustomWrestlerAssistComponent*)Obj)->bPreviewBodyMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_bPreviewBodyMode = { "bPreviewBodyMode", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCustomWrestlerAssistComponent), &Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_bPreviewBodyMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_bPreviewBodyMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_bPreviewBodyMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewData = { "PreviewData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, PreviewData), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_ActivePartsSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_ActivePartsSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_ActivePartsSlot = { "ActivePartsSlot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, ActivePartsSlot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_ActivePartsSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_ActivePartsSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_ExclusionParts_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_ExclusionParts_ElementProp = { "ExclusionParts", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_ExclusionParts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_ExclusionParts = { "ExclusionParts", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, ExclusionParts), METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_ExclusionParts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_ExclusionParts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewModel_Match_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewModel_Match = { "PreviewModel_Match", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, PreviewModel_Match), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewModel_Match_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewModel_Match_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewModel_Entrance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewModel_Entrance = { "PreviewModel_Entrance", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, PreviewModel_Entrance), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewModel_Entrance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewModel_Entrance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewModel_Plain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewModel_Plain = { "PreviewModel_Plain", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, PreviewModel_Plain), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewModel_Plain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewModel_Plain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_RosterPreviewCostume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_RosterPreviewCostume = { "RosterPreviewCostume", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, RosterPreviewCostume), Z_Construct_UScriptStruct_FCostumeParam, METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_RosterPreviewCostume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_RosterPreviewCostume_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_BodyPreviewAttire_Male_ValueProp = { "BodyPreviewAttire_Male", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FEditPartsData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_BodyPreviewAttire_Male_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_BodyPreviewAttire_Male_Key_KeyProp = { "BodyPreviewAttire_Male_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_BodyPreviewAttire_Male_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_BodyPreviewAttire_Male = { "BodyPreviewAttire_Male", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, BodyPreviewAttire_Male), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_BodyPreviewAttire_Male_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_BodyPreviewAttire_Male_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_BodyPreviewAttire_Female_ValueProp = { "BodyPreviewAttire_Female", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FEditPartsData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_BodyPreviewAttire_Female_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_BodyPreviewAttire_Female_Key_KeyProp = { "BodyPreviewAttire_Female_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_BodyPreviewAttire_Female_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_BodyPreviewAttire_Female = { "BodyPreviewAttire_Female", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, BodyPreviewAttire_Female), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_BodyPreviewAttire_Female_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_BodyPreviewAttire_Female_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_OnAssetLoadFinished_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_OnAssetLoadFinished = { "OnAssetLoadFinished", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, OnAssetLoadFinished), Z_Construct_UDelegateFunction_ELITE_OnAssetLoadFinishedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_OnAssetLoadFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_OnAssetLoadFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_bAssetLoading_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_bAssetLoading_SetBit(void* Obj)
	{
		((UCustomWrestlerAssistComponent*)Obj)->bAssetLoading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_bAssetLoading = { "bAssetLoading", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCustomWrestlerAssistComponent), &Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_bAssetLoading_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_bAssetLoading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_bAssetLoading_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_LoadingPartsCue_ValueProp = { "LoadingPartsCue", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEditWrestlerPartsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_LoadingPartsCue_Key_KeyProp = { "LoadingPartsCue_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditPartsKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_LoadingPartsCue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_LoadingPartsCue = { "LoadingPartsCue", nullptr, (EPropertyFlags)0x0024080000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, LoadingPartsCue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_LoadingPartsCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_LoadingPartsCue_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_LoadingPaintCue_ValueProp = { "LoadingPaintCue", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEditWrestlerPaintAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_LoadingPaintCue_Key_KeyProp = { "LoadingPaintCue_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditPartsKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_LoadingPaintCue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_LoadingPaintCue = { "LoadingPaintCue", nullptr, (EPropertyFlags)0x0024080000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, LoadingPaintCue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_LoadingPaintCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_LoadingPaintCue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_CachedAssets_Inner = { "CachedAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_CachedAssets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_CachedAssets = { "CachedAssets", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, CachedAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_CachedAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_CachedAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_OriginalData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_OriginalData = { "OriginalData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, OriginalData), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_OriginalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_OriginalData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PoseTablePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PoseTablePath = { "PoseTablePath", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, PoseTablePath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PoseTablePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PoseTablePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_FightStyleTablePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_FightStyleTablePath = { "FightStyleTablePath", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, FightStyleTablePath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_FightStyleTablePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_FightStyleTablePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_WeaponTablePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_WeaponTablePath = { "WeaponTablePath", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, WeaponTablePath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_WeaponTablePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_WeaponTablePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_EditingData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomWrestlerAssistComponent" },
		{ "ModuleRelativePath", "Public/CustomWrestlerAssistComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_EditingData = { "EditingData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWrestlerAssistComponent, EditingData), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_EditingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_EditingData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_CurrentPresetNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PresetNameLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_IgnoreCategory_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_IgnoreCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_TemporaryAttire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewAttire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_CurrentAttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_CurrentAttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_bPreviewBodyMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_ActivePartsSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_ActivePartsSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_ExclusionParts_ElementProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_ExclusionParts_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_ExclusionParts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewModel_Match,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewModel_Entrance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PreviewModel_Plain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_RosterPreviewCostume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_BodyPreviewAttire_Male_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_BodyPreviewAttire_Male_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_BodyPreviewAttire_Male_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_BodyPreviewAttire_Male,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_BodyPreviewAttire_Female_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_BodyPreviewAttire_Female_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_BodyPreviewAttire_Female_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_BodyPreviewAttire_Female,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_OnAssetLoadFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_bAssetLoading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_LoadingPartsCue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_LoadingPartsCue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_LoadingPartsCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_LoadingPaintCue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_LoadingPaintCue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_LoadingPaintCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_CachedAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_CachedAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_OriginalData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_PoseTablePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_FightStyleTablePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_WeaponTablePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::NewProp_EditingData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomWrestlerAssistComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::ClassParams = {
		&UCustomWrestlerAssistComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomWrestlerAssistComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomWrestlerAssistComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomWrestlerAssistComponent, 483006386);
	template<> ELITE_API UClass* StaticClass<UCustomWrestlerAssistComponent>()
	{
		return UCustomWrestlerAssistComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomWrestlerAssistComponent(Z_Construct_UClass_UCustomWrestlerAssistComponent, &UCustomWrestlerAssistComponent::StaticClass, TEXT("/Script/ELITE"), TEXT("UCustomWrestlerAssistComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomWrestlerAssistComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
