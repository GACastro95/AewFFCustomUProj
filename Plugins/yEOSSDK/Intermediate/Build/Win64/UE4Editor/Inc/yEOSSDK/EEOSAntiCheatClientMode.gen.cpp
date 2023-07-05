// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSAntiCheatClientMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSAntiCheatClientMode() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientMode();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSAntiCheatClientMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientMode, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSAntiCheatClientMode"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSAntiCheatClientMode>()
	{
		return EEOSAntiCheatClientMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSAntiCheatClientMode(EEOSAntiCheatClientMode_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSAntiCheatClientMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientMode_Hash() { return 3661074844U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSAntiCheatClientMode"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSAntiCheatClientMode::Invalid", (int64)EEOSAntiCheatClientMode::Invalid },
				{ "EEOSAntiCheatClientMode::ClientServer", (int64)EEOSAntiCheatClientMode::ClientServer },
				{ "EEOSAntiCheatClientMode::PeerToPeer", (int64)EEOSAntiCheatClientMode::PeerToPeer },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClientServer.Name", "EEOSAntiCheatClientMode::ClientServer" },
				{ "Invalid.Name", "EEOSAntiCheatClientMode::Invalid" },
				{ "ModuleRelativePath", "Public/EEOSAntiCheatClientMode.h" },
				{ "PeerToPeer.Name", "EEOSAntiCheatClientMode::PeerToPeer" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSAntiCheatClientMode",
				"EEOSAntiCheatClientMode",
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
