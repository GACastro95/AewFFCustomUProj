// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSActionQueryExternalAccountIds.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSActionQueryExternalAccountIds() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSActionQueryExternalAccountIds_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSActionQueryExternalAccountIds();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserManager_NoRegister();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_AsyncCompletedEOSQueryExternalAccountIds__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSActionQueryExternalAccountIds::execAbort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Abort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSActionQueryExternalAccountIds::execEOSActionQueryExternalAccountIds)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_GET_OBJECT(UEOSUserManager,Z_Param_NewUserManager);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewLocalProductID);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewTargetProductID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSActionQueryExternalAccountIds**)Z_Param__Result=UEOSActionQueryExternalAccountIds::EOSActionQueryExternalAccountIds(Z_Param_NewWorldContextObject,Z_Param_NewUserManager,Z_Param_NewLocalProductID,Z_Param_NewTargetProductID);
		P_NATIVE_END;
	}
	void UEOSActionQueryExternalAccountIds::StaticRegisterNativesUEOSActionQueryExternalAccountIds()
	{
		UClass* Class = UEOSActionQueryExternalAccountIds::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Abort", &UEOSActionQueryExternalAccountIds::execAbort },
			{ "EOSActionQueryExternalAccountIds", &UEOSActionQueryExternalAccountIds::execEOSActionQueryExternalAccountIds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_Abort_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_Abort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSActionQueryExternalAccountIds.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_Abort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSActionQueryExternalAccountIds, nullptr, "Abort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_Abort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_Abort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_Abort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_Abort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics
	{
		struct EOSActionQueryExternalAccountIds_eventEOSActionQueryExternalAccountIds_Parms
		{
			UObject* NewWorldContextObject;
			UEOSUserManager* NewUserManager;
			FString NewLocalProductID;
			FString NewTargetProductID;
			UEOSActionQueryExternalAccountIds* ReturnValue;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSActionQueryExternalAccountIds_eventEOSActionQueryExternalAccountIds_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::NewProp_NewUserManager = { "NewUserManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSActionQueryExternalAccountIds_eventEOSActionQueryExternalAccountIds_Parms, NewUserManager), Z_Construct_UClass_UEOSUserManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::NewProp_NewLocalProductID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::NewProp_NewLocalProductID = { "NewLocalProductID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSActionQueryExternalAccountIds_eventEOSActionQueryExternalAccountIds_Parms, NewLocalProductID), METADATA_PARAMS(Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::NewProp_NewLocalProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::NewProp_NewLocalProductID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::NewProp_NewTargetProductID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::NewProp_NewTargetProductID = { "NewTargetProductID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSActionQueryExternalAccountIds_eventEOSActionQueryExternalAccountIds_Parms, NewTargetProductID), METADATA_PARAMS(Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::NewProp_NewTargetProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::NewProp_NewTargetProductID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSActionQueryExternalAccountIds_eventEOSActionQueryExternalAccountIds_Parms, ReturnValue), Z_Construct_UClass_UEOSActionQueryExternalAccountIds_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::NewProp_NewUserManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::NewProp_NewLocalProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::NewProp_NewTargetProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSActionQueryExternalAccountIds.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSActionQueryExternalAccountIds, nullptr, "EOSActionQueryExternalAccountIds", nullptr, nullptr, sizeof(EOSActionQueryExternalAccountIds_eventEOSActionQueryExternalAccountIds_Parms), Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSActionQueryExternalAccountIds_NoRegister()
	{
		return UEOSActionQueryExternalAccountIds::StaticClass();
	}
	struct Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_Abort, "Abort" }, // 1634326262
		{ &Z_Construct_UFunction_UEOSActionQueryExternalAccountIds_EOSActionQueryExternalAccountIds, "EOSActionQueryExternalAccountIds" }, // 2092309598
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSActionQueryExternalAccountIds.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSActionQueryExternalAccountIds.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryExternalAccountIds" },
		{ "ModuleRelativePath", "Public/EOSActionQueryExternalAccountIds.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSActionQueryExternalAccountIds, OnCompleted), Z_Construct_UDelegateFunction_yEOSSDK_AsyncCompletedEOSQueryExternalAccountIds__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_OnCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryExternalAccountIds" },
		{ "ModuleRelativePath", "Public/EOSActionQueryExternalAccountIds.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSActionQueryExternalAccountIds, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_UserManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryExternalAccountIds" },
		{ "ModuleRelativePath", "Public/EOSActionQueryExternalAccountIds.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_UserManager = { "UserManager", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSActionQueryExternalAccountIds, UserManager), Z_Construct_UClass_UEOSUserManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_UserManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_UserManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_LocalProductID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryExternalAccountIds" },
		{ "ModuleRelativePath", "Public/EOSActionQueryExternalAccountIds.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_LocalProductID = { "LocalProductID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSActionQueryExternalAccountIds, LocalProductID), METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_LocalProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_LocalProductID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_TargetProductID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryExternalAccountIds" },
		{ "ModuleRelativePath", "Public/EOSActionQueryExternalAccountIds.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_TargetProductID = { "TargetProductID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSActionQueryExternalAccountIds, TargetProductID), METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_TargetProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_TargetProductID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_OnCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_UserManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_LocalProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::NewProp_TargetProductID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSActionQueryExternalAccountIds>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::ClassParams = {
		&UEOSActionQueryExternalAccountIds::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSActionQueryExternalAccountIds()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSActionQueryExternalAccountIds_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSActionQueryExternalAccountIds, 34867971);
	template<> YEOSSDK_API UClass* StaticClass<UEOSActionQueryExternalAccountIds>()
	{
		return UEOSActionQueryExternalAccountIds::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSActionQueryExternalAccountIds(Z_Construct_UClass_UEOSActionQueryExternalAccountIds, &UEOSActionQueryExternalAccountIds::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSActionQueryExternalAccountIds"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSActionQueryExternalAccountIds);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
