// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSSessionHostMigrationType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSSessionHostMigrationType() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationType();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSSessionHostMigrationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationType, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSSessionHostMigrationType"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionHostMigrationType>()
	{
		return EEOSSessionHostMigrationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSSessionHostMigrationType(EEOSSessionHostMigrationType_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSSessionHostMigrationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationType_Hash() { return 937918548U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSSessionHostMigrationType"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSSessionHostMigrationType::None", (int64)EEOSSessionHostMigrationType::None },
				{ "EEOSSessionHostMigrationType::HostQuitGame", (int64)EEOSSessionHostMigrationType::HostQuitGame },
				{ "EEOSSessionHostMigrationType::DisconnectedHost", (int64)EEOSSessionHostMigrationType::DisconnectedHost },
				{ "EEOSSessionHostMigrationType::HostMigration", (int64)EEOSSessionHostMigrationType::HostMigration },
				{ "EEOSSessionHostMigrationType::HostMigrationError", (int64)EEOSSessionHostMigrationType::HostMigrationError },
				{ "EEOSSessionHostMigrationType::HostMigrationSwitchHost", (int64)EEOSSessionHostMigrationType::HostMigrationSwitchHost },
				{ "EEOSSessionHostMigrationType::HostMigrationUpdateSession", (int64)EEOSSessionHostMigrationType::HostMigrationUpdateSession },
				{ "EEOSSessionHostMigrationType::HostMigrationRetry", (int64)EEOSSessionHostMigrationType::HostMigrationRetry },
				{ "EEOSSessionHostMigrationType::HostMigrationErrorRetry", (int64)EEOSSessionHostMigrationType::HostMigrationErrorRetry },
				{ "EEOSSessionHostMigrationType::HostMigrationFromClient", (int64)EEOSSessionHostMigrationType::HostMigrationFromClient },
				{ "EEOSSessionHostMigrationType::HostMigrationFromClientRetry", (int64)EEOSSessionHostMigrationType::HostMigrationFromClientRetry },
				{ "EEOSSessionHostMigrationType::RequestUpdateState", (int64)EEOSSessionHostMigrationType::RequestUpdateState },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DisconnectedHost.Name", "EEOSSessionHostMigrationType::DisconnectedHost" },
				{ "HostMigration.Name", "EEOSSessionHostMigrationType::HostMigration" },
				{ "HostMigrationError.Name", "EEOSSessionHostMigrationType::HostMigrationError" },
				{ "HostMigrationErrorRetry.Name", "EEOSSessionHostMigrationType::HostMigrationErrorRetry" },
				{ "HostMigrationFromClient.Name", "EEOSSessionHostMigrationType::HostMigrationFromClient" },
				{ "HostMigrationFromClientRetry.Name", "EEOSSessionHostMigrationType::HostMigrationFromClientRetry" },
				{ "HostMigrationRetry.Name", "EEOSSessionHostMigrationType::HostMigrationRetry" },
				{ "HostMigrationSwitchHost.Name", "EEOSSessionHostMigrationType::HostMigrationSwitchHost" },
				{ "HostMigrationUpdateSession.Name", "EEOSSessionHostMigrationType::HostMigrationUpdateSession" },
				{ "HostQuitGame.Name", "EEOSSessionHostMigrationType::HostQuitGame" },
				{ "ModuleRelativePath", "Public/EEOSSessionHostMigrationType.h" },
				{ "None.Name", "EEOSSessionHostMigrationType::None" },
				{ "RequestUpdateState.Name", "EEOSSessionHostMigrationType::RequestUpdateState" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSSessionHostMigrationType",
				"EEOSSessionHostMigrationType",
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
