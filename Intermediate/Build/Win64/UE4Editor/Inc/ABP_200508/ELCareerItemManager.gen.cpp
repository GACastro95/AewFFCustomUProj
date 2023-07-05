// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerItemManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerItemManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerItemManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerItemManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerGameParam_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerItemData();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerItemEffect();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerDisappearItemEffect();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerItemNo();
// End Cross Module References
	DEFINE_FUNCTION(AELCareerItemManager::execActiveItemEffect)
	{
		P_GET_OBJECT(UELCareerGameParam,Z_Param__pGameParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActiveItemEffect(Z_Param__pGameParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerItemManager::execAddCareerItemData)
	{
		P_GET_STRUCT(FCareerItemData,Z_Param__Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCareerItemData(Z_Param__Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerItemManager::execCanUseItem)
	{
		P_GET_ENUM(ECareerItemEffect,Z_Param__ItemEffect);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUseItem(ECareerItemEffect(Z_Param__ItemEffect));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerItemManager::execDeactiveItemEffect)
	{
		P_GET_OBJECT(UELCareerGameParam,Z_Param__pGameParam);
		P_GET_ENUM(ECareerDisappearItemEffect,Z_Param__DisappearItemEffect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactiveItemEffect(Z_Param__pGameParam,ECareerDisappearItemEffect(Z_Param__DisappearItemEffect));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerItemManager::execGetCareerItemData)
	{
		P_GET_ENUM(ECareerItemNo,Z_Param__ItemNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerItemData*)Z_Param__Result=P_THIS->GetCareerItemData(ECareerItemNo(Z_Param__ItemNo));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerItemManager::execGetCareerItemTableBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FCareerItemData>*)Z_Param__Result=P_THIS->GetCareerItemTableBase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerItemManager::execUseItems)
	{
		P_GET_OBJECT(UELCareerGameParam,Z_Param__pGameParam);
		P_GET_ENUM(ECareerItemNo,Z_Param__ItemNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UseItems(Z_Param__pGameParam,ECareerItemNo(Z_Param__ItemNo));
		P_NATIVE_END;
	}
	void AELCareerItemManager::StaticRegisterNativesAELCareerItemManager()
	{
		UClass* Class = AELCareerItemManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActiveItemEffect", &AELCareerItemManager::execActiveItemEffect },
			{ "AddCareerItemData", &AELCareerItemManager::execAddCareerItemData },
			{ "CanUseItem", &AELCareerItemManager::execCanUseItem },
			{ "DeactiveItemEffect", &AELCareerItemManager::execDeactiveItemEffect },
			{ "GetCareerItemData", &AELCareerItemManager::execGetCareerItemData },
			{ "GetCareerItemTableBase", &AELCareerItemManager::execGetCareerItemTableBase },
			{ "UseItems", &AELCareerItemManager::execUseItems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELCareerItemManager_ActiveItemEffect_Statics
	{
		struct ELCareerItemManager_eventActiveItemEffect_Parms
		{
			UELCareerGameParam* _pGameParam;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pGameParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerItemManager_ActiveItemEffect_Statics::NewProp__pGameParam = { "_pGameParam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerItemManager_eventActiveItemEffect_Parms, _pGameParam), Z_Construct_UClass_UELCareerGameParam_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerItemManager_ActiveItemEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerItemManager_ActiveItemEffect_Statics::NewProp__pGameParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerItemManager_ActiveItemEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerItemManager_ActiveItemEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerItemManager, nullptr, "ActiveItemEffect", nullptr, nullptr, sizeof(ELCareerItemManager_eventActiveItemEffect_Parms), Z_Construct_UFunction_AELCareerItemManager_ActiveItemEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerItemManager_ActiveItemEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerItemManager_ActiveItemEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerItemManager_ActiveItemEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerItemManager_ActiveItemEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerItemManager_ActiveItemEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerItemManager_AddCareerItemData_Statics
	{
		struct ELCareerItemManager_eventAddCareerItemData_Parms
		{
			FCareerItemData _Data;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerItemManager_AddCareerItemData_Statics::NewProp__Data = { "_Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerItemManager_eventAddCareerItemData_Parms, _Data), Z_Construct_UScriptStruct_FCareerItemData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerItemManager_AddCareerItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerItemManager_AddCareerItemData_Statics::NewProp__Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerItemManager_AddCareerItemData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerItemManager_AddCareerItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerItemManager, nullptr, "AddCareerItemData", nullptr, nullptr, sizeof(ELCareerItemManager_eventAddCareerItemData_Parms), Z_Construct_UFunction_AELCareerItemManager_AddCareerItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerItemManager_AddCareerItemData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerItemManager_AddCareerItemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerItemManager_AddCareerItemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerItemManager_AddCareerItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerItemManager_AddCareerItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerItemManager_CanUseItem_Statics
	{
		struct ELCareerItemManager_eventCanUseItem_Parms
		{
			ECareerItemEffect _ItemEffect;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__ItemEffect_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__ItemEffect;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerItemManager_CanUseItem_Statics::NewProp__ItemEffect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerItemManager_CanUseItem_Statics::NewProp__ItemEffect = { "_ItemEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerItemManager_eventCanUseItem_Parms, _ItemEffect), Z_Construct_UEnum_ABP_200508_ECareerItemEffect, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELCareerItemManager_CanUseItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerItemManager_eventCanUseItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELCareerItemManager_CanUseItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerItemManager_eventCanUseItem_Parms), &Z_Construct_UFunction_AELCareerItemManager_CanUseItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerItemManager_CanUseItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerItemManager_CanUseItem_Statics::NewProp__ItemEffect_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerItemManager_CanUseItem_Statics::NewProp__ItemEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerItemManager_CanUseItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerItemManager_CanUseItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerItemManager_CanUseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerItemManager, nullptr, "CanUseItem", nullptr, nullptr, sizeof(ELCareerItemManager_eventCanUseItem_Parms), Z_Construct_UFunction_AELCareerItemManager_CanUseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerItemManager_CanUseItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerItemManager_CanUseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerItemManager_CanUseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerItemManager_CanUseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerItemManager_CanUseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerItemManager_DeactiveItemEffect_Statics
	{
		struct ELCareerItemManager_eventDeactiveItemEffect_Parms
		{
			UELCareerGameParam* _pGameParam;
			ECareerDisappearItemEffect _DisappearItemEffect;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pGameParam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__DisappearItemEffect_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__DisappearItemEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerItemManager_DeactiveItemEffect_Statics::NewProp__pGameParam = { "_pGameParam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerItemManager_eventDeactiveItemEffect_Parms, _pGameParam), Z_Construct_UClass_UELCareerGameParam_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerItemManager_DeactiveItemEffect_Statics::NewProp__DisappearItemEffect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerItemManager_DeactiveItemEffect_Statics::NewProp__DisappearItemEffect = { "_DisappearItemEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerItemManager_eventDeactiveItemEffect_Parms, _DisappearItemEffect), Z_Construct_UEnum_ABP_200508_ECareerDisappearItemEffect, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerItemManager_DeactiveItemEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerItemManager_DeactiveItemEffect_Statics::NewProp__pGameParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerItemManager_DeactiveItemEffect_Statics::NewProp__DisappearItemEffect_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerItemManager_DeactiveItemEffect_Statics::NewProp__DisappearItemEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerItemManager_DeactiveItemEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerItemManager_DeactiveItemEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerItemManager, nullptr, "DeactiveItemEffect", nullptr, nullptr, sizeof(ELCareerItemManager_eventDeactiveItemEffect_Parms), Z_Construct_UFunction_AELCareerItemManager_DeactiveItemEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerItemManager_DeactiveItemEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerItemManager_DeactiveItemEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerItemManager_DeactiveItemEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerItemManager_DeactiveItemEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerItemManager_DeactiveItemEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerItemManager_GetCareerItemData_Statics
	{
		struct ELCareerItemManager_eventGetCareerItemData_Parms
		{
			ECareerItemNo _ItemNo;
			FCareerItemData ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__ItemNo_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__ItemNo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerItemManager_GetCareerItemData_Statics::NewProp__ItemNo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerItemManager_GetCareerItemData_Statics::NewProp__ItemNo = { "_ItemNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerItemManager_eventGetCareerItemData_Parms, _ItemNo), Z_Construct_UEnum_ABP_200508_ECareerItemNo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerItemManager_GetCareerItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerItemManager_eventGetCareerItemData_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerItemData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerItemManager_GetCareerItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerItemManager_GetCareerItemData_Statics::NewProp__ItemNo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerItemManager_GetCareerItemData_Statics::NewProp__ItemNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerItemManager_GetCareerItemData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerItemManager_GetCareerItemData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerItemManager_GetCareerItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerItemManager, nullptr, "GetCareerItemData", nullptr, nullptr, sizeof(ELCareerItemManager_eventGetCareerItemData_Parms), Z_Construct_UFunction_AELCareerItemManager_GetCareerItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerItemManager_GetCareerItemData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerItemManager_GetCareerItemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerItemManager_GetCareerItemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerItemManager_GetCareerItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerItemManager_GetCareerItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerItemManager_GetCareerItemTableBase_Statics
	{
		struct ELCareerItemManager_eventGetCareerItemTableBase_Parms
		{
			TArray<FCareerItemData> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerItemManager_GetCareerItemTableBase_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerItemData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELCareerItemManager_GetCareerItemTableBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerItemManager_eventGetCareerItemTableBase_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerItemManager_GetCareerItemTableBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerItemManager_GetCareerItemTableBase_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerItemManager_GetCareerItemTableBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerItemManager_GetCareerItemTableBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerItemManager_GetCareerItemTableBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerItemManager, nullptr, "GetCareerItemTableBase", nullptr, nullptr, sizeof(ELCareerItemManager_eventGetCareerItemTableBase_Parms), Z_Construct_UFunction_AELCareerItemManager_GetCareerItemTableBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerItemManager_GetCareerItemTableBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerItemManager_GetCareerItemTableBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerItemManager_GetCareerItemTableBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerItemManager_GetCareerItemTableBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerItemManager_GetCareerItemTableBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerItemManager_UseItems_Statics
	{
		struct ELCareerItemManager_eventUseItems_Parms
		{
			UELCareerGameParam* _pGameParam;
			ECareerItemNo _ItemNo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pGameParam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__ItemNo_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__ItemNo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerItemManager_UseItems_Statics::NewProp__pGameParam = { "_pGameParam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerItemManager_eventUseItems_Parms, _pGameParam), Z_Construct_UClass_UELCareerGameParam_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerItemManager_UseItems_Statics::NewProp__ItemNo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerItemManager_UseItems_Statics::NewProp__ItemNo = { "_ItemNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerItemManager_eventUseItems_Parms, _ItemNo), Z_Construct_UEnum_ABP_200508_ECareerItemNo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELCareerItemManager_UseItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerItemManager_eventUseItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELCareerItemManager_UseItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerItemManager_eventUseItems_Parms), &Z_Construct_UFunction_AELCareerItemManager_UseItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerItemManager_UseItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerItemManager_UseItems_Statics::NewProp__pGameParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerItemManager_UseItems_Statics::NewProp__ItemNo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerItemManager_UseItems_Statics::NewProp__ItemNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerItemManager_UseItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerItemManager_UseItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerItemManager_UseItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerItemManager, nullptr, "UseItems", nullptr, nullptr, sizeof(ELCareerItemManager_eventUseItems_Parms), Z_Construct_UFunction_AELCareerItemManager_UseItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerItemManager_UseItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerItemManager_UseItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerItemManager_UseItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerItemManager_UseItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerItemManager_UseItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerItemManager_NoRegister()
	{
		return AELCareerItemManager::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerItemManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_CareerItemTableBase_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CareerItemTableBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_CareerItemTableBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerItemManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerItemManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerItemManager_ActiveItemEffect, "ActiveItemEffect" }, // 3392351703
		{ &Z_Construct_UFunction_AELCareerItemManager_AddCareerItemData, "AddCareerItemData" }, // 2656046920
		{ &Z_Construct_UFunction_AELCareerItemManager_CanUseItem, "CanUseItem" }, // 2514220768
		{ &Z_Construct_UFunction_AELCareerItemManager_DeactiveItemEffect, "DeactiveItemEffect" }, // 1804748206
		{ &Z_Construct_UFunction_AELCareerItemManager_GetCareerItemData, "GetCareerItemData" }, // 1199444300
		{ &Z_Construct_UFunction_AELCareerItemManager_GetCareerItemTableBase, "GetCareerItemTableBase" }, // 948750201
		{ &Z_Construct_UFunction_AELCareerItemManager_UseItems, "UseItems" }, // 3566045095
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerItemManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerItemManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELCareerItemManager_Statics::NewProp_m_CareerItemTableBase_Inner = { "m_CareerItemTableBase", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerItemData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerItemManager_Statics::NewProp_m_CareerItemTableBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerItemManager" },
		{ "ModuleRelativePath", "Public/ELCareerItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerItemManager_Statics::NewProp_m_CareerItemTableBase = { "m_CareerItemTableBase", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerItemManager, m_CareerItemTableBase), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerItemManager_Statics::NewProp_m_CareerItemTableBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerItemManager_Statics::NewProp_m_CareerItemTableBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELCareerItemManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerItemManager_Statics::NewProp_m_CareerItemTableBase_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerItemManager_Statics::NewProp_m_CareerItemTableBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerItemManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerItemManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerItemManager_Statics::ClassParams = {
		&AELCareerItemManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELCareerItemManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerItemManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELCareerItemManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerItemManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerItemManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerItemManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerItemManager, 706792560);
	template<> ABP_200508_API UClass* StaticClass<AELCareerItemManager>()
	{
		return AELCareerItemManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerItemManager(Z_Construct_UClass_AELCareerItemManager, &AELCareerItemManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerItemManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerItemManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
