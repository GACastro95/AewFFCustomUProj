// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSActionQueryCommunityUserInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSActionQueryCommunityUserInfo() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSActionQueryCommunityUserInfo();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityUserBase_NoRegister();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_AsyncCompletedQueryCommunityUserInfo__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSActionQueryCommunityUserInfo::execAbort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Abort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSActionQueryCommunityUserInfo::execEOSActionQueryCommunityUserInfo)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_GET_OBJECT(UEOSCommunityUserBase,Z_Param_NewUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSActionQueryCommunityUserInfo**)Z_Param__Result=UEOSActionQueryCommunityUserInfo::EOSActionQueryCommunityUserInfo(Z_Param_NewWorldContextObject,Z_Param_NewUser);
		P_NATIVE_END;
	}
	void UEOSActionQueryCommunityUserInfo::StaticRegisterNativesUEOSActionQueryCommunityUserInfo()
	{
		UClass* Class = UEOSActionQueryCommunityUserInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Abort", &UEOSActionQueryCommunityUserInfo::execAbort },
			{ "EOSActionQueryCommunityUserInfo", &UEOSActionQueryCommunityUserInfo::execEOSActionQueryCommunityUserInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_Abort_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_Abort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSActionQueryCommunityUserInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_Abort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSActionQueryCommunityUserInfo, nullptr, "Abort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_Abort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_Abort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_Abort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_Abort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_EOSActionQueryCommunityUserInfo_Statics
	{
		struct EOSActionQueryCommunityUserInfo_eventEOSActionQueryCommunityUserInfo_Parms
		{
			UObject* NewWorldContextObject;
			UEOSCommunityUserBase* NewUser;
			UEOSActionQueryCommunityUserInfo* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewUser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_EOSActionQueryCommunityUserInfo_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSActionQueryCommunityUserInfo_eventEOSActionQueryCommunityUserInfo_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_EOSActionQueryCommunityUserInfo_Statics::NewProp_NewUser = { "NewUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSActionQueryCommunityUserInfo_eventEOSActionQueryCommunityUserInfo_Parms, NewUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_EOSActionQueryCommunityUserInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSActionQueryCommunityUserInfo_eventEOSActionQueryCommunityUserInfo_Parms, ReturnValue), Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_EOSActionQueryCommunityUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_EOSActionQueryCommunityUserInfo_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_EOSActionQueryCommunityUserInfo_Statics::NewProp_NewUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_EOSActionQueryCommunityUserInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_EOSActionQueryCommunityUserInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSActionQueryCommunityUserInfo.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_EOSActionQueryCommunityUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSActionQueryCommunityUserInfo, nullptr, "EOSActionQueryCommunityUserInfo", nullptr, nullptr, sizeof(EOSActionQueryCommunityUserInfo_eventEOSActionQueryCommunityUserInfo_Parms), Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_EOSActionQueryCommunityUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_EOSActionQueryCommunityUserInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_EOSActionQueryCommunityUserInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_EOSActionQueryCommunityUserInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_EOSActionQueryCommunityUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_EOSActionQueryCommunityUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_NoRegister()
	{
		return UEOSActionQueryCommunityUserInfo::StaticClass();
	}
	struct Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_Abort, "Abort" }, // 1515858069
		{ &Z_Construct_UFunction_UEOSActionQueryCommunityUserInfo_EOSActionQueryCommunityUserInfo, "EOSActionQueryCommunityUserInfo" }, // 3367544001
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSActionQueryCommunityUserInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSActionQueryCommunityUserInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryCommunityUserInfo" },
		{ "ModuleRelativePath", "Public/EOSActionQueryCommunityUserInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSActionQueryCommunityUserInfo, OnCompleted), Z_Construct_UDelegateFunction_yEOSSDK_AsyncCompletedQueryCommunityUserInfo__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::NewProp_OnCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryCommunityUserInfo" },
		{ "ModuleRelativePath", "Public/EOSActionQueryCommunityUserInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSActionQueryCommunityUserInfo, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::NewProp_User_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSActionQueryCommunityUserInfo" },
		{ "ModuleRelativePath", "Public/EOSActionQueryCommunityUserInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSActionQueryCommunityUserInfo, User), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::NewProp_User_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::NewProp_User_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::NewProp_OnCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::NewProp_User,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSActionQueryCommunityUserInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::ClassParams = {
		&UEOSActionQueryCommunityUserInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSActionQueryCommunityUserInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSActionQueryCommunityUserInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSActionQueryCommunityUserInfo, 1552034962);
	template<> YEOSSDK_API UClass* StaticClass<UEOSActionQueryCommunityUserInfo>()
	{
		return UEOSActionQueryCommunityUserInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSActionQueryCommunityUserInfo(Z_Construct_UClass_UEOSActionQueryCommunityUserInfo, &UEOSActionQueryCommunityUserInfo::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSActionQueryCommunityUserInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSActionQueryCommunityUserInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
