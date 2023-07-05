// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSExternalCredentialType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSExternalCredentialType() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSExternalCredentialType();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSExternalCredentialType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSExternalCredentialType, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSExternalCredentialType"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSExternalCredentialType>()
	{
		return EEOSExternalCredentialType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSExternalCredentialType(EEOSExternalCredentialType_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSExternalCredentialType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSExternalCredentialType_Hash() { return 3951120510U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSExternalCredentialType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSExternalCredentialType"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSExternalCredentialType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSExternalCredentialType::None", (int64)EEOSExternalCredentialType::None },
				{ "EEOSExternalCredentialType::Epic", (int64)EEOSExternalCredentialType::Epic },
				{ "EEOSExternalCredentialType::Steam", (int64)EEOSExternalCredentialType::Steam },
				{ "EEOSExternalCredentialType::PSN", (int64)EEOSExternalCredentialType::PSN },
				{ "EEOSExternalCredentialType::XboxLive", (int64)EEOSExternalCredentialType::XboxLive },
				{ "EEOSExternalCredentialType::NintendoID", (int64)EEOSExternalCredentialType::NintendoID },
				{ "EEOSExternalCredentialType::NintendoNSAID", (int64)EEOSExternalCredentialType::NintendoNSAID },
				{ "EEOSExternalCredentialType::GDK", (int64)EEOSExternalCredentialType::GDK },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Epic.Name", "EEOSExternalCredentialType::Epic" },
				{ "GDK.Name", "EEOSExternalCredentialType::GDK" },
				{ "ModuleRelativePath", "Public/EEOSExternalCredentialType.h" },
				{ "NintendoID.Name", "EEOSExternalCredentialType::NintendoID" },
				{ "NintendoNSAID.Name", "EEOSExternalCredentialType::NintendoNSAID" },
				{ "None.Name", "EEOSExternalCredentialType::None" },
				{ "PSN.Name", "EEOSExternalCredentialType::PSN" },
				{ "Steam.Name", "EEOSExternalCredentialType::Steam" },
				{ "XboxLive.Name", "EEOSExternalCredentialType::XboxLive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSExternalCredentialType",
				"EEOSExternalCredentialType",
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
