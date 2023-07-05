// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSAchievementEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSAchievementEvent() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAchievementEvent();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSAchievementEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSAchievementEvent, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSAchievementEvent"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSAchievementEvent>()
	{
		return EEOSAchievementEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSAchievementEvent(EEOSAchievementEvent_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSAchievementEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSAchievementEvent_Hash() { return 46881303U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAchievementEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSAchievementEvent"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSAchievementEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSAchievementEvent::Unlocked", (int64)EEOSAchievementEvent::Unlocked },
				{ "EEOSAchievementEvent::QueryDefinitions", (int64)EEOSAchievementEvent::QueryDefinitions },
				{ "EEOSAchievementEvent::QueryDefinitionsErr", (int64)EEOSAchievementEvent::QueryDefinitionsErr },
				{ "EEOSAchievementEvent::QueryPlayer", (int64)EEOSAchievementEvent::QueryPlayer },
				{ "EEOSAchievementEvent::QueryPlayerErr", (int64)EEOSAchievementEvent::QueryPlayerErr },
				{ "EEOSAchievementEvent::Unlock", (int64)EEOSAchievementEvent::Unlock },
				{ "EEOSAchievementEvent::UnlockErr", (int64)EEOSAchievementEvent::UnlockErr },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EEOSAchievementEvent.h" },
				{ "QueryDefinitions.Name", "EEOSAchievementEvent::QueryDefinitions" },
				{ "QueryDefinitionsErr.Name", "EEOSAchievementEvent::QueryDefinitionsErr" },
				{ "QueryPlayer.Name", "EEOSAchievementEvent::QueryPlayer" },
				{ "QueryPlayerErr.Name", "EEOSAchievementEvent::QueryPlayerErr" },
				{ "Unlock.Name", "EEOSAchievementEvent::Unlock" },
				{ "Unlocked.Name", "EEOSAchievementEvent::Unlocked" },
				{ "UnlockErr.Name", "EEOSAchievementEvent::UnlockErr" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSAchievementEvent",
				"EEOSAchievementEvent",
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
