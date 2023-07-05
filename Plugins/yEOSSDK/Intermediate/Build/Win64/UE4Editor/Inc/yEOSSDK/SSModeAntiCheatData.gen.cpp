// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/SSModeAntiCheatData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSModeAntiCheatData() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_USSModeAntiCheatData_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_USSModeAntiCheatData();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSInstanceBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	void USSModeAntiCheatData::StaticRegisterNativesUSSModeAntiCheatData()
	{
	}
	UClass* Z_Construct_UClass_USSModeAntiCheatData_NoRegister()
	{
		return USSModeAntiCheatData::StaticClass();
	}
	struct Z_Construct_UClass_USSModeAntiCheatData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UniqueNetID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USSModeAntiCheatData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSInstanceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USSModeAntiCheatData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SSModeAntiCheatData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SSModeAntiCheatData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USSModeAntiCheatData_Statics::NewProp_playerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSModeAntiCheatData" },
		{ "ModuleRelativePath", "Public/SSModeAntiCheatData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USSModeAntiCheatData_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USSModeAntiCheatData, playerId), METADATA_PARAMS(Z_Construct_UClass_USSModeAntiCheatData_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USSModeAntiCheatData_Statics::NewProp_playerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USSModeAntiCheatData_Statics::NewProp_UniqueNetID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSModeAntiCheatData" },
		{ "ModuleRelativePath", "Public/SSModeAntiCheatData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USSModeAntiCheatData_Statics::NewProp_UniqueNetID = { "UniqueNetID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USSModeAntiCheatData, UniqueNetID), METADATA_PARAMS(Z_Construct_UClass_USSModeAntiCheatData_Statics::NewProp_UniqueNetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USSModeAntiCheatData_Statics::NewProp_UniqueNetID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USSModeAntiCheatData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSModeAntiCheatData_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSModeAntiCheatData_Statics::NewProp_UniqueNetID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USSModeAntiCheatData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USSModeAntiCheatData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USSModeAntiCheatData_Statics::ClassParams = {
		&USSModeAntiCheatData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USSModeAntiCheatData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USSModeAntiCheatData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USSModeAntiCheatData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USSModeAntiCheatData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USSModeAntiCheatData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USSModeAntiCheatData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USSModeAntiCheatData, 182366357);
	template<> YEOSSDK_API UClass* StaticClass<USSModeAntiCheatData>()
	{
		return USSModeAntiCheatData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USSModeAntiCheatData(Z_Construct_UClass_USSModeAntiCheatData, &USSModeAntiCheatData::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("USSModeAntiCheatData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USSModeAntiCheatData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
