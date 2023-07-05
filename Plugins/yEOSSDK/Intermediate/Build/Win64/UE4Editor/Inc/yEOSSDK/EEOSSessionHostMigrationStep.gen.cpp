// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSSessionHostMigrationStep.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSSessionHostMigrationStep() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationStep();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSSessionHostMigrationStep_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationStep, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSSessionHostMigrationStep"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionHostMigrationStep>()
	{
		return EEOSSessionHostMigrationStep_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSSessionHostMigrationStep(EEOSSessionHostMigrationStep_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSSessionHostMigrationStep"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationStep_Hash() { return 4284300263U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationStep()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSSessionHostMigrationStep"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationStep_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSSessionHostMigrationStep::None", (int64)EEOSSessionHostMigrationStep::None },
				{ "EEOSSessionHostMigrationStep::BeginMigration", (int64)EEOSSessionHostMigrationStep::BeginMigration },
				{ "EEOSSessionHostMigrationStep::BeforeDestorySession", (int64)EEOSSessionHostMigrationStep::BeforeDestorySession },
				{ "EEOSSessionHostMigrationStep::DestorySession", (int64)EEOSSessionHostMigrationStep::DestorySession },
				{ "EEOSSessionHostMigrationStep::WaitDestorySession", (int64)EEOSSessionHostMigrationStep::WaitDestorySession },
				{ "EEOSSessionHostMigrationStep::BeforeCreateSession", (int64)EEOSSessionHostMigrationStep::BeforeCreateSession },
				{ "EEOSSessionHostMigrationStep::CreateSession", (int64)EEOSSessionHostMigrationStep::CreateSession },
				{ "EEOSSessionHostMigrationStep::WaitCreateSession", (int64)EEOSSessionHostMigrationStep::WaitCreateSession },
				{ "EEOSSessionHostMigrationStep::MigratePlayers", (int64)EEOSSessionHostMigrationStep::MigratePlayers },
				{ "EEOSSessionHostMigrationStep::WaitMigratePlayers", (int64)EEOSSessionHostMigrationStep::WaitMigratePlayers },
				{ "EEOSSessionHostMigrationStep::ExchangeData", (int64)EEOSSessionHostMigrationStep::ExchangeData },
				{ "EEOSSessionHostMigrationStep::WaitExchangeData", (int64)EEOSSessionHostMigrationStep::WaitExchangeData },
				{ "EEOSSessionHostMigrationStep::FixedMigration", (int64)EEOSSessionHostMigrationStep::FixedMigration },
				{ "EEOSSessionHostMigrationStep::Timeout", (int64)EEOSSessionHostMigrationStep::Timeout },
				{ "EEOSSessionHostMigrationStep::Canceled", (int64)EEOSSessionHostMigrationStep::Canceled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BeforeCreateSession.Name", "EEOSSessionHostMigrationStep::BeforeCreateSession" },
				{ "BeforeDestorySession.Name", "EEOSSessionHostMigrationStep::BeforeDestorySession" },
				{ "BeginMigration.Name", "EEOSSessionHostMigrationStep::BeginMigration" },
				{ "BlueprintType", "true" },
				{ "Canceled.Name", "EEOSSessionHostMigrationStep::Canceled" },
				{ "CreateSession.Name", "EEOSSessionHostMigrationStep::CreateSession" },
				{ "DestorySession.Name", "EEOSSessionHostMigrationStep::DestorySession" },
				{ "ExchangeData.Name", "EEOSSessionHostMigrationStep::ExchangeData" },
				{ "FixedMigration.Name", "EEOSSessionHostMigrationStep::FixedMigration" },
				{ "MigratePlayers.Name", "EEOSSessionHostMigrationStep::MigratePlayers" },
				{ "ModuleRelativePath", "Public/EEOSSessionHostMigrationStep.h" },
				{ "None.Name", "EEOSSessionHostMigrationStep::None" },
				{ "Timeout.Name", "EEOSSessionHostMigrationStep::Timeout" },
				{ "WaitCreateSession.Name", "EEOSSessionHostMigrationStep::WaitCreateSession" },
				{ "WaitDestorySession.Name", "EEOSSessionHostMigrationStep::WaitDestorySession" },
				{ "WaitExchangeData.Name", "EEOSSessionHostMigrationStep::WaitExchangeData" },
				{ "WaitMigratePlayers.Name", "EEOSSessionHostMigrationStep::WaitMigratePlayers" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSSessionHostMigrationStep",
				"EEOSSessionHostMigrationStep",
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
