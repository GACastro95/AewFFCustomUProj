// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELShopGeneralWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELShopGeneralWidgetBase() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELShopGeneralWidgetBase_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELShopGeneralWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELMainMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FShopGeneralItemManageData();
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EShopGeneralListScrollDirectionType();
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FShopGeneralItemDisplayData();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FShopDisplayParam();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EShopDisplayCategory();
// End Cross Module References
	DEFINE_FUNCTION(UELShopGeneralWidgetBase::execChangeListViewType)
	{
		P_GET_UBOOL(Z_Param_IsTextType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeListViewType(Z_Param_IsTextType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopGeneralWidgetBase::execCheckValidNormalDisplayCursorIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckValidNormalDisplayCursorIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopGeneralWidgetBase::execGetCurrentItemManageData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FShopGeneralItemManageData*)Z_Param__Result=P_THIS->GetCurrentItemManageData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopGeneralWidgetBase::execGetCurrentListScrollDirectionType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EShopGeneralListScrollDirectionType*)Z_Param__Result=P_THIS->GetCurrentListScrollDirectionType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopGeneralWidgetBase::execGetDisplayDataFromIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FShopGeneralItemDisplayData*)Z_Param__Result=P_THIS->GetDisplayDataFromIndex(Z_Param__Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopGeneralWidgetBase::execGetDisplayItemNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDisplayItemNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopGeneralWidgetBase::execGetNormalDisplayCursorIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNormalDisplayCursorIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopGeneralWidgetBase::execInitializeParameter)
	{
		P_GET_TARRAY(FShopDisplayParam,Z_Param__targetShopDisplayParamList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeParameter(Z_Param__targetShopDisplayParamList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopGeneralWidgetBase::execIsItemSaleState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsItemSaleState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopGeneralWidgetBase::execIsMovedCursorLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMovedCursorLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopGeneralWidgetBase::execIsPurchasedItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPurchasedItem(Z_Param__Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopGeneralWidgetBase::execPurchasedPostProcess)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PurchasedPostProcess();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopGeneralWidgetBase::execSetCurrentListScrollDirectionType)
	{
		P_GET_ENUM(EShopGeneralListScrollDirectionType,Z_Param__type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentListScrollDirectionType(EShopGeneralListScrollDirectionType(Z_Param__type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopGeneralWidgetBase::execSetDisplayListNum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__num);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayListNum(Z_Param__num);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopGeneralWidgetBase::execSetNormalDisplayCursorIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNormalDisplayCursorIndex(Z_Param__Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopGeneralWidgetBase::execUpdateParameter)
	{
		P_GET_ENUM(EShopDisplayCategory,Z_Param__targetCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateParameter(EShopDisplayCategory(Z_Param__targetCategory));
		P_NATIVE_END;
	}
	static FName NAME_UELShopGeneralWidgetBase_OnCancelItem = FName(TEXT("OnCancelItem"));
	void UELShopGeneralWidgetBase::OnCancelItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELShopGeneralWidgetBase_OnCancelItem),NULL);
	}
	static FName NAME_UELShopGeneralWidgetBase_OnChangeCategory = FName(TEXT("OnChangeCategory"));
	void UELShopGeneralWidgetBase::OnChangeCategory(int32 _addIndex)
	{
		ELShopGeneralWidgetBase_eventOnChangeCategory_Parms Parms;
		Parms._addIndex=_addIndex;
		ProcessEvent(FindFunctionChecked(NAME_UELShopGeneralWidgetBase_OnChangeCategory),&Parms);
	}
	static FName NAME_UELShopGeneralWidgetBase_OnDecideItem = FName(TEXT("OnDecideItem"));
	void UELShopGeneralWidgetBase::OnDecideItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELShopGeneralWidgetBase_OnDecideItem),NULL);
	}
	static FName NAME_UELShopGeneralWidgetBase_OnMoveUpDownCursor = FName(TEXT("OnMoveUpDownCursor"));
	void UELShopGeneralWidgetBase::OnMoveUpDownCursor()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELShopGeneralWidgetBase_OnMoveUpDownCursor),NULL);
	}
	static FName NAME_UELShopGeneralWidgetBase_OnPressedBackTitle = FName(TEXT("OnPressedBackTitle"));
	void UELShopGeneralWidgetBase::OnPressedBackTitle()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELShopGeneralWidgetBase_OnPressedBackTitle),NULL);
	}
	static FName NAME_UELShopGeneralWidgetBase_OnPressedMoveTab = FName(TEXT("OnPressedMoveTab"));
	void UELShopGeneralWidgetBase::OnPressedMoveTab(bool _isLeft)
	{
		ELShopGeneralWidgetBase_eventOnPressedMoveTab_Parms Parms;
		Parms._isLeft=_isLeft ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELShopGeneralWidgetBase_OnPressedMoveTab),&Parms);
	}
	void UELShopGeneralWidgetBase::StaticRegisterNativesUELShopGeneralWidgetBase()
	{
		UClass* Class = UELShopGeneralWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeListViewType", &UELShopGeneralWidgetBase::execChangeListViewType },
			{ "CheckValidNormalDisplayCursorIndex", &UELShopGeneralWidgetBase::execCheckValidNormalDisplayCursorIndex },
			{ "GetCurrentItemManageData", &UELShopGeneralWidgetBase::execGetCurrentItemManageData },
			{ "GetCurrentListScrollDirectionType", &UELShopGeneralWidgetBase::execGetCurrentListScrollDirectionType },
			{ "GetDisplayDataFromIndex", &UELShopGeneralWidgetBase::execGetDisplayDataFromIndex },
			{ "GetDisplayItemNum", &UELShopGeneralWidgetBase::execGetDisplayItemNum },
			{ "GetNormalDisplayCursorIndex", &UELShopGeneralWidgetBase::execGetNormalDisplayCursorIndex },
			{ "InitializeParameter", &UELShopGeneralWidgetBase::execInitializeParameter },
			{ "IsItemSaleState", &UELShopGeneralWidgetBase::execIsItemSaleState },
			{ "IsMovedCursorLeft", &UELShopGeneralWidgetBase::execIsMovedCursorLeft },
			{ "IsPurchasedItem", &UELShopGeneralWidgetBase::execIsPurchasedItem },
			{ "PurchasedPostProcess", &UELShopGeneralWidgetBase::execPurchasedPostProcess },
			{ "SetCurrentListScrollDirectionType", &UELShopGeneralWidgetBase::execSetCurrentListScrollDirectionType },
			{ "SetDisplayListNum", &UELShopGeneralWidgetBase::execSetDisplayListNum },
			{ "SetNormalDisplayCursorIndex", &UELShopGeneralWidgetBase::execSetNormalDisplayCursorIndex },
			{ "UpdateParameter", &UELShopGeneralWidgetBase::execUpdateParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELShopGeneralWidgetBase_ChangeListViewType_Statics
	{
		struct ELShopGeneralWidgetBase_eventChangeListViewType_Parms
		{
			bool IsTextType;
		};
		static void NewProp_IsTextType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTextType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELShopGeneralWidgetBase_ChangeListViewType_Statics::NewProp_IsTextType_SetBit(void* Obj)
	{
		((ELShopGeneralWidgetBase_eventChangeListViewType_Parms*)Obj)->IsTextType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELShopGeneralWidgetBase_ChangeListViewType_Statics::NewProp_IsTextType = { "IsTextType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELShopGeneralWidgetBase_eventChangeListViewType_Parms), &Z_Construct_UFunction_UELShopGeneralWidgetBase_ChangeListViewType_Statics::NewProp_IsTextType_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopGeneralWidgetBase_ChangeListViewType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopGeneralWidgetBase_ChangeListViewType_Statics::NewProp_IsTextType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopGeneralWidgetBase_ChangeListViewType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopGeneralWidgetBase_ChangeListViewType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopGeneralWidgetBase, nullptr, "ChangeListViewType", nullptr, nullptr, sizeof(ELShopGeneralWidgetBase_eventChangeListViewType_Parms), Z_Construct_UFunction_UELShopGeneralWidgetBase_ChangeListViewType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_ChangeListViewType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopGeneralWidgetBase_ChangeListViewType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_ChangeListViewType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopGeneralWidgetBase_ChangeListViewType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopGeneralWidgetBase_ChangeListViewType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopGeneralWidgetBase_CheckValidNormalDisplayCursorIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopGeneralWidgetBase_CheckValidNormalDisplayCursorIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopGeneralWidgetBase_CheckValidNormalDisplayCursorIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopGeneralWidgetBase, nullptr, "CheckValidNormalDisplayCursorIndex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopGeneralWidgetBase_CheckValidNormalDisplayCursorIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_CheckValidNormalDisplayCursorIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopGeneralWidgetBase_CheckValidNormalDisplayCursorIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopGeneralWidgetBase_CheckValidNormalDisplayCursorIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentItemManageData_Statics
	{
		struct ELShopGeneralWidgetBase_eventGetCurrentItemManageData_Parms
		{
			FShopGeneralItemManageData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentItemManageData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopGeneralWidgetBase_eventGetCurrentItemManageData_Parms, ReturnValue), Z_Construct_UScriptStruct_FShopGeneralItemManageData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentItemManageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentItemManageData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentItemManageData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentItemManageData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopGeneralWidgetBase, nullptr, "GetCurrentItemManageData", nullptr, nullptr, sizeof(ELShopGeneralWidgetBase_eventGetCurrentItemManageData_Parms), Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentItemManageData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentItemManageData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentItemManageData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentItemManageData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentItemManageData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentItemManageData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentListScrollDirectionType_Statics
	{
		struct ELShopGeneralWidgetBase_eventGetCurrentListScrollDirectionType_Parms
		{
			EShopGeneralListScrollDirectionType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentListScrollDirectionType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentListScrollDirectionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopGeneralWidgetBase_eventGetCurrentListScrollDirectionType_Parms, ReturnValue), Z_Construct_UEnum_ELITE_EShopGeneralListScrollDirectionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentListScrollDirectionType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentListScrollDirectionType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentListScrollDirectionType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentListScrollDirectionType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentListScrollDirectionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopGeneralWidgetBase, nullptr, "GetCurrentListScrollDirectionType", nullptr, nullptr, sizeof(ELShopGeneralWidgetBase_eventGetCurrentListScrollDirectionType_Parms), Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentListScrollDirectionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentListScrollDirectionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentListScrollDirectionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentListScrollDirectionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentListScrollDirectionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentListScrollDirectionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayDataFromIndex_Statics
	{
		struct ELShopGeneralWidgetBase_eventGetDisplayDataFromIndex_Parms
		{
			int32 _Index;
			FShopGeneralItemDisplayData ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayDataFromIndex_Statics::NewProp__Index = { "_Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopGeneralWidgetBase_eventGetDisplayDataFromIndex_Parms, _Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayDataFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopGeneralWidgetBase_eventGetDisplayDataFromIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FShopGeneralItemDisplayData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayDataFromIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayDataFromIndex_Statics::NewProp__Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayDataFromIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayDataFromIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayDataFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopGeneralWidgetBase, nullptr, "GetDisplayDataFromIndex", nullptr, nullptr, sizeof(ELShopGeneralWidgetBase_eventGetDisplayDataFromIndex_Parms), Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayDataFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayDataFromIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayDataFromIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayDataFromIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayDataFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayDataFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayItemNum_Statics
	{
		struct ELShopGeneralWidgetBase_eventGetDisplayItemNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayItemNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopGeneralWidgetBase_eventGetDisplayItemNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayItemNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayItemNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayItemNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayItemNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopGeneralWidgetBase, nullptr, "GetDisplayItemNum", nullptr, nullptr, sizeof(ELShopGeneralWidgetBase_eventGetDisplayItemNum_Parms), Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayItemNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayItemNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayItemNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayItemNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayItemNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayItemNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopGeneralWidgetBase_GetNormalDisplayCursorIndex_Statics
	{
		struct ELShopGeneralWidgetBase_eventGetNormalDisplayCursorIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELShopGeneralWidgetBase_GetNormalDisplayCursorIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopGeneralWidgetBase_eventGetNormalDisplayCursorIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopGeneralWidgetBase_GetNormalDisplayCursorIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopGeneralWidgetBase_GetNormalDisplayCursorIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopGeneralWidgetBase_GetNormalDisplayCursorIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopGeneralWidgetBase_GetNormalDisplayCursorIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopGeneralWidgetBase, nullptr, "GetNormalDisplayCursorIndex", nullptr, nullptr, sizeof(ELShopGeneralWidgetBase_eventGetNormalDisplayCursorIndex_Parms), Z_Construct_UFunction_UELShopGeneralWidgetBase_GetNormalDisplayCursorIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_GetNormalDisplayCursorIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopGeneralWidgetBase_GetNormalDisplayCursorIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_GetNormalDisplayCursorIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopGeneralWidgetBase_GetNormalDisplayCursorIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopGeneralWidgetBase_GetNormalDisplayCursorIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopGeneralWidgetBase_InitializeParameter_Statics
	{
		struct ELShopGeneralWidgetBase_eventInitializeParameter_Parms
		{
			TArray<FShopDisplayParam> _targetShopDisplayParamList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__targetShopDisplayParamList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__targetShopDisplayParamList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELShopGeneralWidgetBase_InitializeParameter_Statics::NewProp__targetShopDisplayParamList_Inner = { "_targetShopDisplayParamList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FShopDisplayParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELShopGeneralWidgetBase_InitializeParameter_Statics::NewProp__targetShopDisplayParamList = { "_targetShopDisplayParamList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopGeneralWidgetBase_eventInitializeParameter_Parms, _targetShopDisplayParamList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopGeneralWidgetBase_InitializeParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopGeneralWidgetBase_InitializeParameter_Statics::NewProp__targetShopDisplayParamList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopGeneralWidgetBase_InitializeParameter_Statics::NewProp__targetShopDisplayParamList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopGeneralWidgetBase_InitializeParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopGeneralWidgetBase_InitializeParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopGeneralWidgetBase, nullptr, "InitializeParameter", nullptr, nullptr, sizeof(ELShopGeneralWidgetBase_eventInitializeParameter_Parms), Z_Construct_UFunction_UELShopGeneralWidgetBase_InitializeParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_InitializeParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopGeneralWidgetBase_InitializeParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_InitializeParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopGeneralWidgetBase_InitializeParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopGeneralWidgetBase_InitializeParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopGeneralWidgetBase_IsItemSaleState_Statics
	{
		struct ELShopGeneralWidgetBase_eventIsItemSaleState_Parms
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
	void Z_Construct_UFunction_UELShopGeneralWidgetBase_IsItemSaleState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELShopGeneralWidgetBase_eventIsItemSaleState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELShopGeneralWidgetBase_IsItemSaleState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELShopGeneralWidgetBase_eventIsItemSaleState_Parms), &Z_Construct_UFunction_UELShopGeneralWidgetBase_IsItemSaleState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopGeneralWidgetBase_IsItemSaleState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopGeneralWidgetBase_IsItemSaleState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopGeneralWidgetBase_IsItemSaleState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopGeneralWidgetBase_IsItemSaleState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopGeneralWidgetBase, nullptr, "IsItemSaleState", nullptr, nullptr, sizeof(ELShopGeneralWidgetBase_eventIsItemSaleState_Parms), Z_Construct_UFunction_UELShopGeneralWidgetBase_IsItemSaleState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_IsItemSaleState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopGeneralWidgetBase_IsItemSaleState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_IsItemSaleState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopGeneralWidgetBase_IsItemSaleState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopGeneralWidgetBase_IsItemSaleState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopGeneralWidgetBase_IsMovedCursorLeft_Statics
	{
		struct ELShopGeneralWidgetBase_eventIsMovedCursorLeft_Parms
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
	void Z_Construct_UFunction_UELShopGeneralWidgetBase_IsMovedCursorLeft_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELShopGeneralWidgetBase_eventIsMovedCursorLeft_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELShopGeneralWidgetBase_IsMovedCursorLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELShopGeneralWidgetBase_eventIsMovedCursorLeft_Parms), &Z_Construct_UFunction_UELShopGeneralWidgetBase_IsMovedCursorLeft_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopGeneralWidgetBase_IsMovedCursorLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopGeneralWidgetBase_IsMovedCursorLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopGeneralWidgetBase_IsMovedCursorLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopGeneralWidgetBase_IsMovedCursorLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopGeneralWidgetBase, nullptr, "IsMovedCursorLeft", nullptr, nullptr, sizeof(ELShopGeneralWidgetBase_eventIsMovedCursorLeft_Parms), Z_Construct_UFunction_UELShopGeneralWidgetBase_IsMovedCursorLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_IsMovedCursorLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopGeneralWidgetBase_IsMovedCursorLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_IsMovedCursorLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopGeneralWidgetBase_IsMovedCursorLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopGeneralWidgetBase_IsMovedCursorLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopGeneralWidgetBase_IsPurchasedItem_Statics
	{
		struct ELShopGeneralWidgetBase_eventIsPurchasedItem_Parms
		{
			int32 _Index;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELShopGeneralWidgetBase_IsPurchasedItem_Statics::NewProp__Index = { "_Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopGeneralWidgetBase_eventIsPurchasedItem_Parms, _Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELShopGeneralWidgetBase_IsPurchasedItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELShopGeneralWidgetBase_eventIsPurchasedItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELShopGeneralWidgetBase_IsPurchasedItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELShopGeneralWidgetBase_eventIsPurchasedItem_Parms), &Z_Construct_UFunction_UELShopGeneralWidgetBase_IsPurchasedItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopGeneralWidgetBase_IsPurchasedItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopGeneralWidgetBase_IsPurchasedItem_Statics::NewProp__Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopGeneralWidgetBase_IsPurchasedItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopGeneralWidgetBase_IsPurchasedItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopGeneralWidgetBase_IsPurchasedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopGeneralWidgetBase, nullptr, "IsPurchasedItem", nullptr, nullptr, sizeof(ELShopGeneralWidgetBase_eventIsPurchasedItem_Parms), Z_Construct_UFunction_UELShopGeneralWidgetBase_IsPurchasedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_IsPurchasedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopGeneralWidgetBase_IsPurchasedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_IsPurchasedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopGeneralWidgetBase_IsPurchasedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopGeneralWidgetBase_IsPurchasedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopGeneralWidgetBase_OnCancelItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopGeneralWidgetBase_OnCancelItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopGeneralWidgetBase_OnCancelItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopGeneralWidgetBase, nullptr, "OnCancelItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopGeneralWidgetBase_OnCancelItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_OnCancelItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopGeneralWidgetBase_OnCancelItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopGeneralWidgetBase_OnCancelItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopGeneralWidgetBase_OnChangeCategory_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__addIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELShopGeneralWidgetBase_OnChangeCategory_Statics::NewProp__addIndex = { "_addIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopGeneralWidgetBase_eventOnChangeCategory_Parms, _addIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopGeneralWidgetBase_OnChangeCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopGeneralWidgetBase_OnChangeCategory_Statics::NewProp__addIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopGeneralWidgetBase_OnChangeCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopGeneralWidgetBase_OnChangeCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopGeneralWidgetBase, nullptr, "OnChangeCategory", nullptr, nullptr, sizeof(ELShopGeneralWidgetBase_eventOnChangeCategory_Parms), Z_Construct_UFunction_UELShopGeneralWidgetBase_OnChangeCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_OnChangeCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopGeneralWidgetBase_OnChangeCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_OnChangeCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopGeneralWidgetBase_OnChangeCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopGeneralWidgetBase_OnChangeCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopGeneralWidgetBase_OnDecideItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopGeneralWidgetBase_OnDecideItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopGeneralWidgetBase_OnDecideItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopGeneralWidgetBase, nullptr, "OnDecideItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopGeneralWidgetBase_OnDecideItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_OnDecideItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopGeneralWidgetBase_OnDecideItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopGeneralWidgetBase_OnDecideItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopGeneralWidgetBase_OnMoveUpDownCursor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopGeneralWidgetBase_OnMoveUpDownCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopGeneralWidgetBase_OnMoveUpDownCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopGeneralWidgetBase, nullptr, "OnMoveUpDownCursor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopGeneralWidgetBase_OnMoveUpDownCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_OnMoveUpDownCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopGeneralWidgetBase_OnMoveUpDownCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopGeneralWidgetBase_OnMoveUpDownCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedBackTitle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedBackTitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedBackTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopGeneralWidgetBase, nullptr, "OnPressedBackTitle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedBackTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedBackTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedBackTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedBackTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedMoveTab_Statics
	{
		static void NewProp__isLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedMoveTab_Statics::NewProp__isLeft_SetBit(void* Obj)
	{
		((ELShopGeneralWidgetBase_eventOnPressedMoveTab_Parms*)Obj)->_isLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedMoveTab_Statics::NewProp__isLeft = { "_isLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELShopGeneralWidgetBase_eventOnPressedMoveTab_Parms), &Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedMoveTab_Statics::NewProp__isLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedMoveTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedMoveTab_Statics::NewProp__isLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedMoveTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedMoveTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopGeneralWidgetBase, nullptr, "OnPressedMoveTab", nullptr, nullptr, sizeof(ELShopGeneralWidgetBase_eventOnPressedMoveTab_Parms), Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedMoveTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedMoveTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedMoveTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedMoveTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedMoveTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedMoveTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopGeneralWidgetBase_PurchasedPostProcess_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopGeneralWidgetBase_PurchasedPostProcess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopGeneralWidgetBase_PurchasedPostProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopGeneralWidgetBase, nullptr, "PurchasedPostProcess", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopGeneralWidgetBase_PurchasedPostProcess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_PurchasedPostProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopGeneralWidgetBase_PurchasedPostProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopGeneralWidgetBase_PurchasedPostProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopGeneralWidgetBase_SetCurrentListScrollDirectionType_Statics
	{
		struct ELShopGeneralWidgetBase_eventSetCurrentListScrollDirectionType_Parms
		{
			EShopGeneralListScrollDirectionType _type;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELShopGeneralWidgetBase_SetCurrentListScrollDirectionType_Statics::NewProp__type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELShopGeneralWidgetBase_SetCurrentListScrollDirectionType_Statics::NewProp__type = { "_type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopGeneralWidgetBase_eventSetCurrentListScrollDirectionType_Parms, _type), Z_Construct_UEnum_ELITE_EShopGeneralListScrollDirectionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopGeneralWidgetBase_SetCurrentListScrollDirectionType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopGeneralWidgetBase_SetCurrentListScrollDirectionType_Statics::NewProp__type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopGeneralWidgetBase_SetCurrentListScrollDirectionType_Statics::NewProp__type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopGeneralWidgetBase_SetCurrentListScrollDirectionType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopGeneralWidgetBase_SetCurrentListScrollDirectionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopGeneralWidgetBase, nullptr, "SetCurrentListScrollDirectionType", nullptr, nullptr, sizeof(ELShopGeneralWidgetBase_eventSetCurrentListScrollDirectionType_Parms), Z_Construct_UFunction_UELShopGeneralWidgetBase_SetCurrentListScrollDirectionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_SetCurrentListScrollDirectionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopGeneralWidgetBase_SetCurrentListScrollDirectionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_SetCurrentListScrollDirectionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopGeneralWidgetBase_SetCurrentListScrollDirectionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopGeneralWidgetBase_SetCurrentListScrollDirectionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopGeneralWidgetBase_SetDisplayListNum_Statics
	{
		struct ELShopGeneralWidgetBase_eventSetDisplayListNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELShopGeneralWidgetBase_SetDisplayListNum_Statics::NewProp__num = { "_num", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopGeneralWidgetBase_eventSetDisplayListNum_Parms, _num), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopGeneralWidgetBase_SetDisplayListNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopGeneralWidgetBase_SetDisplayListNum_Statics::NewProp__num,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopGeneralWidgetBase_SetDisplayListNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopGeneralWidgetBase_SetDisplayListNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopGeneralWidgetBase, nullptr, "SetDisplayListNum", nullptr, nullptr, sizeof(ELShopGeneralWidgetBase_eventSetDisplayListNum_Parms), Z_Construct_UFunction_UELShopGeneralWidgetBase_SetDisplayListNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_SetDisplayListNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopGeneralWidgetBase_SetDisplayListNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_SetDisplayListNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopGeneralWidgetBase_SetDisplayListNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopGeneralWidgetBase_SetDisplayListNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopGeneralWidgetBase_SetNormalDisplayCursorIndex_Statics
	{
		struct ELShopGeneralWidgetBase_eventSetNormalDisplayCursorIndex_Parms
		{
			int32 _Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELShopGeneralWidgetBase_SetNormalDisplayCursorIndex_Statics::NewProp__Index = { "_Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopGeneralWidgetBase_eventSetNormalDisplayCursorIndex_Parms, _Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopGeneralWidgetBase_SetNormalDisplayCursorIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopGeneralWidgetBase_SetNormalDisplayCursorIndex_Statics::NewProp__Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopGeneralWidgetBase_SetNormalDisplayCursorIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopGeneralWidgetBase_SetNormalDisplayCursorIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopGeneralWidgetBase, nullptr, "SetNormalDisplayCursorIndex", nullptr, nullptr, sizeof(ELShopGeneralWidgetBase_eventSetNormalDisplayCursorIndex_Parms), Z_Construct_UFunction_UELShopGeneralWidgetBase_SetNormalDisplayCursorIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_SetNormalDisplayCursorIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopGeneralWidgetBase_SetNormalDisplayCursorIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_SetNormalDisplayCursorIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopGeneralWidgetBase_SetNormalDisplayCursorIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopGeneralWidgetBase_SetNormalDisplayCursorIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopGeneralWidgetBase_UpdateParameter_Statics
	{
		struct ELShopGeneralWidgetBase_eventUpdateParameter_Parms
		{
			EShopDisplayCategory _targetCategory;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__targetCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__targetCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELShopGeneralWidgetBase_UpdateParameter_Statics::NewProp__targetCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELShopGeneralWidgetBase_UpdateParameter_Statics::NewProp__targetCategory = { "_targetCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopGeneralWidgetBase_eventUpdateParameter_Parms, _targetCategory), Z_Construct_UEnum_ELITE_Game_EShopDisplayCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopGeneralWidgetBase_UpdateParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopGeneralWidgetBase_UpdateParameter_Statics::NewProp__targetCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopGeneralWidgetBase_UpdateParameter_Statics::NewProp__targetCategory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopGeneralWidgetBase_UpdateParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopGeneralWidgetBase_UpdateParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopGeneralWidgetBase, nullptr, "UpdateParameter", nullptr, nullptr, sizeof(ELShopGeneralWidgetBase_eventUpdateParameter_Parms), Z_Construct_UFunction_UELShopGeneralWidgetBase_UpdateParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_UpdateParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopGeneralWidgetBase_UpdateParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopGeneralWidgetBase_UpdateParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopGeneralWidgetBase_UpdateParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopGeneralWidgetBase_UpdateParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELShopGeneralWidgetBase_NoRegister()
	{
		return UELShopGeneralWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELShopGeneralWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_shopDisplayUnlockableItemMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_shopDisplayUnlockableItemMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_shopDisplayUnlockableItemMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_shopDisplayUnlockableItemMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_itemManageDataList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_itemManageDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_itemManageDataList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_itemDisplayDataMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_itemDisplayDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_itemDisplayDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_itemDisplayDataMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMainMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELShopGeneralWidgetBase_ChangeListViewType, "ChangeListViewType" }, // 3912907136
		{ &Z_Construct_UFunction_UELShopGeneralWidgetBase_CheckValidNormalDisplayCursorIndex, "CheckValidNormalDisplayCursorIndex" }, // 2603619826
		{ &Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentItemManageData, "GetCurrentItemManageData" }, // 2632121781
		{ &Z_Construct_UFunction_UELShopGeneralWidgetBase_GetCurrentListScrollDirectionType, "GetCurrentListScrollDirectionType" }, // 1402858572
		{ &Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayDataFromIndex, "GetDisplayDataFromIndex" }, // 512513296
		{ &Z_Construct_UFunction_UELShopGeneralWidgetBase_GetDisplayItemNum, "GetDisplayItemNum" }, // 1527841995
		{ &Z_Construct_UFunction_UELShopGeneralWidgetBase_GetNormalDisplayCursorIndex, "GetNormalDisplayCursorIndex" }, // 953051781
		{ &Z_Construct_UFunction_UELShopGeneralWidgetBase_InitializeParameter, "InitializeParameter" }, // 2648845322
		{ &Z_Construct_UFunction_UELShopGeneralWidgetBase_IsItemSaleState, "IsItemSaleState" }, // 4226579449
		{ &Z_Construct_UFunction_UELShopGeneralWidgetBase_IsMovedCursorLeft, "IsMovedCursorLeft" }, // 1577457862
		{ &Z_Construct_UFunction_UELShopGeneralWidgetBase_IsPurchasedItem, "IsPurchasedItem" }, // 105817538
		{ &Z_Construct_UFunction_UELShopGeneralWidgetBase_OnCancelItem, "OnCancelItem" }, // 1424604927
		{ &Z_Construct_UFunction_UELShopGeneralWidgetBase_OnChangeCategory, "OnChangeCategory" }, // 2653089891
		{ &Z_Construct_UFunction_UELShopGeneralWidgetBase_OnDecideItem, "OnDecideItem" }, // 42617044
		{ &Z_Construct_UFunction_UELShopGeneralWidgetBase_OnMoveUpDownCursor, "OnMoveUpDownCursor" }, // 2346311622
		{ &Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedBackTitle, "OnPressedBackTitle" }, // 1354516513
		{ &Z_Construct_UFunction_UELShopGeneralWidgetBase_OnPressedMoveTab, "OnPressedMoveTab" }, // 3459593328
		{ &Z_Construct_UFunction_UELShopGeneralWidgetBase_PurchasedPostProcess, "PurchasedPostProcess" }, // 4123175994
		{ &Z_Construct_UFunction_UELShopGeneralWidgetBase_SetCurrentListScrollDirectionType, "SetCurrentListScrollDirectionType" }, // 4047632215
		{ &Z_Construct_UFunction_UELShopGeneralWidgetBase_SetDisplayListNum, "SetDisplayListNum" }, // 2309161149
		{ &Z_Construct_UFunction_UELShopGeneralWidgetBase_SetNormalDisplayCursorIndex, "SetNormalDisplayCursorIndex" }, // 3452707535
		{ &Z_Construct_UFunction_UELShopGeneralWidgetBase_UpdateParameter, "UpdateParameter" }, // 2738047329
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELShopGeneralWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_shopDisplayUnlockableItemMap_ValueProp = { "m_shopDisplayUnlockableItemMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FShopDisplayParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_shopDisplayUnlockableItemMap_Key_KeyProp = { "m_shopDisplayUnlockableItemMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_shopDisplayUnlockableItemMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELShopGeneralWidgetBase" },
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_shopDisplayUnlockableItemMap = { "m_shopDisplayUnlockableItemMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELShopGeneralWidgetBase, m_shopDisplayUnlockableItemMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_shopDisplayUnlockableItemMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_shopDisplayUnlockableItemMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_itemManageDataList_Inner = { "m_itemManageDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FShopGeneralItemManageData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_itemManageDataList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELShopGeneralWidgetBase" },
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_itemManageDataList = { "m_itemManageDataList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELShopGeneralWidgetBase, m_itemManageDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_itemManageDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_itemManageDataList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_itemDisplayDataMap_ValueProp = { "m_itemDisplayDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FShopGeneralItemDisplayData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_itemDisplayDataMap_Key_KeyProp = { "m_itemDisplayDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_itemDisplayDataMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELShopGeneralWidgetBase" },
		{ "ModuleRelativePath", "Public/ELShopGeneralWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_itemDisplayDataMap = { "m_itemDisplayDataMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELShopGeneralWidgetBase, m_itemDisplayDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_itemDisplayDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_itemDisplayDataMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_shopDisplayUnlockableItemMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_shopDisplayUnlockableItemMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_shopDisplayUnlockableItemMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_itemManageDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_itemManageDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_itemDisplayDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_itemDisplayDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::NewProp_m_itemDisplayDataMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELShopGeneralWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::ClassParams = {
		&UELShopGeneralWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELShopGeneralWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELShopGeneralWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELShopGeneralWidgetBase, 1929099667);
	template<> ELITE_API UClass* StaticClass<UELShopGeneralWidgetBase>()
	{
		return UELShopGeneralWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELShopGeneralWidgetBase(Z_Construct_UClass_UELShopGeneralWidgetBase, &UELShopGeneralWidgetBase::StaticClass, TEXT("/Script/ELITE"), TEXT("UELShopGeneralWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELShopGeneralWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
