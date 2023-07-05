// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSUserBaseWithCountMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSUserBaseWithCountMap() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBaseWithCountMap_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBaseWithCountMap();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSUserBaseWithCountMap::execGetRefCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRefCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserBaseWithCountMap::execGetUser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSUserBase**)Z_Param__Result=P_THIS->GetUser();
		P_NATIVE_END;
	}
	void UEOSUserBaseWithCountMap::StaticRegisterNativesUEOSUserBaseWithCountMap()
	{
		UClass* Class = UEOSUserBaseWithCountMap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRefCount", &UEOSUserBaseWithCountMap::execGetRefCount },
			{ "GetUser", &UEOSUserBaseWithCountMap::execGetUser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetRefCount_Statics
	{
		struct EOSUserBaseWithCountMap_eventGetRefCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetRefCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserBaseWithCountMap_eventGetRefCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetRefCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetRefCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetRefCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserBaseWithCountMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetRefCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserBaseWithCountMap, nullptr, "GetRefCount", nullptr, nullptr, sizeof(EOSUserBaseWithCountMap_eventGetRefCount_Parms), Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetRefCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetRefCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetRefCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetRefCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetRefCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetRefCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetUser_Statics
	{
		struct EOSUserBaseWithCountMap_eventGetUser_Parms
		{
			UEOSUserBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserBaseWithCountMap_eventGetUser_Parms, ReturnValue), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserBaseWithCountMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserBaseWithCountMap, nullptr, "GetUser", nullptr, nullptr, sizeof(EOSUserBaseWithCountMap_eventGetUser_Parms), Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSUserBaseWithCountMap_NoRegister()
	{
		return UEOSUserBaseWithCountMap::StaticClass();
	}
	struct Z_Construct_UClass_UEOSUserBaseWithCountMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcUserBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcUserBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSUserBaseWithCountMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSUserBaseWithCountMap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetRefCount, "GetRefCount" }, // 1442103565
		{ &Z_Construct_UFunction_UEOSUserBaseWithCountMap_GetUser, "GetUser" }, // 3487386562
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserBaseWithCountMap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSUserBaseWithCountMap.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSUserBaseWithCountMap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserBaseWithCountMap_Statics::NewProp_m_pcUserBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserBaseWithCountMap" },
		{ "ModuleRelativePath", "Public/EOSUserBaseWithCountMap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSUserBaseWithCountMap_Statics::NewProp_m_pcUserBase = { "m_pcUserBase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUserBaseWithCountMap, m_pcUserBase), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSUserBaseWithCountMap_Statics::NewProp_m_pcUserBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserBaseWithCountMap_Statics::NewProp_m_pcUserBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSUserBaseWithCountMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserBaseWithCountMap_Statics::NewProp_m_pcUserBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSUserBaseWithCountMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSUserBaseWithCountMap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSUserBaseWithCountMap_Statics::ClassParams = {
		&UEOSUserBaseWithCountMap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSUserBaseWithCountMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserBaseWithCountMap_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSUserBaseWithCountMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserBaseWithCountMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSUserBaseWithCountMap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSUserBaseWithCountMap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSUserBaseWithCountMap, 2025868611);
	template<> YEOSSDK_API UClass* StaticClass<UEOSUserBaseWithCountMap>()
	{
		return UEOSUserBaseWithCountMap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSUserBaseWithCountMap(Z_Construct_UClass_UEOSUserBaseWithCountMap, &UEOSUserBaseWithCountMap::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSUserBaseWithCountMap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSUserBaseWithCountMap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
