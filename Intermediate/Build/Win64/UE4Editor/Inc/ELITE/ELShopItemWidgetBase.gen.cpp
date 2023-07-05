// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELShopItemWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELShopItemWidgetBase() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELShopItemWidgetBase_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELShopItemWidgetBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FShopGeneralItemManageData();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EUnlockableItemCurrencyType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EUnlockableItemRarityType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELShopItemWidgetBase::execGetCurrencyType)
	{
		P_GET_STRUCT_REF(FShopGeneralItemManageData,Z_Param_Out__targetData);
		P_GET_ENUM_REF(EUnlockableItemCurrencyType,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrencyType(Z_Param_Out__targetData,(EUnlockableItemCurrencyType&)(Z_Param_Out_OutResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopItemWidgetBase::execGetName)
	{
		P_GET_STRUCT_REF(FShopGeneralItemManageData,Z_Param_Out__targetData);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetName(Z_Param_Out__targetData,Z_Param_Out_OutResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopItemWidgetBase::execGetPrice)
	{
		P_GET_STRUCT_REF(FShopGeneralItemManageData,Z_Param_Out__targetData);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPrice(Z_Param_Out__targetData,Z_Param_Out_OutResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopItemWidgetBase::execGetRarity)
	{
		P_GET_STRUCT_REF(FShopGeneralItemManageData,Z_Param_Out__targetData);
		P_GET_ENUM_REF(EUnlockableItemRarityType,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRarity(Z_Param_Out__targetData,(EUnlockableItemRarityType&)(Z_Param_Out_OutResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopItemWidgetBase::execGetThumnail)
	{
		P_GET_STRUCT_REF(FShopGeneralItemManageData,Z_Param_Out__targetData);
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetThumnail(Z_Param_Out__targetData,Z_Param_Out_OutResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShopItemWidgetBase::execGetUniqueID)
	{
		P_GET_STRUCT_REF(FShopGeneralItemManageData,Z_Param_Out__targetData);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUniqueID(Z_Param_Out__targetData,Z_Param_Out_OutResult);
		P_NATIVE_END;
	}
	void UELShopItemWidgetBase::StaticRegisterNativesUELShopItemWidgetBase()
	{
		UClass* Class = UELShopItemWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrencyType", &UELShopItemWidgetBase::execGetCurrencyType },
			{ "GetName", &UELShopItemWidgetBase::execGetName },
			{ "GetPrice", &UELShopItemWidgetBase::execGetPrice },
			{ "GetRarity", &UELShopItemWidgetBase::execGetRarity },
			{ "GetThumnail", &UELShopItemWidgetBase::execGetThumnail },
			{ "GetUniqueID", &UELShopItemWidgetBase::execGetUniqueID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELShopItemWidgetBase_GetCurrencyType_Statics
	{
		struct ELShopItemWidgetBase_eventGetCurrencyType_Parms
		{
			FShopGeneralItemManageData _targetData;
			EUnlockableItemCurrencyType OutResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__targetData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopItemWidgetBase_GetCurrencyType_Statics::NewProp__targetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELShopItemWidgetBase_GetCurrencyType_Statics::NewProp__targetData = { "_targetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopItemWidgetBase_eventGetCurrencyType_Parms, _targetData), Z_Construct_UScriptStruct_FShopGeneralItemManageData, METADATA_PARAMS(Z_Construct_UFunction_UELShopItemWidgetBase_GetCurrencyType_Statics::NewProp__targetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopItemWidgetBase_GetCurrencyType_Statics::NewProp__targetData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELShopItemWidgetBase_GetCurrencyType_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELShopItemWidgetBase_GetCurrencyType_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopItemWidgetBase_eventGetCurrencyType_Parms, OutResult), Z_Construct_UEnum_ELITE_Game_EUnlockableItemCurrencyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopItemWidgetBase_GetCurrencyType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopItemWidgetBase_GetCurrencyType_Statics::NewProp__targetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopItemWidgetBase_GetCurrencyType_Statics::NewProp_OutResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopItemWidgetBase_GetCurrencyType_Statics::NewProp_OutResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopItemWidgetBase_GetCurrencyType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopItemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopItemWidgetBase_GetCurrencyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopItemWidgetBase, nullptr, "GetCurrencyType", nullptr, nullptr, sizeof(ELShopItemWidgetBase_eventGetCurrencyType_Parms), Z_Construct_UFunction_UELShopItemWidgetBase_GetCurrencyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopItemWidgetBase_GetCurrencyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopItemWidgetBase_GetCurrencyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopItemWidgetBase_GetCurrencyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopItemWidgetBase_GetCurrencyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopItemWidgetBase_GetCurrencyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopItemWidgetBase_GetName_Statics
	{
		struct ELShopItemWidgetBase_eventGetName_Parms
		{
			FShopGeneralItemManageData _targetData;
			FText OutResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__targetData;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OutResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopItemWidgetBase_GetName_Statics::NewProp__targetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELShopItemWidgetBase_GetName_Statics::NewProp__targetData = { "_targetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopItemWidgetBase_eventGetName_Parms, _targetData), Z_Construct_UScriptStruct_FShopGeneralItemManageData, METADATA_PARAMS(Z_Construct_UFunction_UELShopItemWidgetBase_GetName_Statics::NewProp__targetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopItemWidgetBase_GetName_Statics::NewProp__targetData_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELShopItemWidgetBase_GetName_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopItemWidgetBase_eventGetName_Parms, OutResult), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopItemWidgetBase_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopItemWidgetBase_GetName_Statics::NewProp__targetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopItemWidgetBase_GetName_Statics::NewProp_OutResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopItemWidgetBase_GetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopItemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopItemWidgetBase_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopItemWidgetBase, nullptr, "GetName", nullptr, nullptr, sizeof(ELShopItemWidgetBase_eventGetName_Parms), Z_Construct_UFunction_UELShopItemWidgetBase_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopItemWidgetBase_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopItemWidgetBase_GetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopItemWidgetBase_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopItemWidgetBase_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopItemWidgetBase_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopItemWidgetBase_GetPrice_Statics
	{
		struct ELShopItemWidgetBase_eventGetPrice_Parms
		{
			FShopGeneralItemManageData _targetData;
			int32 OutResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__targetData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopItemWidgetBase_GetPrice_Statics::NewProp__targetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELShopItemWidgetBase_GetPrice_Statics::NewProp__targetData = { "_targetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopItemWidgetBase_eventGetPrice_Parms, _targetData), Z_Construct_UScriptStruct_FShopGeneralItemManageData, METADATA_PARAMS(Z_Construct_UFunction_UELShopItemWidgetBase_GetPrice_Statics::NewProp__targetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopItemWidgetBase_GetPrice_Statics::NewProp__targetData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELShopItemWidgetBase_GetPrice_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopItemWidgetBase_eventGetPrice_Parms, OutResult), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopItemWidgetBase_GetPrice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopItemWidgetBase_GetPrice_Statics::NewProp__targetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopItemWidgetBase_GetPrice_Statics::NewProp_OutResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopItemWidgetBase_GetPrice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopItemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopItemWidgetBase_GetPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopItemWidgetBase, nullptr, "GetPrice", nullptr, nullptr, sizeof(ELShopItemWidgetBase_eventGetPrice_Parms), Z_Construct_UFunction_UELShopItemWidgetBase_GetPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopItemWidgetBase_GetPrice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopItemWidgetBase_GetPrice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopItemWidgetBase_GetPrice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopItemWidgetBase_GetPrice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopItemWidgetBase_GetPrice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopItemWidgetBase_GetRarity_Statics
	{
		struct ELShopItemWidgetBase_eventGetRarity_Parms
		{
			FShopGeneralItemManageData _targetData;
			EUnlockableItemRarityType OutResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__targetData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopItemWidgetBase_GetRarity_Statics::NewProp__targetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELShopItemWidgetBase_GetRarity_Statics::NewProp__targetData = { "_targetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopItemWidgetBase_eventGetRarity_Parms, _targetData), Z_Construct_UScriptStruct_FShopGeneralItemManageData, METADATA_PARAMS(Z_Construct_UFunction_UELShopItemWidgetBase_GetRarity_Statics::NewProp__targetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopItemWidgetBase_GetRarity_Statics::NewProp__targetData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELShopItemWidgetBase_GetRarity_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELShopItemWidgetBase_GetRarity_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopItemWidgetBase_eventGetRarity_Parms, OutResult), Z_Construct_UEnum_ELITE_Game_EUnlockableItemRarityType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopItemWidgetBase_GetRarity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopItemWidgetBase_GetRarity_Statics::NewProp__targetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopItemWidgetBase_GetRarity_Statics::NewProp_OutResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopItemWidgetBase_GetRarity_Statics::NewProp_OutResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopItemWidgetBase_GetRarity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopItemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopItemWidgetBase_GetRarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopItemWidgetBase, nullptr, "GetRarity", nullptr, nullptr, sizeof(ELShopItemWidgetBase_eventGetRarity_Parms), Z_Construct_UFunction_UELShopItemWidgetBase_GetRarity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopItemWidgetBase_GetRarity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopItemWidgetBase_GetRarity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopItemWidgetBase_GetRarity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopItemWidgetBase_GetRarity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopItemWidgetBase_GetRarity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopItemWidgetBase_GetThumnail_Statics
	{
		struct ELShopItemWidgetBase_eventGetThumnail_Parms
		{
			FShopGeneralItemManageData _targetData;
			TSoftObjectPtr<UTexture2D> OutResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__targetData;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_OutResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopItemWidgetBase_GetThumnail_Statics::NewProp__targetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELShopItemWidgetBase_GetThumnail_Statics::NewProp__targetData = { "_targetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopItemWidgetBase_eventGetThumnail_Parms, _targetData), Z_Construct_UScriptStruct_FShopGeneralItemManageData, METADATA_PARAMS(Z_Construct_UFunction_UELShopItemWidgetBase_GetThumnail_Statics::NewProp__targetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopItemWidgetBase_GetThumnail_Statics::NewProp__targetData_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UELShopItemWidgetBase_GetThumnail_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopItemWidgetBase_eventGetThumnail_Parms, OutResult), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopItemWidgetBase_GetThumnail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopItemWidgetBase_GetThumnail_Statics::NewProp__targetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopItemWidgetBase_GetThumnail_Statics::NewProp_OutResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopItemWidgetBase_GetThumnail_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopItemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopItemWidgetBase_GetThumnail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopItemWidgetBase, nullptr, "GetThumnail", nullptr, nullptr, sizeof(ELShopItemWidgetBase_eventGetThumnail_Parms), Z_Construct_UFunction_UELShopItemWidgetBase_GetThumnail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopItemWidgetBase_GetThumnail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopItemWidgetBase_GetThumnail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopItemWidgetBase_GetThumnail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopItemWidgetBase_GetThumnail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopItemWidgetBase_GetThumnail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShopItemWidgetBase_GetUniqueID_Statics
	{
		struct ELShopItemWidgetBase_eventGetUniqueID_Parms
		{
			FShopGeneralItemManageData _targetData;
			int32 OutResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__targetData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopItemWidgetBase_GetUniqueID_Statics::NewProp__targetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELShopItemWidgetBase_GetUniqueID_Statics::NewProp__targetData = { "_targetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopItemWidgetBase_eventGetUniqueID_Parms, _targetData), Z_Construct_UScriptStruct_FShopGeneralItemManageData, METADATA_PARAMS(Z_Construct_UFunction_UELShopItemWidgetBase_GetUniqueID_Statics::NewProp__targetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopItemWidgetBase_GetUniqueID_Statics::NewProp__targetData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELShopItemWidgetBase_GetUniqueID_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShopItemWidgetBase_eventGetUniqueID_Parms, OutResult), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShopItemWidgetBase_GetUniqueID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopItemWidgetBase_GetUniqueID_Statics::NewProp__targetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShopItemWidgetBase_GetUniqueID_Statics::NewProp_OutResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShopItemWidgetBase_GetUniqueID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShopItemWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShopItemWidgetBase_GetUniqueID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShopItemWidgetBase, nullptr, "GetUniqueID", nullptr, nullptr, sizeof(ELShopItemWidgetBase_eventGetUniqueID_Parms), Z_Construct_UFunction_UELShopItemWidgetBase_GetUniqueID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopItemWidgetBase_GetUniqueID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShopItemWidgetBase_GetUniqueID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShopItemWidgetBase_GetUniqueID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShopItemWidgetBase_GetUniqueID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShopItemWidgetBase_GetUniqueID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELShopItemWidgetBase_NoRegister()
	{
		return UELShopItemWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELShopItemWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELShopItemWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELShopItemWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELShopItemWidgetBase_GetCurrencyType, "GetCurrencyType" }, // 2301419175
		{ &Z_Construct_UFunction_UELShopItemWidgetBase_GetName, "GetName" }, // 3848175894
		{ &Z_Construct_UFunction_UELShopItemWidgetBase_GetPrice, "GetPrice" }, // 3643977906
		{ &Z_Construct_UFunction_UELShopItemWidgetBase_GetRarity, "GetRarity" }, // 3559687214
		{ &Z_Construct_UFunction_UELShopItemWidgetBase_GetThumnail, "GetThumnail" }, // 3694460560
		{ &Z_Construct_UFunction_UELShopItemWidgetBase_GetUniqueID, "GetUniqueID" }, // 3694717405
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELShopItemWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELShopItemWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELShopItemWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELShopItemWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELShopItemWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELShopItemWidgetBase_Statics::ClassParams = {
		&UELShopItemWidgetBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELShopItemWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELShopItemWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELShopItemWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELShopItemWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELShopItemWidgetBase, 78264294);
	template<> ELITE_API UClass* StaticClass<UELShopItemWidgetBase>()
	{
		return UELShopItemWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELShopItemWidgetBase(Z_Construct_UClass_UELShopItemWidgetBase, &UELShopItemWidgetBase::StaticClass, TEXT("/Script/ELITE"), TEXT("UELShopItemWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELShopItemWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
