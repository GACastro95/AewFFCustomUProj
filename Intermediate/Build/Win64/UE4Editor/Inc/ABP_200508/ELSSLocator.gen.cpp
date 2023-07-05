// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSLocator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSLocator() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSLocator_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSLocator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSLocatorType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPlayerStartLocatorAreaId();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPlayerStartLocatorType();
// End Cross Module References
	DEFINE_FUNCTION(AELSSLocator::execGetActorRotationYawOnly)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetActorRotationYawOnly();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSLocator::execGetFilterID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFilterID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSLocator::execGetLocatorType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSLocatorType*)Z_Param__Result=P_THIS->GetLocatorType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSLocator::execGetPlayerStartLocatorAreaId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSPlayerStartLocatorAreaId*)Z_Param__Result=P_THIS->GetPlayerStartLocatorAreaId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSLocator::execGetPlayerStartLocatorType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSPlayerStartLocatorType*)Z_Param__Result=P_THIS->GetPlayerStartLocatorType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSLocator::execGetSortOrder)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSortOrder();
		P_NATIVE_END;
	}
	void AELSSLocator::StaticRegisterNativesAELSSLocator()
	{
		UClass* Class = AELSSLocator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorRotationYawOnly", &AELSSLocator::execGetActorRotationYawOnly },
			{ "GetFilterID", &AELSSLocator::execGetFilterID },
			{ "GetLocatorType", &AELSSLocator::execGetLocatorType },
			{ "GetPlayerStartLocatorAreaId", &AELSSLocator::execGetPlayerStartLocatorAreaId },
			{ "GetPlayerStartLocatorType", &AELSSLocator::execGetPlayerStartLocatorType },
			{ "GetSortOrder", &AELSSLocator::execGetSortOrder },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSLocator_GetActorRotationYawOnly_Statics
	{
		struct ELSSLocator_eventGetActorRotationYawOnly_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSLocator_GetActorRotationYawOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSLocator_eventGetActorRotationYawOnly_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSLocator_GetActorRotationYawOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocator_GetActorRotationYawOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSLocator_GetActorRotationYawOnly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSLocator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSLocator_GetActorRotationYawOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSLocator, nullptr, "GetActorRotationYawOnly", nullptr, nullptr, sizeof(ELSSLocator_eventGetActorRotationYawOnly_Parms), Z_Construct_UFunction_AELSSLocator_GetActorRotationYawOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSLocator_GetActorRotationYawOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSLocator_GetActorRotationYawOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSLocator_GetActorRotationYawOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSLocator_GetActorRotationYawOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSLocator_GetActorRotationYawOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSLocator_GetFilterID_Statics
	{
		struct ELSSLocator_eventGetFilterID_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSLocator_GetFilterID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSLocator_eventGetFilterID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSLocator_GetFilterID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocator_GetFilterID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSLocator_GetFilterID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSLocator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSLocator_GetFilterID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSLocator, nullptr, "GetFilterID", nullptr, nullptr, sizeof(ELSSLocator_eventGetFilterID_Parms), Z_Construct_UFunction_AELSSLocator_GetFilterID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSLocator_GetFilterID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSLocator_GetFilterID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSLocator_GetFilterID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSLocator_GetFilterID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSLocator_GetFilterID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSLocator_GetLocatorType_Statics
	{
		struct ELSSLocator_eventGetLocatorType_Parms
		{
			ESSLocatorType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSLocator_GetLocatorType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSLocator_GetLocatorType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSLocator_eventGetLocatorType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSLocatorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSLocator_GetLocatorType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocator_GetLocatorType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocator_GetLocatorType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSLocator_GetLocatorType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSLocator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSLocator_GetLocatorType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSLocator, nullptr, "GetLocatorType", nullptr, nullptr, sizeof(ELSSLocator_eventGetLocatorType_Parms), Z_Construct_UFunction_AELSSLocator_GetLocatorType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSLocator_GetLocatorType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSLocator_GetLocatorType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSLocator_GetLocatorType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSLocator_GetLocatorType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSLocator_GetLocatorType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorAreaId_Statics
	{
		struct ELSSLocator_eventGetPlayerStartLocatorAreaId_Parms
		{
			ESSPlayerStartLocatorAreaId ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorAreaId_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorAreaId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSLocator_eventGetPlayerStartLocatorAreaId_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSPlayerStartLocatorAreaId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorAreaId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorAreaId_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorAreaId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorAreaId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSLocator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorAreaId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSLocator, nullptr, "GetPlayerStartLocatorAreaId", nullptr, nullptr, sizeof(ELSSLocator_eventGetPlayerStartLocatorAreaId_Parms), Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorAreaId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorAreaId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorAreaId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorAreaId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorAreaId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorAreaId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorType_Statics
	{
		struct ELSSLocator_eventGetPlayerStartLocatorType_Parms
		{
			ESSPlayerStartLocatorType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSLocator_eventGetPlayerStartLocatorType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSPlayerStartLocatorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSLocator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSLocator, nullptr, "GetPlayerStartLocatorType", nullptr, nullptr, sizeof(ELSSLocator_eventGetPlayerStartLocatorType_Parms), Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSLocator_GetSortOrder_Statics
	{
		struct ELSSLocator_eventGetSortOrder_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSLocator_GetSortOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSLocator_eventGetSortOrder_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSLocator_GetSortOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocator_GetSortOrder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSLocator_GetSortOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSLocator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSLocator_GetSortOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSLocator, nullptr, "GetSortOrder", nullptr, nullptr, sizeof(ELSSLocator_eventGetSortOrder_Parms), Z_Construct_UFunction_AELSSLocator_GetSortOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSLocator_GetSortOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSLocator_GetSortOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSLocator_GetSortOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSLocator_GetSortOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSLocator_GetSortOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSLocator_NoRegister()
	{
		return AELSSLocator::StaticClass();
	}
	struct Z_Construct_UClass_AELSSLocator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerStartType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStartType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerStartType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerStartAreaId_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStartAreaId_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerStartAreaId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FilterID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSLocator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSLocator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSLocator_GetActorRotationYawOnly, "GetActorRotationYawOnly" }, // 3603667138
		{ &Z_Construct_UFunction_AELSSLocator_GetFilterID, "GetFilterID" }, // 2988471786
		{ &Z_Construct_UFunction_AELSSLocator_GetLocatorType, "GetLocatorType" }, // 3269286335
		{ &Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorAreaId, "GetPlayerStartLocatorAreaId" }, // 90021590
		{ &Z_Construct_UFunction_AELSSLocator_GetPlayerStartLocatorType, "GetPlayerStartLocatorType" }, // 2047218582
		{ &Z_Construct_UFunction_AELSSLocator_GetSortOrder, "GetSortOrder" }, // 4213753815
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSLocator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSLocator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSLocator.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSLocator_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSLocator_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLocator" },
		{ "ModuleRelativePath", "Public/ELSSLocator.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSLocator_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSLocator, Type), Z_Construct_UEnum_ABP_200508_ESSLocatorType, METADATA_PARAMS(Z_Construct_UClass_AELSSLocator_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSLocator_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSLocator_Statics::NewProp_PlayerStartType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSLocator_Statics::NewProp_PlayerStartType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLocator" },
		{ "ModuleRelativePath", "Public/ELSSLocator.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSLocator_Statics::NewProp_PlayerStartType = { "PlayerStartType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSLocator, PlayerStartType), Z_Construct_UEnum_ABP_200508_ESSPlayerStartLocatorType, METADATA_PARAMS(Z_Construct_UClass_AELSSLocator_Statics::NewProp_PlayerStartType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSLocator_Statics::NewProp_PlayerStartType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSLocator_Statics::NewProp_PlayerStartAreaId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSLocator_Statics::NewProp_PlayerStartAreaId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLocator" },
		{ "ModuleRelativePath", "Public/ELSSLocator.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSLocator_Statics::NewProp_PlayerStartAreaId = { "PlayerStartAreaId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSLocator, PlayerStartAreaId), Z_Construct_UEnum_ABP_200508_ESSPlayerStartLocatorAreaId, METADATA_PARAMS(Z_Construct_UClass_AELSSLocator_Statics::NewProp_PlayerStartAreaId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSLocator_Statics::NewProp_PlayerStartAreaId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSLocator_Statics::NewProp_FilterID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLocator" },
		{ "ModuleRelativePath", "Public/ELSSLocator.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSLocator_Statics::NewProp_FilterID = { "FilterID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSLocator, FilterID), METADATA_PARAMS(Z_Construct_UClass_AELSSLocator_Statics::NewProp_FilterID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSLocator_Statics::NewProp_FilterID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSLocator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSLocator_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSLocator_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSLocator_Statics::NewProp_PlayerStartType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSLocator_Statics::NewProp_PlayerStartType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSLocator_Statics::NewProp_PlayerStartAreaId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSLocator_Statics::NewProp_PlayerStartAreaId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSLocator_Statics::NewProp_FilterID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSLocator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSLocator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSLocator_Statics::ClassParams = {
		&AELSSLocator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSLocator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSLocator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSLocator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSLocator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSLocator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSLocator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSLocator, 1745395307);
	template<> ABP_200508_API UClass* StaticClass<AELSSLocator>()
	{
		return AELSSLocator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSLocator(Z_Construct_UClass_AELSSLocator, &AELSSLocator::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSLocator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSLocator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
