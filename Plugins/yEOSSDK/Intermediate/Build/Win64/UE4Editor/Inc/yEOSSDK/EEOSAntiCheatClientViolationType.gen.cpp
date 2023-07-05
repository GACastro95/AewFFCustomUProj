// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSAntiCheatClientViolationType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSAntiCheatClientViolationType() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientViolationType();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSAntiCheatClientViolationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientViolationType, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSAntiCheatClientViolationType"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSAntiCheatClientViolationType>()
	{
		return EEOSAntiCheatClientViolationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSAntiCheatClientViolationType(EEOSAntiCheatClientViolationType_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSAntiCheatClientViolationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientViolationType_Hash() { return 4182568431U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientViolationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSAntiCheatClientViolationType"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientViolationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSAntiCheatClientViolationType::None", (int64)EEOSAntiCheatClientViolationType::None },
				{ "EEOSAntiCheatClientViolationType::IntegrityCatalogNotFound", (int64)EEOSAntiCheatClientViolationType::IntegrityCatalogNotFound },
				{ "EEOSAntiCheatClientViolationType::IntegrityCatalogError", (int64)EEOSAntiCheatClientViolationType::IntegrityCatalogError },
				{ "EEOSAntiCheatClientViolationType::IntegrityCatalogCertificateRevoked", (int64)EEOSAntiCheatClientViolationType::IntegrityCatalogCertificateRevoked },
				{ "EEOSAntiCheatClientViolationType::IntegrityCatalogMissingMainExecutable", (int64)EEOSAntiCheatClientViolationType::IntegrityCatalogMissingMainExecutable },
				{ "EEOSAntiCheatClientViolationType::GameFileMismatch", (int64)EEOSAntiCheatClientViolationType::GameFileMismatch },
				{ "EEOSAntiCheatClientViolationType::RequiredGameFileNotFound", (int64)EEOSAntiCheatClientViolationType::RequiredGameFileNotFound },
				{ "EEOSAntiCheatClientViolationType::UnknownGameFileForbidden", (int64)EEOSAntiCheatClientViolationType::UnknownGameFileForbidden },
				{ "EEOSAntiCheatClientViolationType::SystemFileUntrusted", (int64)EEOSAntiCheatClientViolationType::SystemFileUntrusted },
				{ "EEOSAntiCheatClientViolationType::ForbiddenModuleLoaded", (int64)EEOSAntiCheatClientViolationType::ForbiddenModuleLoaded },
				{ "EEOSAntiCheatClientViolationType::CorruptedMemory", (int64)EEOSAntiCheatClientViolationType::CorruptedMemory },
				{ "EEOSAntiCheatClientViolationType::ForbiddenToolDetected", (int64)EEOSAntiCheatClientViolationType::ForbiddenToolDetected },
				{ "EEOSAntiCheatClientViolationType::InternalAntiCheatViolation", (int64)EEOSAntiCheatClientViolationType::InternalAntiCheatViolation },
				{ "EEOSAntiCheatClientViolationType::CorruptedNetworkMessageFlow", (int64)EEOSAntiCheatClientViolationType::CorruptedNetworkMessageFlow },
				{ "EEOSAntiCheatClientViolationType::VirtualMachineNotAllowed", (int64)EEOSAntiCheatClientViolationType::VirtualMachineNotAllowed },
				{ "EEOSAntiCheatClientViolationType::ForbiddenSystemConfiguration", (int64)EEOSAntiCheatClientViolationType::ForbiddenSystemConfiguration },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CorruptedMemory.Name", "EEOSAntiCheatClientViolationType::CorruptedMemory" },
				{ "CorruptedNetworkMessageFlow.Name", "EEOSAntiCheatClientViolationType::CorruptedNetworkMessageFlow" },
				{ "ForbiddenModuleLoaded.Name", "EEOSAntiCheatClientViolationType::ForbiddenModuleLoaded" },
				{ "ForbiddenSystemConfiguration.Name", "EEOSAntiCheatClientViolationType::ForbiddenSystemConfiguration" },
				{ "ForbiddenToolDetected.Name", "EEOSAntiCheatClientViolationType::ForbiddenToolDetected" },
				{ "GameFileMismatch.Name", "EEOSAntiCheatClientViolationType::GameFileMismatch" },
				{ "IntegrityCatalogCertificateRevoked.Name", "EEOSAntiCheatClientViolationType::IntegrityCatalogCertificateRevoked" },
				{ "IntegrityCatalogError.Name", "EEOSAntiCheatClientViolationType::IntegrityCatalogError" },
				{ "IntegrityCatalogMissingMainExecutable.Name", "EEOSAntiCheatClientViolationType::IntegrityCatalogMissingMainExecutable" },
				{ "IntegrityCatalogNotFound.Name", "EEOSAntiCheatClientViolationType::IntegrityCatalogNotFound" },
				{ "InternalAntiCheatViolation.Name", "EEOSAntiCheatClientViolationType::InternalAntiCheatViolation" },
				{ "ModuleRelativePath", "Public/EEOSAntiCheatClientViolationType.h" },
				{ "None.Name", "EEOSAntiCheatClientViolationType::None" },
				{ "RequiredGameFileNotFound.Name", "EEOSAntiCheatClientViolationType::RequiredGameFileNotFound" },
				{ "SystemFileUntrusted.Name", "EEOSAntiCheatClientViolationType::SystemFileUntrusted" },
				{ "UnknownGameFileForbidden.Name", "EEOSAntiCheatClientViolationType::UnknownGameFileForbidden" },
				{ "VirtualMachineNotAllowed.Name", "EEOSAntiCheatClientViolationType::VirtualMachineNotAllowed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSAntiCheatClientViolationType",
				"EEOSAntiCheatClientViolationType",
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
