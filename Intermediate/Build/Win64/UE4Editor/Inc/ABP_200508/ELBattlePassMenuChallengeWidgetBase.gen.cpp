// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELBattlePassMenuChallengeWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELBattlePassMenuChallengeWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELMainMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressDetailInfo();
// End Cross Module References
	DEFINE_FUNCTION(UELBattlePassMenuChallengeWidgetBase::execResetMoveCursorType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetMoveCursorType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassMenuChallengeWidgetBase::execSetDispListNum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__num);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDispListNum(Z_Param__num);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELBattlePassMenuChallengeWidgetBase::execSortChallengeProgressDetailInfoList)
	{
		P_GET_TARRAY(FChallengeProgressDetailInfo,Z_Param__In);
		P_GET_TARRAY_REF(FChallengeProgressDetailInfo,Z_Param_Out__out);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortChallengeProgressDetailInfoList(Z_Param__In,Z_Param_Out__out);
		P_NATIVE_END;
	}
	static FName NAME_UELBattlePassMenuChallengeWidgetBase_OnCancelMenu = FName(TEXT("OnCancelMenu"));
	void UELBattlePassMenuChallengeWidgetBase::OnCancelMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELBattlePassMenuChallengeWidgetBase_OnCancelMenu),NULL);
	}
	static FName NAME_UELBattlePassMenuChallengeWidgetBase_OnChangeCategory = FName(TEXT("OnChangeCategory"));
	void UELBattlePassMenuChallengeWidgetBase::OnChangeCategory(bool _isLeft)
	{
		ELBattlePassMenuChallengeWidgetBase_eventOnChangeCategory_Parms Parms;
		Parms._isLeft=_isLeft ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELBattlePassMenuChallengeWidgetBase_OnChangeCategory),&Parms);
	}
	static FName NAME_UELBattlePassMenuChallengeWidgetBase_OnChangeMainMenuCategory = FName(TEXT("OnChangeMainMenuCategory"));
	void UELBattlePassMenuChallengeWidgetBase::OnChangeMainMenuCategory(int32 _addIndex)
	{
		ELBattlePassMenuChallengeWidgetBase_eventOnChangeMainMenuCategory_Parms Parms;
		Parms._addIndex=_addIndex;
		ProcessEvent(FindFunctionChecked(NAME_UELBattlePassMenuChallengeWidgetBase_OnChangeMainMenuCategory),&Parms);
	}
	static FName NAME_UELBattlePassMenuChallengeWidgetBase_OnPressedBackTitle = FName(TEXT("OnPressedBackTitle"));
	void UELBattlePassMenuChallengeWidgetBase::OnPressedBackTitle()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELBattlePassMenuChallengeWidgetBase_OnPressedBackTitle),NULL);
	}
	void UELBattlePassMenuChallengeWidgetBase::StaticRegisterNativesUELBattlePassMenuChallengeWidgetBase()
	{
		UClass* Class = UELBattlePassMenuChallengeWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetMoveCursorType", &UELBattlePassMenuChallengeWidgetBase::execResetMoveCursorType },
			{ "SetDispListNum", &UELBattlePassMenuChallengeWidgetBase::execSetDispListNum },
			{ "SortChallengeProgressDetailInfoList", &UELBattlePassMenuChallengeWidgetBase::execSortChallengeProgressDetailInfoList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnCancelMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnCancelMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassMenuChallengeWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnCancelMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase, nullptr, "OnCancelMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnCancelMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnCancelMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnCancelMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnCancelMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeCategory_Statics
	{
		static void NewProp__isLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeCategory_Statics::NewProp__isLeft_SetBit(void* Obj)
	{
		((ELBattlePassMenuChallengeWidgetBase_eventOnChangeCategory_Parms*)Obj)->_isLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeCategory_Statics::NewProp__isLeft = { "_isLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELBattlePassMenuChallengeWidgetBase_eventOnChangeCategory_Parms), &Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeCategory_Statics::NewProp__isLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeCategory_Statics::NewProp__isLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassMenuChallengeWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase, nullptr, "OnChangeCategory", nullptr, nullptr, sizeof(ELBattlePassMenuChallengeWidgetBase_eventOnChangeCategory_Parms), Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeMainMenuCategory_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__addIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeMainMenuCategory_Statics::NewProp__addIndex = { "_addIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassMenuChallengeWidgetBase_eventOnChangeMainMenuCategory_Parms, _addIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeMainMenuCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeMainMenuCategory_Statics::NewProp__addIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeMainMenuCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassMenuChallengeWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeMainMenuCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase, nullptr, "OnChangeMainMenuCategory", nullptr, nullptr, sizeof(ELBattlePassMenuChallengeWidgetBase_eventOnChangeMainMenuCategory_Parms), Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeMainMenuCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeMainMenuCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeMainMenuCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeMainMenuCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeMainMenuCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeMainMenuCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnPressedBackTitle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnPressedBackTitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassMenuChallengeWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnPressedBackTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase, nullptr, "OnPressedBackTitle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnPressedBackTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnPressedBackTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnPressedBackTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnPressedBackTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_ResetMoveCursorType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_ResetMoveCursorType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassMenuChallengeWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_ResetMoveCursorType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase, nullptr, "ResetMoveCursorType", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_ResetMoveCursorType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_ResetMoveCursorType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_ResetMoveCursorType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_ResetMoveCursorType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SetDispListNum_Statics
	{
		struct ELBattlePassMenuChallengeWidgetBase_eventSetDispListNum_Parms
		{
			int32 _num;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__num;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SetDispListNum_Statics::NewProp__num = { "_num", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassMenuChallengeWidgetBase_eventSetDispListNum_Parms, _num), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SetDispListNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SetDispListNum_Statics::NewProp__num,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SetDispListNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassMenuChallengeWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SetDispListNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase, nullptr, "SetDispListNum", nullptr, nullptr, sizeof(ELBattlePassMenuChallengeWidgetBase_eventSetDispListNum_Parms), Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SetDispListNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SetDispListNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SetDispListNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SetDispListNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SetDispListNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SetDispListNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SortChallengeProgressDetailInfoList_Statics
	{
		struct ELBattlePassMenuChallengeWidgetBase_eventSortChallengeProgressDetailInfoList_Parms
		{
			TArray<FChallengeProgressDetailInfo> _In;
			TArray<FChallengeProgressDetailInfo> _out;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__In_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__In;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__out_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SortChallengeProgressDetailInfoList_Statics::NewProp__In_Inner = { "_In", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChallengeProgressDetailInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SortChallengeProgressDetailInfoList_Statics::NewProp__In = { "_In", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassMenuChallengeWidgetBase_eventSortChallengeProgressDetailInfoList_Parms, _In), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SortChallengeProgressDetailInfoList_Statics::NewProp__out_Inner = { "_out", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChallengeProgressDetailInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SortChallengeProgressDetailInfoList_Statics::NewProp__out = { "_out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELBattlePassMenuChallengeWidgetBase_eventSortChallengeProgressDetailInfoList_Parms, _out), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SortChallengeProgressDetailInfoList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SortChallengeProgressDetailInfoList_Statics::NewProp__In_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SortChallengeProgressDetailInfoList_Statics::NewProp__In,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SortChallengeProgressDetailInfoList_Statics::NewProp__out_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SortChallengeProgressDetailInfoList_Statics::NewProp__out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SortChallengeProgressDetailInfoList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELBattlePassMenuChallengeWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SortChallengeProgressDetailInfoList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase, nullptr, "SortChallengeProgressDetailInfoList", nullptr, nullptr, sizeof(ELBattlePassMenuChallengeWidgetBase_eventSortChallengeProgressDetailInfoList_Parms), Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SortChallengeProgressDetailInfoList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SortChallengeProgressDetailInfoList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SortChallengeProgressDetailInfoList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SortChallengeProgressDetailInfoList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SortChallengeProgressDetailInfoList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SortChallengeProgressDetailInfoList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase_NoRegister()
	{
		return UELBattlePassMenuChallengeWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMainMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnCancelMenu, "OnCancelMenu" }, // 2777607413
		{ &Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeCategory, "OnChangeCategory" }, // 21882510
		{ &Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnChangeMainMenuCategory, "OnChangeMainMenuCategory" }, // 1212598869
		{ &Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_OnPressedBackTitle, "OnPressedBackTitle" }, // 1217369478
		{ &Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_ResetMoveCursorType, "ResetMoveCursorType" }, // 239996852
		{ &Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SetDispListNum, "SetDispListNum" }, // 655059532
		{ &Z_Construct_UFunction_UELBattlePassMenuChallengeWidgetBase_SortChallengeProgressDetailInfoList, "SortChallengeProgressDetailInfoList" }, // 3276414349
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELBattlePassMenuChallengeWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELBattlePassMenuChallengeWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELBattlePassMenuChallengeWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase_Statics::ClassParams = {
		&UELBattlePassMenuChallengeWidgetBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELBattlePassMenuChallengeWidgetBase, 247720282);
	template<> ABP_200508_API UClass* StaticClass<UELBattlePassMenuChallengeWidgetBase>()
	{
		return UELBattlePassMenuChallengeWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELBattlePassMenuChallengeWidgetBase(Z_Construct_UClass_UELBattlePassMenuChallengeWidgetBase, &UELBattlePassMenuChallengeWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELBattlePassMenuChallengeWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELBattlePassMenuChallengeWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
