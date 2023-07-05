// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSSessionPacketSyncState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSSessionPacketSyncState() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketSyncState();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSSessionPacketSyncState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketSyncState, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSSessionPacketSyncState"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionPacketSyncState>()
	{
		return EEOSSessionPacketSyncState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSSessionPacketSyncState(EEOSSessionPacketSyncState_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSSessionPacketSyncState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketSyncState_Hash() { return 3318216904U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketSyncState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSSessionPacketSyncState"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketSyncState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSSessionPacketSyncState::None", (int64)EEOSSessionPacketSyncState::None },
				{ "EEOSSessionPacketSyncState::Update", (int64)EEOSSessionPacketSyncState::Update },
				{ "EEOSSessionPacketSyncState::Compare", (int64)EEOSSessionPacketSyncState::Compare },
				{ "EEOSSessionPacketSyncState::Compare_Synchronized", (int64)EEOSSessionPacketSyncState::Compare_Synchronized },
				{ "EEOSSessionPacketSyncState::Retry", (int64)EEOSSessionPacketSyncState::Retry },
				{ "EEOSSessionPacketSyncState::Synchronized", (int64)EEOSSessionPacketSyncState::Synchronized },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Compare.Name", "EEOSSessionPacketSyncState::Compare" },
				{ "Compare_Synchronized.Name", "EEOSSessionPacketSyncState::Compare_Synchronized" },
				{ "ModuleRelativePath", "Public/EEOSSessionPacketSyncState.h" },
				{ "None.Name", "EEOSSessionPacketSyncState::None" },
				{ "Retry.Name", "EEOSSessionPacketSyncState::Retry" },
				{ "Synchronized.Name", "EEOSSessionPacketSyncState::Synchronized" },
				{ "Update.Name", "EEOSSessionPacketSyncState::Update" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSSessionPacketSyncState",
				"EEOSSessionPacketSyncState",
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
