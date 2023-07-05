// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PGameClockPacket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PGameClockPacket() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PGameClockPacket_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PGameClockPacket();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	void UEOSSessionP2PGameClockPacket::StaticRegisterNativesUEOSSessionP2PGameClockPacket()
	{
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PGameClockPacket_NoRegister()
	{
		return UEOSSessionP2PGameClockPacket::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PGameClockPacket_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PGameClockPacket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSessionP2PPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PGameClockPacket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2PGameClockPacket.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PGameClockPacket.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PGameClockPacket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2PGameClockPacket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PGameClockPacket_Statics::ClassParams = {
		&UEOSSessionP2PGameClockPacket::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PGameClockPacket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PGameClockPacket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PGameClockPacket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PGameClockPacket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PGameClockPacket, 2324759959);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PGameClockPacket>()
	{
		return UEOSSessionP2PGameClockPacket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PGameClockPacket(Z_Construct_UClass_UEOSSessionP2PGameClockPacket, &UEOSSessionP2PGameClockPacket::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PGameClockPacket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PGameClockPacket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
