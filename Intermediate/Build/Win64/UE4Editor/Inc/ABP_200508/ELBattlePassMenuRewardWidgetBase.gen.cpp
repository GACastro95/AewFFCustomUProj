// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELBattlePassMenuRewardWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELBattlePassMenuRewardWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELBattlePassMenuRewardWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELBattlePassMenuRewardWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FBattlePassRewardMenuParam();
// End Cross Module References
	DEFINE_FUNCTION(UELBattlePassMenuRewardWidgetBase::execGetCurrentBattlePassRewardItemList)
	{
		P_GET_STRUCT_REF(FBattlePassRewardMenuParam,Z_Param_Out__currentItem);
		P_GET_TARRAY_REF(FBattlePassRewardMenuParam,Z_Param_Out__leftItemList);
		P_GET_TARRAY_REF(FBattlePassRewardMenuParam,Z_Param_Out__rightItemList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrentBattlePassRewardItemList(Z_Param_Out__currentItem,Z_Param_Out__leftItemList,Z_Param_Out__rightItemList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassMenuRewardWidgetBase::execGetKeyRepeatCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetKeyRepeatCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassMenuRewardWidgetBase::execGetNextBattePassRewardItemList)
	{
		P_GET_UBOOL(Z_Param__isMoveLeft);
		P_GET_TARRAY_REF(FBattlePassRewardMenuParam,Z_Param_Out__centerItemList);
		P_GET_TARRAY_REF(FBattlePassRewardMenuParam,Z_Param_Out__leftItemList);
		P_GET_TARRAY_REF(FBattlePassRewardMenuParam,Z_Param_Out__rightItemList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNextBattePassRewardItemList(Z_Param__isMoveLeft,Z_Param_Out__centerItemList,Z_Param_Out__leftItemList,Z_Param_Out__rightItemList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassMenuRewardWidgetBase::execMoveCursorForMouse)
	{
		P_GET_UBOOL(Z_Param_IsLeft);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveCursorForMouse(Z_Param_IsLeft);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassMenuRewardWidgetBase::execSetupParameter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupParameter();
		P_NATIVE_END;
	}
	static FName NAME_UELBattlePassMenuRewardWidgetBase_OnCancelMenu = FName(TEXT("OnCancelMenu"));
	void UELBattlePassMenuRewardWidgetBase::OnCancelMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELBattlePassMenuRewardWidgetBase_OnCancelMenu),NULL);
	}
	static FName NAME_UELBattlePassMenuRewardWidgetBase_OnChangeItem = FName(TEXT("OnChangeItem"));
	void UELBattlePassMenuRewardWidgetBase::OnChangeItem(bool _isLeft)
	{
		ELBattlePassMenuRewardWidgetBase_eventOnChangeItem_Parms Parms;
		Parms._isLeft=_isLeft ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELBattlePassMenuRewardWidgetBase_OnChangeItem),&Parms);
	}
	void UELBattlePassMenuRewardWidgetBase::StaticRegisterNativesUELBattlePassMenuRewardWidgetBase()
	{
		UClass* Class = UELBattlePassMenuRewardWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentBattlePassRewardItemList", &UELBattlePassMenuRewardWidgetBase::execGetCurrentBattlePassRewardItemList },
			{ "GetKeyRepeatCount", &UELBattlePassMenuRewardWidgetBase::execGetKeyRepeatCount },
			{ "GetNextBattePassRewardItemList", &UELBattlePassMenuRewardWidgetBase::execGetNextBattePassRewardItemList },
			{ "MoveCursorForMouse", &UELBattlePassMenuRewardWidgetBase::execMoveCursorForMouse },
			{ "SetupParameter", &UELBattlePassMenuRewardWidgetBase::execSetupParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetCurrentBattlePassRewardItemList_Statics
	{
		struct ELBattlePassMenuRewardWidgetBase_eventGetCurrentBattlePassRewardItemList_Parms
		{
			FBattlePassRewardMenuParam _currentItem;
			TArray<FBattlePassRewardMenuParam> _leftItemList;
			TArray<FBattlePassRewardMenuParam> _rightItemList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__currentItem;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__leftItemList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__leftItemList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rightItemList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__rightItemList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetCurrentBattlePassRewardItemList_Statics::NewProp__currentItem = { "_currentItem", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassMenuRewardWidgetBase_eventGetCurrentBattlePassRewardItemList_Parms, _currentItem), Z_Construct_UScriptStruct_FBattlePassRewardMenuParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetCurrentBattlePassRewardItemList_Statics::NewProp__leftItemList_Inner = { "_leftItemList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBattlePassRewardMenuParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetCurrentBattlePassRewardItemList_Statics::NewProp__leftItemList = { "_leftItemList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassMenuRewardWidgetBase_eventGetCurrentBattlePassRewardItemList_Parms, _leftItemList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetCurrentBattlePassRewardItemList_Statics::NewProp__rightItemList_Inner = { "_rightItemList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBattlePassRewardMenuParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetCurrentBattlePassRewardItemList_Statics::NewProp__rightItemList = { "_rightItemList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassMenuRewardWidgetBase_eventGetCurrentBattlePassRewardItemList_Parms, _rightItemList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetCurrentBattlePassRewardItemList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetCurrentBattlePassRewardItemList_Statics::NewProp__currentItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetCurrentBattlePassRewardItemList_Statics::NewProp__leftItemList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetCurrentBattlePassRewardItemList_Statics::NewProp__leftItemList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetCurrentBattlePassRewardItemList_Statics::NewProp__rightItemList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetCurrentBattlePassRewardItemList_Statics::NewProp__rightItemList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetCurrentBattlePassRewardItemList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassMenuRewardWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetCurrentBattlePassRewardItemList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassMenuRewardWidgetBase, nullptr, "GetCurrentBattlePassRewardItemList", nullptr, nullptr, sizeof(ELBattlePassMenuRewardWidgetBase_eventGetCurrentBattlePassRewardItemList_Parms), Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetCurrentBattlePassRewardItemList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetCurrentBattlePassRewardItemList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetCurrentBattlePassRewardItemList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetCurrentBattlePassRewardItemList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetCurrentBattlePassRewardItemList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetCurrentBattlePassRewardItemList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetKeyRepeatCount_Statics
	{
		struct ELBattlePassMenuRewardWidgetBase_eventGetKeyRepeatCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetKeyRepeatCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassMenuRewardWidgetBase_eventGetKeyRepeatCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetKeyRepeatCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetKeyRepeatCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetKeyRepeatCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassMenuRewardWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetKeyRepeatCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassMenuRewardWidgetBase, nullptr, "GetKeyRepeatCount", nullptr, nullptr, sizeof(ELBattlePassMenuRewardWidgetBase_eventGetKeyRepeatCount_Parms), Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetKeyRepeatCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetKeyRepeatCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetKeyRepeatCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetKeyRepeatCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetKeyRepeatCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetKeyRepeatCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics
	{
		struct ELBattlePassMenuRewardWidgetBase_eventGetNextBattePassRewardItemList_Parms
		{
			bool _isMoveLeft;
			TArray<FBattlePassRewardMenuParam> _centerItemList;
			TArray<FBattlePassRewardMenuParam> _leftItemList;
			TArray<FBattlePassRewardMenuParam> _rightItemList;
		};
		static void NewProp__isMoveLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isMoveLeft;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__centerItemList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__centerItemList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__leftItemList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__leftItemList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rightItemList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__rightItemList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::NewProp__isMoveLeft_SetBit(void* Obj)
	{
		((ELBattlePassMenuRewardWidgetBase_eventGetNextBattePassRewardItemList_Parms*)Obj)->_isMoveLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::NewProp__isMoveLeft = { "_isMoveLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBattlePassMenuRewardWidgetBase_eventGetNextBattePassRewardItemList_Parms), &Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::NewProp__isMoveLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::NewProp__centerItemList_Inner = { "_centerItemList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBattlePassRewardMenuParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::NewProp__centerItemList = { "_centerItemList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassMenuRewardWidgetBase_eventGetNextBattePassRewardItemList_Parms, _centerItemList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::NewProp__leftItemList_Inner = { "_leftItemList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBattlePassRewardMenuParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::NewProp__leftItemList = { "_leftItemList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassMenuRewardWidgetBase_eventGetNextBattePassRewardItemList_Parms, _leftItemList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::NewProp__rightItemList_Inner = { "_rightItemList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBattlePassRewardMenuParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::NewProp__rightItemList = { "_rightItemList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassMenuRewardWidgetBase_eventGetNextBattePassRewardItemList_Parms, _rightItemList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::NewProp__isMoveLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::NewProp__centerItemList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::NewProp__centerItemList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::NewProp__leftItemList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::NewProp__leftItemList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::NewProp__rightItemList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::NewProp__rightItemList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassMenuRewardWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassMenuRewardWidgetBase, nullptr, "GetNextBattePassRewardItemList", nullptr, nullptr, sizeof(ELBattlePassMenuRewardWidgetBase_eventGetNextBattePassRewardItemList_Parms), Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_MoveCursorForMouse_Statics
	{
		struct ELBattlePassMenuRewardWidgetBase_eventMoveCursorForMouse_Parms
		{
			bool IsLeft;
		};
		static void NewProp_IsLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_MoveCursorForMouse_Statics::NewProp_IsLeft_SetBit(void* Obj)
	{
		((ELBattlePassMenuRewardWidgetBase_eventMoveCursorForMouse_Parms*)Obj)->IsLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_MoveCursorForMouse_Statics::NewProp_IsLeft = { "IsLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBattlePassMenuRewardWidgetBase_eventMoveCursorForMouse_Parms), &Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_MoveCursorForMouse_Statics::NewProp_IsLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_MoveCursorForMouse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_MoveCursorForMouse_Statics::NewProp_IsLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_MoveCursorForMouse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassMenuRewardWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_MoveCursorForMouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassMenuRewardWidgetBase, nullptr, "MoveCursorForMouse", nullptr, nullptr, sizeof(ELBattlePassMenuRewardWidgetBase_eventMoveCursorForMouse_Parms), Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_MoveCursorForMouse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_MoveCursorForMouse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_MoveCursorForMouse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_MoveCursorForMouse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_MoveCursorForMouse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_MoveCursorForMouse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnCancelMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnCancelMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassMenuRewardWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnCancelMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassMenuRewardWidgetBase, nullptr, "OnCancelMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnCancelMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnCancelMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnCancelMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnCancelMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnChangeItem_Statics
	{
		static void NewProp__isLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnChangeItem_Statics::NewProp__isLeft_SetBit(void* Obj)
	{
		((ELBattlePassMenuRewardWidgetBase_eventOnChangeItem_Parms*)Obj)->_isLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnChangeItem_Statics::NewProp__isLeft = { "_isLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBattlePassMenuRewardWidgetBase_eventOnChangeItem_Parms), &Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnChangeItem_Statics::NewProp__isLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnChangeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnChangeItem_Statics::NewProp__isLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnChangeItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassMenuRewardWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnChangeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassMenuRewardWidgetBase, nullptr, "OnChangeItem", nullptr, nullptr, sizeof(ELBattlePassMenuRewardWidgetBase_eventOnChangeItem_Parms), Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnChangeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnChangeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnChangeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnChangeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnChangeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnChangeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_SetupParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_SetupParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassMenuRewardWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_SetupParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassMenuRewardWidgetBase, nullptr, "SetupParameter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_SetupParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_SetupParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_SetupParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_SetupParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELBattlePassMenuRewardWidgetBase_NoRegister()
	{
		return UELBattlePassMenuRewardWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELBattlePassMenuRewardWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELBattlePassMenuRewardWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELBattlePassMenuRewardWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetCurrentBattlePassRewardItemList, "GetCurrentBattlePassRewardItemList" }, // 2174630011
		{ &Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetKeyRepeatCount, "GetKeyRepeatCount" }, // 1390905267
		{ &Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_GetNextBattePassRewardItemList, "GetNextBattePassRewardItemList" }, // 1571596911
		{ &Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_MoveCursorForMouse, "MoveCursorForMouse" }, // 1756421503
		{ &Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnCancelMenu, "OnCancelMenu" }, // 3141797621
		{ &Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_OnChangeItem, "OnChangeItem" }, // 784564205
		{ &Z_Construct_UFunction_UELBattlePassMenuRewardWidgetBase_SetupParameter, "SetupParameter" }, // 1456008129
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBattlePassMenuRewardWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELBattlePassMenuRewardWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELBattlePassMenuRewardWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELBattlePassMenuRewardWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELBattlePassMenuRewardWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELBattlePassMenuRewardWidgetBase_Statics::ClassParams = {
		&UELBattlePassMenuRewardWidgetBase::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELBattlePassMenuRewardWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELBattlePassMenuRewardWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELBattlePassMenuRewardWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELBattlePassMenuRewardWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELBattlePassMenuRewardWidgetBase, 3827502713);
	template<> ABP_200508_API UClass* StaticClass<UELBattlePassMenuRewardWidgetBase>()
	{
		return UELBattlePassMenuRewardWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELBattlePassMenuRewardWidgetBase(Z_Construct_UClass_UELBattlePassMenuRewardWidgetBase, &UELBattlePassMenuRewardWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELBattlePassMenuRewardWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELBattlePassMenuRewardWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
