// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PAFDataSharing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PAFDataSharing() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PAFDataSharing_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PAFDataSharing();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	void UEOSSessionP2PAFDataSharing::StaticRegisterNativesUEOSSessionP2PAFDataSharing()
	{
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PAFDataSharing_NoRegister()
	{
		return UEOSSessionP2PAFDataSharing::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PAFDataSharing_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PAFDataSharing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PAFDataSharing_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2PAFDataSharing.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFDataSharing.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PAFDataSharing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2PAFDataSharing>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PAFDataSharing_Statics::ClassParams = {
		&UEOSSessionP2PAFDataSharing::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PAFDataSharing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PAFDataSharing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PAFDataSharing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PAFDataSharing_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PAFDataSharing, 3064566725);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PAFDataSharing>()
	{
		return UEOSSessionP2PAFDataSharing::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PAFDataSharing(Z_Construct_UClass_UEOSSessionP2PAFDataSharing, &UEOSSessionP2PAFDataSharing::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PAFDataSharing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PAFDataSharing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
