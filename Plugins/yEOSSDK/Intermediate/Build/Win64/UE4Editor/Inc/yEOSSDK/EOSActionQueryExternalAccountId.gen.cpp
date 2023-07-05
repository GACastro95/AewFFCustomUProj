// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSActionQueryExternalAccountId.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSActionQueryExternalAccountId() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSActionQueryExternalAccountId_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSActionQueryExternalAccountId();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserManager_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EExternalAccountType();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_AsyncCompletedEOSQueryExternalAccountId__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSActionQueryExternalAccountId::execAbort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Abort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSActionQueryExternalAccountId::execEOSActionQueryExternalAccountId)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_GET_OBJECT(UEOSUserManager,Z_Param_NewUserManager);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewLocalProductID);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewTargetProductID);
		P_GET_ENUM(EExternalAccountType,Z_Param_NewAccountType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSActionQueryExternalAccountId**)Z_Param__Result=UEOSActionQueryExternalAccountId::EOSActionQueryExternalAccountId(Z_Param_NewWorldContextObject,Z_Param_NewUserManager,Z_Param_NewLocalProductID,Z_Param_NewTargetProductID,EExternalAccountType(Z_Param_NewAccountType));
		P_NATIVE_END;
	}
	void UEOSActionQueryExternalAccountId::StaticRegisterNativesUEOSActionQueryExternalAccountId()
	{
		UClass* Class = UEOSActionQueryExternalAccountId::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Abort", &UEOSActionQueryExternalAccountId::execAbort },
			{ "EOSActionQueryExternalAccountId", &UEOSActionQueryExternalAccountId::execEOSActionQueryExternalAccountId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSActionQueryExternalAccountId_Abort_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSActionQueryExternalAccountId_Abort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSActionQueryExternalAccountId.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSActionQueryExternalAccountId_Abort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSActionQueryExternalAccountId, nullptr, "Abort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSActionQueryExternalAccountId_Abort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSActionQueryExternalAccountId_Abort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSActionQueryExternalAccountId_Abort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSActionQueryExternalAccountId_Abort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics
	{
		struct EOSActionQueryExternalAccountId_eventEOSActionQueryExternalAccountId_Parms
		{
			UObject* NewWorldContextObject;
			UEOSUserManager* NewUserManager;
			FString NewLocalProductID;
			FString NewTargetProductID;
			EExternalAccountType NewAccountType;
			UEOSActionQueryExternalAccountId* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewUserManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLocalProductID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewLocalProductID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTargetProductID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewTargetProductID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewAccountType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewAccountType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSActionQueryExternalAccountId_eventEOSActionQueryExternalAccountId_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::NewProp_NewUserManager = { "NewUserManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSActionQueryExternalAccountId_eventEOSActionQueryExternalAccountId_Parms, NewUserManager), Z_Construct_UClass_UEOSUserManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::NewProp_NewLocalProductID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::NewProp_NewLocalProductID = { "NewLocalProductID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSActionQueryExternalAccountId_eventEOSActionQueryExternalAccountId_Parms, NewLocalProductID), METADATA_PARAMS(Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::NewProp_NewLocalProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::NewProp_NewLocalProductID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::NewProp_NewTargetProductID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::NewProp_NewTargetProductID = { "NewTargetProductID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSActionQueryExternalAccountId_eventEOSActionQueryExternalAccountId_Parms, NewTargetProductID), METADATA_PARAMS(Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::NewProp_NewTargetProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::NewProp_NewTargetProductID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::NewProp_NewAccountType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::NewProp_NewAccountType = { "NewAccountType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSActionQueryExternalAccountId_eventEOSActionQueryExternalAccountId_Parms, NewAccountType), Z_Construct_UEnum_yEOSSDK_EExternalAccountType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSActionQueryExternalAccountId_eventEOSActionQueryExternalAccountId_Parms, ReturnValue), Z_Construct_UClass_UEOSActionQueryExternalAccountId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::NewProp_NewUserManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::NewProp_NewLocalProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::NewProp_NewTargetProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::NewProp_NewAccountType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::NewProp_NewAccountType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSActionQueryExternalAccountId.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSActionQueryExternalAccountId, nullptr, "EOSActionQueryExternalAccountId", nullptr, nullptr, sizeof(EOSActionQueryExternalAccountId_eventEOSActionQueryExternalAccountId_Parms), Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSActionQueryExternalAccountId_NoRegister()
	{
		return UEOSActionQueryExternalAccountId::StaticClass();
	}
	struct Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalProductID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalProductID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetProductID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetProductID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AccountType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AccountType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSActionQueryExternalAccountId_Abort, "Abort" }, // 2276092289
		{ &Z_Construct_UFunction_UEOSActionQueryExternalAccountId_EOSActionQueryExternalAccountId, "EOSActionQueryExternalAccountId" }, // 3812989737
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSActionQueryExternalAccountId.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSActionQueryExternalAccountId.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryExternalAccountId" },
		{ "ModuleRelativePath", "Public/EOSActionQueryExternalAccountId.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSActionQueryExternalAccountId, OnCompleted), Z_Construct_UDelegateFunction_yEOSSDK_AsyncCompletedEOSQueryExternalAccountId__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_OnCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryExternalAccountId" },
		{ "ModuleRelativePath", "Public/EOSActionQueryExternalAccountId.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSActionQueryExternalAccountId, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_UserManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryExternalAccountId" },
		{ "ModuleRelativePath", "Public/EOSActionQueryExternalAccountId.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_UserManager = { "UserManager", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSActionQueryExternalAccountId, UserManager), Z_Construct_UClass_UEOSUserManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_UserManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_UserManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_LocalProductID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryExternalAccountId" },
		{ "ModuleRelativePath", "Public/EOSActionQueryExternalAccountId.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_LocalProductID = { "LocalProductID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSActionQueryExternalAccountId, LocalProductID), METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_LocalProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_LocalProductID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_TargetProductID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryExternalAccountId" },
		{ "ModuleRelativePath", "Public/EOSActionQueryExternalAccountId.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_TargetProductID = { "TargetProductID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSActionQueryExternalAccountId, TargetProductID), METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_TargetProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_TargetProductID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_AccountType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_AccountType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryExternalAccountId" },
		{ "ModuleRelativePath", "Public/EOSActionQueryExternalAccountId.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_AccountType = { "AccountType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSActionQueryExternalAccountId, AccountType), Z_Construct_UEnum_yEOSSDK_EExternalAccountType, METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_AccountType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_AccountType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_OnCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_UserManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_LocalProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_TargetProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_AccountType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::NewProp_AccountType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSActionQueryExternalAccountId>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::ClassParams = {
		&UEOSActionQueryExternalAccountId::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSActionQueryExternalAccountId()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSActionQueryExternalAccountId_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSActionQueryExternalAccountId, 2376642336);
	template<> YEOSSDK_API UClass* StaticClass<UEOSActionQueryExternalAccountId>()
	{
		return UEOSActionQueryExternalAccountId::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSActionQueryExternalAccountId(Z_Construct_UClass_UEOSActionQueryExternalAccountId, &UEOSActionQueryExternalAccountId::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSActionQueryExternalAccountId"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSActionQueryExternalAccountId);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
