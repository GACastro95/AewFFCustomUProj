// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMenuUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMenuUtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELMenuUtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELMenuUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ELanguageType();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile();
	ABP_200508_API UClass* Z_Construct_UClass_UMyWrestlerDataObject_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESelectWreslterSortType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMenuSelectWreslterParam();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ETipsLoadingCategory();
// End Cross Module References
	DEFINE_FUNCTION(UELMenuUtilityFunction::execCalcGridCursor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Current);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChangeXNum);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChangeYNum);
		P_GET_PROPERTY(FIntProperty,Z_Param_Size);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_UBOOL(Z_Param_IsRepeat);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Next);
		P_GET_UBOOL_REF(Z_Param_Out_bMoved);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMenuUtilityFunction::CalcGridCursor(Z_Param_Current,Z_Param_ChangeXNum,Z_Param_ChangeYNum,Z_Param_Size,Z_Param_Width,Z_Param_IsRepeat,Z_Param_Out_Next,Z_Param_Out_bMoved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execCalcListCursor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Current);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChangeNum);
		P_GET_PROPERTY(FIntProperty,Z_Param_Size);
		P_GET_UBOOL(Z_Param_IsRepeat);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Next);
		P_GET_UBOOL_REF(Z_Param_Out_bMoved);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMenuUtilityFunction::CalcListCursor(Z_Param_Current,Z_Param_ChangeNum,Z_Param_Size,Z_Param_IsRepeat,Z_Param_Out_Next,Z_Param_Out_bMoved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execCalcTileViewScrollIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__currentSelectIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param__currentScrollIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param__dispVerticalItemNum);
		P_GET_PROPERTY(FIntProperty,Z_Param__dispHorizontalItemNum);
		P_GET_PROPERTY(FByteProperty,Z_Param__orientation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELMenuUtilityFunction::CalcTileViewScrollIndex(Z_Param__currentSelectIndex,Z_Param__currentScrollIndex,Z_Param__dispVerticalItemNum,Z_Param__dispHorizontalItemNum,EOrientation(Z_Param__orientation));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execChangeEnableInputToAllController)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMenuUtilityFunction::ChangeEnableInputToAllController(Z_Param__pWorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execChangeEnableInputToHostControllerOnly)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMenuUtilityFunction::ChangeEnableInputToHostControllerOnly(Z_Param__pWorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execChangeLanguage)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_ENUM(ELanguageType,Z_Param__type);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMenuUtilityFunction::ChangeLanguage(Z_Param__pWorldContextObject,ELanguageType(Z_Param__type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execChangeUserIndexForKeyboardMouse)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param__newIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMenuUtilityFunction::ChangeUserIndexForKeyboardMouse(Z_Param__pWorldContextObject,Z_Param__newIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execConvertBodyHeightUnitToFoot)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__inBodyHeight);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out__outFoot);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out__outInch);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMenuUtilityFunction::ConvertBodyHeightUnitToFoot(Z_Param__inBodyHeight,Z_Param_Out__outFoot,Z_Param_Out__outInch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execConvertBodyWeightUnitToLb)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__inBodyWeight);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out__outLbs);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMenuUtilityFunction::ConvertBodyWeightUnitToLb(Z_Param__inBodyWeight,Z_Param_Out__outLbs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execGetCurrentLanguage)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_ENUM_REF(ELanguageType,Z_Param_Out__Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMenuUtilityFunction::GetCurrentLanguage(Z_Param__pWorldContextObject,(ELanguageType&)(Z_Param_Out__Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execGetCurrentLanguageFont)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_OBJECT(UObject,Z_Param_BaseFont);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFont**)Z_Param__Result=UELMenuUtilityFunction::GetCurrentLanguageFont(Z_Param__pWorldContextObject,Z_Param_BaseFont);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execGetMenuEditWrestlerProfile)
	{
		P_GET_STRUCT_REF(FELWrestlerProfile,Z_Param_Out__outProfile);
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param__targetWrestlerData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMenuUtilityFunction::GetMenuEditWrestlerProfile(Z_Param_Out__outProfile,Z_Param__targetWrestlerData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execGetMenuSelectWreslterList)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_ENUM(ESelectWreslterSortType,Z_Param__sortType);
		P_GET_TARRAY_REF(FMenuSelectWreslterParam,Z_Param_Out__outResult);
		P_GET_UBOOL(Z_Param__isCheckUnlockStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMenuUtilityFunction::GetMenuSelectWreslterList(Z_Param__pWorldContextObject,ESelectWreslterSortType(Z_Param__sortType),Z_Param_Out__outResult,Z_Param__isCheckUnlockStatus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execGetMenuSelectWreslterParamFromWrestlerID)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_ENUM(EWrestlerID_N,Z_Param__targetWrestler);
		P_GET_UBOOL_REF(Z_Param_Out__findParam);
		P_GET_STRUCT_REF(FMenuSelectWreslterParam,Z_Param_Out__outResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMenuUtilityFunction::GetMenuSelectWreslterParamFromWrestlerID(Z_Param__pWorldContextObject,EWrestlerID_N(Z_Param__targetWrestler),Z_Param_Out__findParam,Z_Param_Out__outResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execGetOnlineUserRankImageIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__rankPoint);
		P_GET_PROPERTY(FIntProperty,Z_Param__scoreRanking);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELMenuUtilityFunction::GetOnlineUserRankImageIndex(Z_Param__rankPoint,Z_Param__scoreRanking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execGetUserIndexForKeyboard)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELMenuUtilityFunction::GetUserIndexForKeyboard(Z_Param__pWorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execInteger_Sort)
	{
		P_GET_TARRAY(int32,Z_Param__target);
		P_GET_UBOOL(Z_Param_IsDesc);
		P_GET_TARRAY_REF(int32,Z_Param_Out__out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMenuUtilityFunction::Integer_Sort(Z_Param__target,Z_Param_IsDesc,Z_Param_Out__out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execIsAllControllerEnableInput)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELMenuUtilityFunction::IsAllControllerEnableInput(Z_Param__pWorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execIsUnlockedItemContent)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param__checkUnlockableItemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELMenuUtilityFunction::IsUnlockedItemContent(Z_Param__pWorldContextObject,Z_Param__checkUnlockableItemID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execIsValidForceFailedDlcCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELMenuUtilityFunction::IsValidForceFailedDlcCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execIsValidWrestlerSelectOnKeyboard)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELMenuUtilityFunction::IsValidWrestlerSelectOnKeyboard(Z_Param__pWorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execPlatformTextCheck)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELMenuUtilityFunction::PlatformTextCheck(Z_Param_Out_InText,Z_Param_Out_OutText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execSetGameFPS)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param__fpsValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMenuUtilityFunction::SetGameFPS(Z_Param__pWorldContextObject,Z_Param__fpsValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execSetUserFocusToGameViewport)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMenuUtilityFunction::SetUserFocusToGameViewport(Z_Param__pWorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execStartTipsLoadingScreen)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_ENUM(ETipsLoadingCategory,Z_Param__nextGameMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMenuUtilityFunction::StartTipsLoadingScreen(Z_Param__pWorldContextObject,ETipsLoadingCategory(Z_Param__nextGameMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuUtilityFunction::execStartTipsLoadingScreenWithOverrideNextLevel)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_ENUM(ETipsLoadingCategory,Z_Param__nextGameMode);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out__nextLevel);
		P_GET_PROPERTY(FStrProperty,Z_Param__nextLevelOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMenuUtilityFunction::StartTipsLoadingScreenWithOverrideNextLevel(Z_Param__pWorldContextObject,ETipsLoadingCategory(Z_Param__nextGameMode),Z_Param_Out__nextLevel,Z_Param__nextLevelOption);
		P_NATIVE_END;
	}
	void UELMenuUtilityFunction::StaticRegisterNativesUELMenuUtilityFunction()
	{
		UClass* Class = UELMenuUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalcGridCursor", &UELMenuUtilityFunction::execCalcGridCursor },
			{ "CalcListCursor", &UELMenuUtilityFunction::execCalcListCursor },
			{ "CalcTileViewScrollIndex", &UELMenuUtilityFunction::execCalcTileViewScrollIndex },
			{ "ChangeEnableInputToAllController", &UELMenuUtilityFunction::execChangeEnableInputToAllController },
			{ "ChangeEnableInputToHostControllerOnly", &UELMenuUtilityFunction::execChangeEnableInputToHostControllerOnly },
			{ "ChangeLanguage", &UELMenuUtilityFunction::execChangeLanguage },
			{ "ChangeUserIndexForKeyboardMouse", &UELMenuUtilityFunction::execChangeUserIndexForKeyboardMouse },
			{ "ConvertBodyHeightUnitToFoot", &UELMenuUtilityFunction::execConvertBodyHeightUnitToFoot },
			{ "ConvertBodyWeightUnitToLb", &UELMenuUtilityFunction::execConvertBodyWeightUnitToLb },
			{ "GetCurrentLanguage", &UELMenuUtilityFunction::execGetCurrentLanguage },
			{ "GetCurrentLanguageFont", &UELMenuUtilityFunction::execGetCurrentLanguageFont },
			{ "GetMenuEditWrestlerProfile", &UELMenuUtilityFunction::execGetMenuEditWrestlerProfile },
			{ "GetMenuSelectWreslterList", &UELMenuUtilityFunction::execGetMenuSelectWreslterList },
			{ "GetMenuSelectWreslterParamFromWrestlerID", &UELMenuUtilityFunction::execGetMenuSelectWreslterParamFromWrestlerID },
			{ "GetOnlineUserRankImageIndex", &UELMenuUtilityFunction::execGetOnlineUserRankImageIndex },
			{ "GetUserIndexForKeyboard", &UELMenuUtilityFunction::execGetUserIndexForKeyboard },
			{ "Integer_Sort", &UELMenuUtilityFunction::execInteger_Sort },
			{ "IsAllControllerEnableInput", &UELMenuUtilityFunction::execIsAllControllerEnableInput },
			{ "IsUnlockedItemContent", &UELMenuUtilityFunction::execIsUnlockedItemContent },
			{ "IsValidForceFailedDlcCheck", &UELMenuUtilityFunction::execIsValidForceFailedDlcCheck },
			{ "IsValidWrestlerSelectOnKeyboard", &UELMenuUtilityFunction::execIsValidWrestlerSelectOnKeyboard },
			{ "PlatformTextCheck", &UELMenuUtilityFunction::execPlatformTextCheck },
			{ "SetGameFPS", &UELMenuUtilityFunction::execSetGameFPS },
			{ "SetUserFocusToGameViewport", &UELMenuUtilityFunction::execSetUserFocusToGameViewport },
			{ "StartTipsLoadingScreen", &UELMenuUtilityFunction::execStartTipsLoadingScreen },
			{ "StartTipsLoadingScreenWithOverrideNextLevel", &UELMenuUtilityFunction::execStartTipsLoadingScreenWithOverrideNextLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics
	{
		struct ELMenuUtilityFunction_eventCalcGridCursor_Parms
		{
			int32 Current;
			int32 ChangeXNum;
			int32 ChangeYNum;
			int32 Size;
			int32 Width;
			bool IsRepeat;
			int32 Next;
			bool bMoved;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Current;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChangeXNum;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChangeYNum;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Next;
		static void NewProp_bMoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventCalcGridCursor_Parms, Current), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::NewProp_ChangeXNum = { "ChangeXNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventCalcGridCursor_Parms, ChangeXNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::NewProp_ChangeYNum = { "ChangeYNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventCalcGridCursor_Parms, ChangeYNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventCalcGridCursor_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventCalcGridCursor_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMenuUtilityFunction_eventCalcGridCursor_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMenuUtilityFunction_eventCalcGridCursor_Parms), &Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::NewProp_Next = { "Next", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventCalcGridCursor_Parms, Next), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::NewProp_bMoved_SetBit(void* Obj)
	{
		((ELMenuUtilityFunction_eventCalcGridCursor_Parms*)Obj)->bMoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::NewProp_bMoved = { "bMoved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMenuUtilityFunction_eventCalcGridCursor_Parms), &Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::NewProp_bMoved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::NewProp_Current,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::NewProp_ChangeXNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::NewProp_ChangeYNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::NewProp_IsRepeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::NewProp_Next,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::NewProp_bMoved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "CalcGridCursor", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventCalcGridCursor_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics
	{
		struct ELMenuUtilityFunction_eventCalcListCursor_Parms
		{
			int32 Current;
			int32 ChangeNum;
			int32 Size;
			bool IsRepeat;
			int32 Next;
			bool bMoved;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Current;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChangeNum;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
		static void NewProp_IsRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRepeat;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Next;
		static void NewProp_bMoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventCalcListCursor_Parms, Current), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::NewProp_ChangeNum = { "ChangeNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventCalcListCursor_Parms, ChangeNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventCalcListCursor_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::NewProp_IsRepeat_SetBit(void* Obj)
	{
		((ELMenuUtilityFunction_eventCalcListCursor_Parms*)Obj)->IsRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::NewProp_IsRepeat = { "IsRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMenuUtilityFunction_eventCalcListCursor_Parms), &Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::NewProp_IsRepeat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::NewProp_Next = { "Next", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventCalcListCursor_Parms, Next), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::NewProp_bMoved_SetBit(void* Obj)
	{
		((ELMenuUtilityFunction_eventCalcListCursor_Parms*)Obj)->bMoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::NewProp_bMoved = { "bMoved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMenuUtilityFunction_eventCalcListCursor_Parms), &Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::NewProp_bMoved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::NewProp_Current,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::NewProp_ChangeNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::NewProp_IsRepeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::NewProp_Next,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::NewProp_bMoved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "CalcListCursor", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventCalcListCursor_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex_Statics
	{
		struct ELMenuUtilityFunction_eventCalcTileViewScrollIndex_Parms
		{
			int32 _currentSelectIndex;
			int32 _currentScrollIndex;
			int32 _dispVerticalItemNum;
			int32 _dispHorizontalItemNum;
			TEnumAsByte<EOrientation> _orientation;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__currentSelectIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__currentScrollIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__dispVerticalItemNum;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__dispHorizontalItemNum;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__orientation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex_Statics::NewProp__currentSelectIndex = { "_currentSelectIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventCalcTileViewScrollIndex_Parms, _currentSelectIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex_Statics::NewProp__currentScrollIndex = { "_currentScrollIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventCalcTileViewScrollIndex_Parms, _currentScrollIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex_Statics::NewProp__dispVerticalItemNum = { "_dispVerticalItemNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventCalcTileViewScrollIndex_Parms, _dispVerticalItemNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex_Statics::NewProp__dispHorizontalItemNum = { "_dispHorizontalItemNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventCalcTileViewScrollIndex_Parms, _dispHorizontalItemNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex_Statics::NewProp__orientation = { "_orientation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventCalcTileViewScrollIndex_Parms, _orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventCalcTileViewScrollIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex_Statics::NewProp__currentSelectIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex_Statics::NewProp__currentScrollIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex_Statics::NewProp__dispVerticalItemNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex_Statics::NewProp__dispHorizontalItemNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex_Statics::NewProp__orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "CalcTileViewScrollIndex", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventCalcTileViewScrollIndex_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToAllController_Statics
	{
		struct ELMenuUtilityFunction_eventChangeEnableInputToAllController_Parms
		{
			UObject* _pWorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToAllController_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventChangeEnableInputToAllController_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToAllController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToAllController_Statics::NewProp__pWorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToAllController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToAllController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "ChangeEnableInputToAllController", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventChangeEnableInputToAllController_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToAllController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToAllController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToAllController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToAllController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToAllController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToAllController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToHostControllerOnly_Statics
	{
		struct ELMenuUtilityFunction_eventChangeEnableInputToHostControllerOnly_Parms
		{
			UObject* _pWorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToHostControllerOnly_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventChangeEnableInputToHostControllerOnly_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToHostControllerOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToHostControllerOnly_Statics::NewProp__pWorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToHostControllerOnly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToHostControllerOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "ChangeEnableInputToHostControllerOnly", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventChangeEnableInputToHostControllerOnly_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToHostControllerOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToHostControllerOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToHostControllerOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToHostControllerOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToHostControllerOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToHostControllerOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_ChangeLanguage_Statics
	{
		struct ELMenuUtilityFunction_eventChangeLanguage_Parms
		{
			UObject* _pWorldContextObject;
			ELanguageType _type;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_ChangeLanguage_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventChangeLanguage_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_ChangeLanguage_Statics::NewProp__type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_ChangeLanguage_Statics::NewProp__type = { "_type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventChangeLanguage_Parms, _type), Z_Construct_UEnum_ABP_200508_ELanguageType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_ChangeLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_ChangeLanguage_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_ChangeLanguage_Statics::NewProp__type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_ChangeLanguage_Statics::NewProp__type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_ChangeLanguage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_ChangeLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "ChangeLanguage", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventChangeLanguage_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_ChangeLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_ChangeLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_ChangeLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_ChangeLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_ChangeLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_ChangeLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_ChangeUserIndexForKeyboardMouse_Statics
	{
		struct ELMenuUtilityFunction_eventChangeUserIndexForKeyboardMouse_Parms
		{
			UObject* _pWorldContextObject;
			int32 _newIndex;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__newIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_ChangeUserIndexForKeyboardMouse_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventChangeUserIndexForKeyboardMouse_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_ChangeUserIndexForKeyboardMouse_Statics::NewProp__newIndex = { "_newIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventChangeUserIndexForKeyboardMouse_Parms, _newIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_ChangeUserIndexForKeyboardMouse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_ChangeUserIndexForKeyboardMouse_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_ChangeUserIndexForKeyboardMouse_Statics::NewProp__newIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_ChangeUserIndexForKeyboardMouse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_ChangeUserIndexForKeyboardMouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "ChangeUserIndexForKeyboardMouse", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventChangeUserIndexForKeyboardMouse_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_ChangeUserIndexForKeyboardMouse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_ChangeUserIndexForKeyboardMouse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_ChangeUserIndexForKeyboardMouse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_ChangeUserIndexForKeyboardMouse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_ChangeUserIndexForKeyboardMouse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_ChangeUserIndexForKeyboardMouse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyHeightUnitToFoot_Statics
	{
		struct ELMenuUtilityFunction_eventConvertBodyHeightUnitToFoot_Parms
		{
			float _inBodyHeight;
			int32 _outFoot;
			int32 _outInch;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inBodyHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__inBodyHeight;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__outFoot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__outInch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyHeightUnitToFoot_Statics::NewProp__inBodyHeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyHeightUnitToFoot_Statics::NewProp__inBodyHeight = { "_inBodyHeight", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventConvertBodyHeightUnitToFoot_Parms, _inBodyHeight), METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyHeightUnitToFoot_Statics::NewProp__inBodyHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyHeightUnitToFoot_Statics::NewProp__inBodyHeight_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyHeightUnitToFoot_Statics::NewProp__outFoot = { "_outFoot", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventConvertBodyHeightUnitToFoot_Parms, _outFoot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyHeightUnitToFoot_Statics::NewProp__outInch = { "_outInch", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventConvertBodyHeightUnitToFoot_Parms, _outInch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyHeightUnitToFoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyHeightUnitToFoot_Statics::NewProp__inBodyHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyHeightUnitToFoot_Statics::NewProp__outFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyHeightUnitToFoot_Statics::NewProp__outInch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyHeightUnitToFoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyHeightUnitToFoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "ConvertBodyHeightUnitToFoot", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventConvertBodyHeightUnitToFoot_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyHeightUnitToFoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyHeightUnitToFoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyHeightUnitToFoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyHeightUnitToFoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyHeightUnitToFoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyHeightUnitToFoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyWeightUnitToLb_Statics
	{
		struct ELMenuUtilityFunction_eventConvertBodyWeightUnitToLb_Parms
		{
			float _inBodyWeight;
			int32 _outLbs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inBodyWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__inBodyWeight;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__outLbs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyWeightUnitToLb_Statics::NewProp__inBodyWeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyWeightUnitToLb_Statics::NewProp__inBodyWeight = { "_inBodyWeight", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventConvertBodyWeightUnitToLb_Parms, _inBodyWeight), METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyWeightUnitToLb_Statics::NewProp__inBodyWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyWeightUnitToLb_Statics::NewProp__inBodyWeight_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyWeightUnitToLb_Statics::NewProp__outLbs = { "_outLbs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventConvertBodyWeightUnitToLb_Parms, _outLbs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyWeightUnitToLb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyWeightUnitToLb_Statics::NewProp__inBodyWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyWeightUnitToLb_Statics::NewProp__outLbs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyWeightUnitToLb_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyWeightUnitToLb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "ConvertBodyWeightUnitToLb", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventConvertBodyWeightUnitToLb_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyWeightUnitToLb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyWeightUnitToLb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyWeightUnitToLb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyWeightUnitToLb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyWeightUnitToLb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyWeightUnitToLb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguage_Statics
	{
		struct ELMenuUtilityFunction_eventGetCurrentLanguage_Parms
		{
			UObject* _pWorldContextObject;
			ELanguageType _Result;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguage_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventGetCurrentLanguage_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguage_Statics::NewProp__Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguage_Statics::NewProp__Result = { "_Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventGetCurrentLanguage_Parms, _Result), Z_Construct_UEnum_ABP_200508_ELanguageType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguage_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguage_Statics::NewProp__Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguage_Statics::NewProp__Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "GetCurrentLanguage", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventGetCurrentLanguage_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguageFont_Statics
	{
		struct ELMenuUtilityFunction_eventGetCurrentLanguageFont_Parms
		{
			UObject* _pWorldContextObject;
			const UObject* BaseFont;
			UFont* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseFont;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguageFont_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventGetCurrentLanguageFont_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguageFont_Statics::NewProp_BaseFont_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguageFont_Statics::NewProp_BaseFont = { "BaseFont", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventGetCurrentLanguageFont_Parms, BaseFont), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguageFont_Statics::NewProp_BaseFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguageFont_Statics::NewProp_BaseFont_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguageFont_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventGetCurrentLanguageFont_Parms, ReturnValue), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguageFont_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguageFont_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguageFont_Statics::NewProp_BaseFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguageFont_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguageFont_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguageFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "GetCurrentLanguageFont", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventGetCurrentLanguageFont_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguageFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguageFont_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguageFont_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguageFont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguageFont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguageFont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuEditWrestlerProfile_Statics
	{
		struct ELMenuUtilityFunction_eventGetMenuEditWrestlerProfile_Parms
		{
			FELWrestlerProfile _outProfile;
			const UMyWrestlerDataObject* _targetWrestlerData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetWrestlerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__targetWrestlerData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuEditWrestlerProfile_Statics::NewProp__outProfile = { "_outProfile", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventGetMenuEditWrestlerProfile_Parms, _outProfile), Z_Construct_UScriptStruct_FELWrestlerProfile, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuEditWrestlerProfile_Statics::NewProp__targetWrestlerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuEditWrestlerProfile_Statics::NewProp__targetWrestlerData = { "_targetWrestlerData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventGetMenuEditWrestlerProfile_Parms, _targetWrestlerData), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuEditWrestlerProfile_Statics::NewProp__targetWrestlerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuEditWrestlerProfile_Statics::NewProp__targetWrestlerData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuEditWrestlerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuEditWrestlerProfile_Statics::NewProp__outProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuEditWrestlerProfile_Statics::NewProp__targetWrestlerData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuEditWrestlerProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuEditWrestlerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "GetMenuEditWrestlerProfile", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventGetMenuEditWrestlerProfile_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuEditWrestlerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuEditWrestlerProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuEditWrestlerProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuEditWrestlerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuEditWrestlerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuEditWrestlerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics
	{
		struct ELMenuUtilityFunction_eventGetMenuSelectWreslterList_Parms
		{
			UObject* _pWorldContextObject;
			ESelectWreslterSortType _sortType;
			TArray<FMenuSelectWreslterParam> _outResult;
			bool _isCheckUnlockStatus;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__sortType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__sortType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outResult_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outResult;
		static void NewProp__isCheckUnlockStatus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isCheckUnlockStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventGetMenuSelectWreslterList_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics::NewProp__sortType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics::NewProp__sortType = { "_sortType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventGetMenuSelectWreslterList_Parms, _sortType), Z_Construct_UEnum_ABP_200508_ESelectWreslterSortType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics::NewProp__outResult_Inner = { "_outResult", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMenuSelectWreslterParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics::NewProp__outResult = { "_outResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventGetMenuSelectWreslterList_Parms, _outResult), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics::NewProp__isCheckUnlockStatus_SetBit(void* Obj)
	{
		((ELMenuUtilityFunction_eventGetMenuSelectWreslterList_Parms*)Obj)->_isCheckUnlockStatus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics::NewProp__isCheckUnlockStatus = { "_isCheckUnlockStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMenuUtilityFunction_eventGetMenuSelectWreslterList_Parms), &Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics::NewProp__isCheckUnlockStatus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics::NewProp__sortType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics::NewProp__sortType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics::NewProp__outResult_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics::NewProp__outResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics::NewProp__isCheckUnlockStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "GetMenuSelectWreslterList", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventGetMenuSelectWreslterList_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID_Statics
	{
		struct ELMenuUtilityFunction_eventGetMenuSelectWreslterParamFromWrestlerID_Parms
		{
			UObject* _pWorldContextObject;
			EWrestlerID_N _targetWrestler;
			bool _findParam;
			FMenuSelectWreslterParam _outResult;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__targetWrestler_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__targetWrestler;
		static void NewProp__findParam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__findParam;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventGetMenuSelectWreslterParamFromWrestlerID_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID_Statics::NewProp__targetWrestler_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID_Statics::NewProp__targetWrestler = { "_targetWrestler", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventGetMenuSelectWreslterParamFromWrestlerID_Parms, _targetWrestler), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID_Statics::NewProp__findParam_SetBit(void* Obj)
	{
		((ELMenuUtilityFunction_eventGetMenuSelectWreslterParamFromWrestlerID_Parms*)Obj)->_findParam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID_Statics::NewProp__findParam = { "_findParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMenuUtilityFunction_eventGetMenuSelectWreslterParamFromWrestlerID_Parms), &Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID_Statics::NewProp__findParam_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID_Statics::NewProp__outResult = { "_outResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventGetMenuSelectWreslterParamFromWrestlerID_Parms, _outResult), Z_Construct_UScriptStruct_FMenuSelectWreslterParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID_Statics::NewProp__targetWrestler_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID_Statics::NewProp__targetWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID_Statics::NewProp__findParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID_Statics::NewProp__outResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "GetMenuSelectWreslterParamFromWrestlerID", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventGetMenuSelectWreslterParamFromWrestlerID_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex_Statics
	{
		struct ELMenuUtilityFunction_eventGetOnlineUserRankImageIndex_Parms
		{
			int32 _rankPoint;
			int32 _scoreRanking;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rankPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__rankPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__scoreRanking_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__scoreRanking;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex_Statics::NewProp__rankPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex_Statics::NewProp__rankPoint = { "_rankPoint", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventGetOnlineUserRankImageIndex_Parms, _rankPoint), METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex_Statics::NewProp__rankPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex_Statics::NewProp__rankPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex_Statics::NewProp__scoreRanking_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex_Statics::NewProp__scoreRanking = { "_scoreRanking", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventGetOnlineUserRankImageIndex_Parms, _scoreRanking), METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex_Statics::NewProp__scoreRanking_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex_Statics::NewProp__scoreRanking_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventGetOnlineUserRankImageIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex_Statics::NewProp__rankPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex_Statics::NewProp__scoreRanking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "GetOnlineUserRankImageIndex", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventGetOnlineUserRankImageIndex_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_GetUserIndexForKeyboard_Statics
	{
		struct ELMenuUtilityFunction_eventGetUserIndexForKeyboard_Parms
		{
			UObject* _pWorldContextObject;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetUserIndexForKeyboard_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventGetUserIndexForKeyboard_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_GetUserIndexForKeyboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventGetUserIndexForKeyboard_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_GetUserIndexForKeyboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetUserIndexForKeyboard_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_GetUserIndexForKeyboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_GetUserIndexForKeyboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_GetUserIndexForKeyboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "GetUserIndexForKeyboard", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventGetUserIndexForKeyboard_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_GetUserIndexForKeyboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_GetUserIndexForKeyboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_GetUserIndexForKeyboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_GetUserIndexForKeyboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_GetUserIndexForKeyboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_GetUserIndexForKeyboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort_Statics
	{
		struct ELMenuUtilityFunction_eventInteger_Sort_Parms
		{
			TArray<int32> _target;
			bool IsDesc;
			TArray<int32> _out;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__target_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__target;
		static void NewProp_IsDesc_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDesc;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__out_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort_Statics::NewProp__target_Inner = { "_target", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort_Statics::NewProp__target = { "_target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventInteger_Sort_Parms, _target), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort_Statics::NewProp_IsDesc_SetBit(void* Obj)
	{
		((ELMenuUtilityFunction_eventInteger_Sort_Parms*)Obj)->IsDesc = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort_Statics::NewProp_IsDesc = { "IsDesc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMenuUtilityFunction_eventInteger_Sort_Parms), &Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort_Statics::NewProp_IsDesc_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort_Statics::NewProp__out_Inner = { "_out", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort_Statics::NewProp__out = { "_out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventInteger_Sort_Parms, _out), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort_Statics::NewProp__target_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort_Statics::NewProp__target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort_Statics::NewProp_IsDesc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort_Statics::NewProp__out_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort_Statics::NewProp__out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "Integer_Sort", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventInteger_Sort_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_IsAllControllerEnableInput_Statics
	{
		struct ELMenuUtilityFunction_eventIsAllControllerEnableInput_Parms
		{
			UObject* _pWorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_IsAllControllerEnableInput_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventIsAllControllerEnableInput_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMenuUtilityFunction_IsAllControllerEnableInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMenuUtilityFunction_eventIsAllControllerEnableInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_IsAllControllerEnableInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMenuUtilityFunction_eventIsAllControllerEnableInput_Parms), &Z_Construct_UFunction_UELMenuUtilityFunction_IsAllControllerEnableInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_IsAllControllerEnableInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_IsAllControllerEnableInput_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_IsAllControllerEnableInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_IsAllControllerEnableInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_IsAllControllerEnableInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "IsAllControllerEnableInput", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventIsAllControllerEnableInput_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_IsAllControllerEnableInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_IsAllControllerEnableInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_IsAllControllerEnableInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_IsAllControllerEnableInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_IsAllControllerEnableInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_IsAllControllerEnableInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_IsUnlockedItemContent_Statics
	{
		struct ELMenuUtilityFunction_eventIsUnlockedItemContent_Parms
		{
			UObject* _pWorldContextObject;
			int32 _checkUnlockableItemID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__checkUnlockableItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__checkUnlockableItemID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_IsUnlockedItemContent_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventIsUnlockedItemContent_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_IsUnlockedItemContent_Statics::NewProp__checkUnlockableItemID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_IsUnlockedItemContent_Statics::NewProp__checkUnlockableItemID = { "_checkUnlockableItemID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventIsUnlockedItemContent_Parms, _checkUnlockableItemID), METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_IsUnlockedItemContent_Statics::NewProp__checkUnlockableItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_IsUnlockedItemContent_Statics::NewProp__checkUnlockableItemID_MetaData)) };
	void Z_Construct_UFunction_UELMenuUtilityFunction_IsUnlockedItemContent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMenuUtilityFunction_eventIsUnlockedItemContent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_IsUnlockedItemContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMenuUtilityFunction_eventIsUnlockedItemContent_Parms), &Z_Construct_UFunction_UELMenuUtilityFunction_IsUnlockedItemContent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_IsUnlockedItemContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_IsUnlockedItemContent_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_IsUnlockedItemContent_Statics::NewProp__checkUnlockableItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_IsUnlockedItemContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_IsUnlockedItemContent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_IsUnlockedItemContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "IsUnlockedItemContent", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventIsUnlockedItemContent_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_IsUnlockedItemContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_IsUnlockedItemContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_IsUnlockedItemContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_IsUnlockedItemContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_IsUnlockedItemContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_IsUnlockedItemContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_IsValidForceFailedDlcCheck_Statics
	{
		struct ELMenuUtilityFunction_eventIsValidForceFailedDlcCheck_Parms
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
	void Z_Construct_UFunction_UELMenuUtilityFunction_IsValidForceFailedDlcCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMenuUtilityFunction_eventIsValidForceFailedDlcCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_IsValidForceFailedDlcCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMenuUtilityFunction_eventIsValidForceFailedDlcCheck_Parms), &Z_Construct_UFunction_UELMenuUtilityFunction_IsValidForceFailedDlcCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_IsValidForceFailedDlcCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_IsValidForceFailedDlcCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_IsValidForceFailedDlcCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_IsValidForceFailedDlcCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "IsValidForceFailedDlcCheck", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventIsValidForceFailedDlcCheck_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_IsValidForceFailedDlcCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_IsValidForceFailedDlcCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_IsValidForceFailedDlcCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_IsValidForceFailedDlcCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_IsValidForceFailedDlcCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_IsValidForceFailedDlcCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_IsValidWrestlerSelectOnKeyboard_Statics
	{
		struct ELMenuUtilityFunction_eventIsValidWrestlerSelectOnKeyboard_Parms
		{
			UObject* _pWorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_IsValidWrestlerSelectOnKeyboard_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventIsValidWrestlerSelectOnKeyboard_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMenuUtilityFunction_IsValidWrestlerSelectOnKeyboard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMenuUtilityFunction_eventIsValidWrestlerSelectOnKeyboard_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_IsValidWrestlerSelectOnKeyboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMenuUtilityFunction_eventIsValidWrestlerSelectOnKeyboard_Parms), &Z_Construct_UFunction_UELMenuUtilityFunction_IsValidWrestlerSelectOnKeyboard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_IsValidWrestlerSelectOnKeyboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_IsValidWrestlerSelectOnKeyboard_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_IsValidWrestlerSelectOnKeyboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_IsValidWrestlerSelectOnKeyboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_IsValidWrestlerSelectOnKeyboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "IsValidWrestlerSelectOnKeyboard", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventIsValidWrestlerSelectOnKeyboard_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_IsValidWrestlerSelectOnKeyboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_IsValidWrestlerSelectOnKeyboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_IsValidWrestlerSelectOnKeyboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_IsValidWrestlerSelectOnKeyboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_IsValidWrestlerSelectOnKeyboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_IsValidWrestlerSelectOnKeyboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_PlatformTextCheck_Statics
	{
		struct ELMenuUtilityFunction_eventPlatformTextCheck_Parms
		{
			FText InText;
			FText OutText;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OutText;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_PlatformTextCheck_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_PlatformTextCheck_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventPlatformTextCheck_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_PlatformTextCheck_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_PlatformTextCheck_Statics::NewProp_InText_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_PlatformTextCheck_Statics::NewProp_OutText = { "OutText", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventPlatformTextCheck_Parms, OutText), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMenuUtilityFunction_PlatformTextCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMenuUtilityFunction_eventPlatformTextCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_PlatformTextCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMenuUtilityFunction_eventPlatformTextCheck_Parms), &Z_Construct_UFunction_UELMenuUtilityFunction_PlatformTextCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_PlatformTextCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_PlatformTextCheck_Statics::NewProp_InText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_PlatformTextCheck_Statics::NewProp_OutText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_PlatformTextCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_PlatformTextCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_PlatformTextCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "PlatformTextCheck", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventPlatformTextCheck_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_PlatformTextCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_PlatformTextCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_PlatformTextCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_PlatformTextCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_PlatformTextCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_PlatformTextCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_SetGameFPS_Statics
	{
		struct ELMenuUtilityFunction_eventSetGameFPS_Parms
		{
			UObject* _pWorldContextObject;
			int32 _fpsValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__fpsValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_SetGameFPS_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventSetGameFPS_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_SetGameFPS_Statics::NewProp__fpsValue = { "_fpsValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventSetGameFPS_Parms, _fpsValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_SetGameFPS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_SetGameFPS_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_SetGameFPS_Statics::NewProp__fpsValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_SetGameFPS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_SetGameFPS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "SetGameFPS", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventSetGameFPS_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_SetGameFPS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_SetGameFPS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_SetGameFPS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_SetGameFPS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_SetGameFPS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_SetGameFPS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_SetUserFocusToGameViewport_Statics
	{
		struct ELMenuUtilityFunction_eventSetUserFocusToGameViewport_Parms
		{
			UObject* _pWorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_SetUserFocusToGameViewport_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventSetUserFocusToGameViewport_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_SetUserFocusToGameViewport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_SetUserFocusToGameViewport_Statics::NewProp__pWorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_SetUserFocusToGameViewport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_SetUserFocusToGameViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "SetUserFocusToGameViewport", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventSetUserFocusToGameViewport_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_SetUserFocusToGameViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_SetUserFocusToGameViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_SetUserFocusToGameViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_SetUserFocusToGameViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_SetUserFocusToGameViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_SetUserFocusToGameViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreen_Statics
	{
		struct ELMenuUtilityFunction_eventStartTipsLoadingScreen_Parms
		{
			UObject* _pWorldContextObject;
			ETipsLoadingCategory _nextGameMode;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__nextGameMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__nextGameMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreen_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventStartTipsLoadingScreen_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreen_Statics::NewProp__nextGameMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreen_Statics::NewProp__nextGameMode = { "_nextGameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventStartTipsLoadingScreen_Parms, _nextGameMode), Z_Construct_UEnum_ELITE_Game_ETipsLoadingCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreen_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreen_Statics::NewProp__nextGameMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreen_Statics::NewProp__nextGameMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "StartTipsLoadingScreen", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventStartTipsLoadingScreen_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics
	{
		struct ELMenuUtilityFunction_eventStartTipsLoadingScreenWithOverrideNextLevel_Parms
		{
			UObject* _pWorldContextObject;
			ETipsLoadingCategory _nextGameMode;
			FName _nextLevel;
			FString _nextLevelOption;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__nextGameMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__nextGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nextLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__nextLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nextLevelOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__nextLevelOption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventStartTipsLoadingScreenWithOverrideNextLevel_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::NewProp__nextGameMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::NewProp__nextGameMode = { "_nextGameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventStartTipsLoadingScreenWithOverrideNextLevel_Parms, _nextGameMode), Z_Construct_UEnum_ELITE_Game_ETipsLoadingCategory, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::NewProp__nextLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::NewProp__nextLevel = { "_nextLevel", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventStartTipsLoadingScreenWithOverrideNextLevel_Parms, _nextLevel), METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::NewProp__nextLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::NewProp__nextLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::NewProp__nextLevelOption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::NewProp__nextLevelOption = { "_nextLevelOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuUtilityFunction_eventStartTipsLoadingScreenWithOverrideNextLevel_Parms, _nextLevelOption), METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::NewProp__nextLevelOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::NewProp__nextLevelOption_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::NewProp__nextGameMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::NewProp__nextGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::NewProp__nextLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::NewProp__nextLevelOption,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuUtilityFunction, nullptr, "StartTipsLoadingScreenWithOverrideNextLevel", nullptr, nullptr, sizeof(ELMenuUtilityFunction_eventStartTipsLoadingScreenWithOverrideNextLevel_Parms), Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELMenuUtilityFunction_NoRegister()
	{
		return UELMenuUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELMenuUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELMenuUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELMenuUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_CalcGridCursor, "CalcGridCursor" }, // 770864284
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_CalcListCursor, "CalcListCursor" }, // 3714804858
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_CalcTileViewScrollIndex, "CalcTileViewScrollIndex" }, // 954560787
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToAllController, "ChangeEnableInputToAllController" }, // 2790266865
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_ChangeEnableInputToHostControllerOnly, "ChangeEnableInputToHostControllerOnly" }, // 3633932498
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_ChangeLanguage, "ChangeLanguage" }, // 1867321062
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_ChangeUserIndexForKeyboardMouse, "ChangeUserIndexForKeyboardMouse" }, // 3217568419
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyHeightUnitToFoot, "ConvertBodyHeightUnitToFoot" }, // 2995383800
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_ConvertBodyWeightUnitToLb, "ConvertBodyWeightUnitToLb" }, // 233587140
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguage, "GetCurrentLanguage" }, // 1828287989
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_GetCurrentLanguageFont, "GetCurrentLanguageFont" }, // 2565100656
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuEditWrestlerProfile, "GetMenuEditWrestlerProfile" }, // 1842180789
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterList, "GetMenuSelectWreslterList" }, // 4064629633
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_GetMenuSelectWreslterParamFromWrestlerID, "GetMenuSelectWreslterParamFromWrestlerID" }, // 1151474909
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_GetOnlineUserRankImageIndex, "GetOnlineUserRankImageIndex" }, // 1326412676
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_GetUserIndexForKeyboard, "GetUserIndexForKeyboard" }, // 1801131219
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_Integer_Sort, "Integer_Sort" }, // 4021221383
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_IsAllControllerEnableInput, "IsAllControllerEnableInput" }, // 2026152718
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_IsUnlockedItemContent, "IsUnlockedItemContent" }, // 2554631237
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_IsValidForceFailedDlcCheck, "IsValidForceFailedDlcCheck" }, // 652309532
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_IsValidWrestlerSelectOnKeyboard, "IsValidWrestlerSelectOnKeyboard" }, // 3858125000
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_PlatformTextCheck, "PlatformTextCheck" }, // 1079863377
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_SetGameFPS, "SetGameFPS" }, // 3619492169
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_SetUserFocusToGameViewport, "SetUserFocusToGameViewport" }, // 3449786089
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreen, "StartTipsLoadingScreen" }, // 1226996671
		{ &Z_Construct_UFunction_UELMenuUtilityFunction_StartTipsLoadingScreenWithOverrideNextLevel, "StartTipsLoadingScreenWithOverrideNextLevel" }, // 101180618
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMenuUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMenuUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELMenuUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELMenuUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELMenuUtilityFunction_Statics::ClassParams = {
		&UELMenuUtilityFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELMenuUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELMenuUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELMenuUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELMenuUtilityFunction, 2842215733);
	template<> ABP_200508_API UClass* StaticClass<UELMenuUtilityFunction>()
	{
		return UELMenuUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELMenuUtilityFunction(Z_Construct_UClass_UELMenuUtilityFunction, &UELMenuUtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELMenuUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELMenuUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
