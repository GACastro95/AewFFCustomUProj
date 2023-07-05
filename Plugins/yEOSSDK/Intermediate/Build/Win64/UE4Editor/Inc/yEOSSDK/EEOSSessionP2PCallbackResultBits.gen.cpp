// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSSessionP2PCallbackResultBits.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSSessionP2PCallbackResultBits() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PCallbackResultBits();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSSessionP2PCallbackResultBits_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PCallbackResultBits, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSSessionP2PCallbackResultBits"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionP2PCallbackResultBits>()
	{
		return EEOSSessionP2PCallbackResultBits_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSSessionP2PCallbackResultBits(EEOSSessionP2PCallbackResultBits_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSSessionP2PCallbackResultBits"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PCallbackResultBits_Hash() { return 2843233520U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PCallbackResultBits()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSSessionP2PCallbackResultBits"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PCallbackResultBits_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSSessionP2PCallbackResultBits::Success", (int64)EEOSSessionP2PCallbackResultBits::Success },
				{ "EEOSSessionP2PCallbackResultBits::Skiped", (int64)EEOSSessionP2PCallbackResultBits::Skiped },
				{ "EEOSSessionP2PCallbackResultBits::Success_EndCallback", (int64)EEOSSessionP2PCallbackResultBits::Success_EndCallback },
				{ "EEOSSessionP2PCallbackResultBits::Success_CachePacket", (int64)EEOSSessionP2PCallbackResultBits::Success_CachePacket },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EEOSSessionP2PCallbackResultBits.h" },
				{ "Skiped.Name", "EEOSSessionP2PCallbackResultBits::Skiped" },
				{ "Success.Name", "EEOSSessionP2PCallbackResultBits::Success" },
				{ "Success_CachePacket.Name", "EEOSSessionP2PCallbackResultBits::Success_CachePacket" },
				{ "Success_EndCallback.Name", "EEOSSessionP2PCallbackResultBits::Success_EndCallback" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSSessionP2PCallbackResultBits",
				"EEOSSessionP2PCallbackResultBits",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
