// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSSessionPacketTypeBP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSSessionPacketTypeBP() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketTypeBP();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSSessionPacketTypeBP_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketTypeBP, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSSessionPacketTypeBP"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionPacketTypeBP>()
	{
		return EEOSSessionPacketTypeBP_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSSessionPacketTypeBP(EEOSSessionPacketTypeBP_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSSessionPacketTypeBP"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketTypeBP_Hash() { return 3029025324U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketTypeBP()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSSessionPacketTypeBP"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketTypeBP_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSSessionPacketTypeBP::Sys_General", (int64)EEOSSessionPacketTypeBP::Sys_General },
				{ "EEOSSessionPacketTypeBP::Sys_SessionEvent", (int64)EEOSSessionPacketTypeBP::Sys_SessionEvent },
				{ "EEOSSessionPacketTypeBP::Sys_Connection", (int64)EEOSSessionPacketTypeBP::Sys_Connection },
				{ "EEOSSessionPacketTypeBP::Sys_LatencyCheck", (int64)EEOSSessionPacketTypeBP::Sys_LatencyCheck },
				{ "EEOSSessionPacketTypeBP::Sys_LatencyInfo", (int64)EEOSSessionPacketTypeBP::Sys_LatencyInfo },
				{ "EEOSSessionPacketTypeBP::Sys_GameClock", (int64)EEOSSessionPacketTypeBP::Sys_GameClock },
				{ "EEOSSessionPacketTypeBP::Sys_AFMemberInfo", (int64)EEOSSessionPacketTypeBP::Sys_AFMemberInfo },
				{ "EEOSSessionPacketTypeBP::Sys_AFHostMigration", (int64)EEOSSessionPacketTypeBP::Sys_AFHostMigration },
				{ "EEOSSessionPacketTypeBP::Sys_AFGameFlow", (int64)EEOSSessionPacketTypeBP::Sys_AFGameFlow },
				{ "EEOSSessionPacketTypeBP::App_GameEvent", (int64)EEOSSessionPacketTypeBP::App_GameEvent },
				{ "EEOSSessionPacketTypeBP::Unique_PlayerDataForSetup", (int64)EEOSSessionPacketTypeBP::Unique_PlayerDataForSetup },
				{ "EEOSSessionPacketTypeBP::Sample_ObjectParam", (int64)EEOSSessionPacketTypeBP::Sample_ObjectParam },
				{ "EEOSSessionPacketTypeBP::Sample_ShootingGameControl", (int64)EEOSSessionPacketTypeBP::Sample_ShootingGameControl },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "App_GameEvent.Name", "EEOSSessionPacketTypeBP::App_GameEvent" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EEOSSessionPacketTypeBP.h" },
				{ "Sample_ObjectParam.Name", "EEOSSessionPacketTypeBP::Sample_ObjectParam" },
				{ "Sample_ShootingGameControl.Name", "EEOSSessionPacketTypeBP::Sample_ShootingGameControl" },
				{ "Sys_AFGameFlow.Name", "EEOSSessionPacketTypeBP::Sys_AFGameFlow" },
				{ "Sys_AFHostMigration.Name", "EEOSSessionPacketTypeBP::Sys_AFHostMigration" },
				{ "Sys_AFMemberInfo.Name", "EEOSSessionPacketTypeBP::Sys_AFMemberInfo" },
				{ "Sys_Connection.Name", "EEOSSessionPacketTypeBP::Sys_Connection" },
				{ "Sys_GameClock.Name", "EEOSSessionPacketTypeBP::Sys_GameClock" },
				{ "Sys_General.Name", "EEOSSessionPacketTypeBP::Sys_General" },
				{ "Sys_LatencyCheck.Name", "EEOSSessionPacketTypeBP::Sys_LatencyCheck" },
				{ "Sys_LatencyInfo.Name", "EEOSSessionPacketTypeBP::Sys_LatencyInfo" },
				{ "Sys_SessionEvent.Name", "EEOSSessionPacketTypeBP::Sys_SessionEvent" },
				{ "Unique_PlayerDataForSetup.Name", "EEOSSessionPacketTypeBP::Unique_PlayerDataForSetup" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSSessionPacketTypeBP",
				"EEOSSessionPacketTypeBP",
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
