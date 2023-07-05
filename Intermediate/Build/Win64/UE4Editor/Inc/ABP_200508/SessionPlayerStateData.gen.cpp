// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SessionPlayerStateData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSessionPlayerStateData() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USessionPlayerStateData_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USessionPlayerStateData();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void USessionPlayerStateData::StaticRegisterNativesUSessionPlayerStateData()
	{
	}
	UClass* Z_Construct_UClass_USessionPlayerStateData_NoRegister()
	{
		return USessionPlayerStateData::StaticClass();
	}
	struct Z_Construct_UClass_USessionPlayerStateData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USessionPlayerStateData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSessionP2PPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USessionPlayerStateData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SessionPlayerStateData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SessionPlayerStateData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USessionPlayerStateData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USessionPlayerStateData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USessionPlayerStateData_Statics::ClassParams = {
		&USessionPlayerStateData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USessionPlayerStateData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USessionPlayerStateData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USessionPlayerStateData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USessionPlayerStateData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USessionPlayerStateData, 2582689736);
	template<> ABP_200508_API UClass* StaticClass<USessionPlayerStateData>()
	{
		return USessionPlayerStateData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USessionPlayerStateData(Z_Construct_UClass_USessionPlayerStateData, &USessionPlayerStateData::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USessionPlayerStateData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USessionPlayerStateData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
