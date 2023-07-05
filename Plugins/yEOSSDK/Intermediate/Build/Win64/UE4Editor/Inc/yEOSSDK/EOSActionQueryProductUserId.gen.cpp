// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSActionQueryProductUserId.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSActionQueryProductUserId() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSActionQueryProductUserId_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSActionQueryProductUserId();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserManager_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EExternalAccountType();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_AsyncCompletedEOSActionQueryProductUserId__DelegateSignature();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FProductUserIdMap();
// End Cross Module References
	DEFINE_FUNCTION(UEOSActionQueryProductUserId::execAbort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Abort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSActionQueryProductUserId::execCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Completed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSActionQueryProductUserId::execEOSActionQueryProductUserId)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_GET_OBJECT(UEOSUserManager,Z_Param_NewUserManager);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewLocalProductID);
		P_GET_TARRAY_REF(FString,Z_Param_Out_NewTargetAccountIDs);
		P_GET_ENUM(EExternalAccountType,Z_Param_NewAccountType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSActionQueryProductUserId**)Z_Param__Result=UEOSActionQueryProductUserId::EOSActionQueryProductUserId(Z_Param_NewWorldContextObject,Z_Param_NewUserManager,Z_Param_NewLocalProductID,Z_Param_Out_NewTargetAccountIDs,EExternalAccountType(Z_Param_NewAccountType));
		P_NATIVE_END;
	}
	void UEOSActionQueryProductUserId::StaticRegisterNativesUEOSActionQueryProductUserId()
	{
		UClass* Class = UEOSActionQueryProductUserId::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Abort", &UEOSActionQueryProductUserId::execAbort },
			{ "Completed", &UEOSActionQueryProductUserId::execCompleted },
			{ "EOSActionQueryProductUserId", &UEOSActionQueryProductUserId::execEOSActionQueryProductUserId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSActionQueryProductUserId_Abort_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSActionQueryProductUserId_Abort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSActionQueryProductUserId.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSActionQueryProductUserId_Abort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSActionQueryProductUserId, nullptr, "Abort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSActionQueryProductUserId_Abort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSActionQueryProductUserId_Abort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSActionQueryProductUserId_Abort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSActionQueryProductUserId_Abort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSActionQueryProductUserId_Completed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSActionQueryProductUserId_Completed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSActionQueryProductUserId.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSActionQueryProductUserId_Completed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSActionQueryProductUserId, nullptr, "Completed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSActionQueryProductUserId_Completed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSActionQueryProductUserId_Completed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSActionQueryProductUserId_Completed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSActionQueryProductUserId_Completed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics
	{
		struct EOSActionQueryProductUserId_eventEOSActionQueryProductUserId_Parms
		{
			UObject* NewWorldContextObject;
			UEOSUserManager* NewUserManager;
			FString NewLocalProductID;
			TArray<FString> NewTargetAccountIDs;
			EExternalAccountType NewAccountType;
			UEOSActionQueryProductUserId* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewUserManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLocalProductID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewLocalProductID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewTargetAccountIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTargetAccountIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewTargetAccountIDs;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewAccountType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewAccountType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSActionQueryProductUserId_eventEOSActionQueryProductUserId_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::NewProp_NewUserManager = { "NewUserManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSActionQueryProductUserId_eventEOSActionQueryProductUserId_Parms, NewUserManager), Z_Construct_UClass_UEOSUserManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::NewProp_NewLocalProductID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::NewProp_NewLocalProductID = { "NewLocalProductID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSActionQueryProductUserId_eventEOSActionQueryProductUserId_Parms, NewLocalProductID), METADATA_PARAMS(Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::NewProp_NewLocalProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::NewProp_NewLocalProductID_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::NewProp_NewTargetAccountIDs_Inner = { "NewTargetAccountIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::NewProp_NewTargetAccountIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::NewProp_NewTargetAccountIDs = { "NewTargetAccountIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSActionQueryProductUserId_eventEOSActionQueryProductUserId_Parms, NewTargetAccountIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::NewProp_NewTargetAccountIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::NewProp_NewTargetAccountIDs_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::NewProp_NewAccountType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::NewProp_NewAccountType = { "NewAccountType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSActionQueryProductUserId_eventEOSActionQueryProductUserId_Parms, NewAccountType), Z_Construct_UEnum_yEOSSDK_EExternalAccountType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSActionQueryProductUserId_eventEOSActionQueryProductUserId_Parms, ReturnValue), Z_Construct_UClass_UEOSActionQueryProductUserId_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::NewProp_NewUserManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::NewProp_NewLocalProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::NewProp_NewTargetAccountIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::NewProp_NewTargetAccountIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::NewProp_NewAccountType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::NewProp_NewAccountType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSActionQueryProductUserId.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSActionQueryProductUserId, nullptr, "EOSActionQueryProductUserId", nullptr, nullptr, sizeof(EOSActionQueryProductUserId_eventEOSActionQueryProductUserId_Parms), Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSActionQueryProductUserId_NoRegister()
	{
		return UEOSActionQueryProductUserId::StaticClass();
	}
	struct Z_Construct_UClass_UEOSActionQueryProductUserId_Statics
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
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetAccountIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetAccountIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetAccountIDs;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AccountType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AccountType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RequestNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultIdMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultIdMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSActionQueryProductUserId_Abort, "Abort" }, // 3928991796
		{ &Z_Construct_UFunction_UEOSActionQueryProductUserId_Completed, "Completed" }, // 509414524
		{ &Z_Construct_UFunction_UEOSActionQueryProductUserId_EOSActionQueryProductUserId, "EOSActionQueryProductUserId" }, // 1794416015
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSActionQueryProductUserId.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSActionQueryProductUserId.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryProductUserId" },
		{ "ModuleRelativePath", "Public/EOSActionQueryProductUserId.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSActionQueryProductUserId, OnCompleted), Z_Construct_UDelegateFunction_yEOSSDK_AsyncCompletedEOSActionQueryProductUserId__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_OnCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryProductUserId" },
		{ "ModuleRelativePath", "Public/EOSActionQueryProductUserId.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSActionQueryProductUserId, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_UserManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryProductUserId" },
		{ "ModuleRelativePath", "Public/EOSActionQueryProductUserId.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_UserManager = { "UserManager", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSActionQueryProductUserId, UserManager), Z_Construct_UClass_UEOSUserManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_UserManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_UserManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_LocalProductID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryProductUserId" },
		{ "ModuleRelativePath", "Public/EOSActionQueryProductUserId.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_LocalProductID = { "LocalProductID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSActionQueryProductUserId, LocalProductID), METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_LocalProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_LocalProductID_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_TargetAccountIDs_Inner = { "TargetAccountIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_TargetAccountIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryProductUserId" },
		{ "ModuleRelativePath", "Public/EOSActionQueryProductUserId.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_TargetAccountIDs = { "TargetAccountIDs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSActionQueryProductUserId, TargetAccountIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_TargetAccountIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_TargetAccountIDs_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_AccountType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_AccountType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryProductUserId" },
		{ "ModuleRelativePath", "Public/EOSActionQueryProductUserId.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_AccountType = { "AccountType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSActionQueryProductUserId, AccountType), Z_Construct_UEnum_yEOSSDK_EExternalAccountType, METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_AccountType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_AccountType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_RequestNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryProductUserId" },
		{ "ModuleRelativePath", "Public/EOSActionQueryProductUserId.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_RequestNum = { "RequestNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSActionQueryProductUserId, RequestNum), METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_RequestNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_RequestNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_ResultIdMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryProductUserId" },
		{ "ModuleRelativePath", "Public/EOSActionQueryProductUserId.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_ResultIdMap = { "ResultIdMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSActionQueryProductUserId, ResultIdMap), Z_Construct_UScriptStruct_FProductUserIdMap, METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_ResultIdMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_ResultIdMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_bSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryProductUserId" },
		{ "ModuleRelativePath", "Public/EOSActionQueryProductUserId.h" },
	};
#endif
	void Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((UEOSActionQueryProductUserId*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEOSActionQueryProductUserId), &Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_bSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_OnCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_UserManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_LocalProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_TargetAccountIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_TargetAccountIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_AccountType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_AccountType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_RequestNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_ResultIdMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::NewProp_bSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSActionQueryProductUserId>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::ClassParams = {
		&UEOSActionQueryProductUserId::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSActionQueryProductUserId()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSActionQueryProductUserId_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSActionQueryProductUserId, 470909654);
	template<> YEOSSDK_API UClass* StaticClass<UEOSActionQueryProductUserId>()
	{
		return UEOSActionQueryProductUserId::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSActionQueryProductUserId(Z_Construct_UClass_UEOSActionQueryProductUserId, &UEOSActionQueryProductUserId::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSActionQueryProductUserId"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSActionQueryProductUserId);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
