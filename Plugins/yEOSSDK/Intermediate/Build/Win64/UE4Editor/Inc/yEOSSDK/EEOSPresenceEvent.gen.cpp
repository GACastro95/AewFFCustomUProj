// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSPresenceEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSPresenceEvent() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSPresenceEvent();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSPresenceEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSPresenceEvent, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSPresenceEvent"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSPresenceEvent>()
	{
		return EEOSPresenceEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSPresenceEvent(EEOSPresenceEvent_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSPresenceEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSPresenceEvent_Hash() { return 1024808193U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSPresenceEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSPresenceEvent"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSPresenceEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSPresenceEvent::PresenceSet", (int64)EEOSPresenceEvent::PresenceSet },
				{ "EEOSPresenceEvent::PresenceSetErr", (int64)EEOSPresenceEvent::PresenceSetErr },
				{ "EEOSPresenceEvent::PresenceGet", (int64)EEOSPresenceEvent::PresenceGet },
				{ "EEOSPresenceEvent::PresenceGetErr", (int64)EEOSPresenceEvent::PresenceGetErr },
				{ "EEOSPresenceEvent::PresenceChanged", (int64)EEOSPresenceEvent::PresenceChanged },
				{ "EEOSPresenceEvent::FriendPresenceGet", (int64)EEOSPresenceEvent::FriendPresenceGet },
				{ "EEOSPresenceEvent::FriendPresenceGetErr", (int64)EEOSPresenceEvent::FriendPresenceGetErr },
				{ "EEOSPresenceEvent::FriendPresenceChanged", (int64)EEOSPresenceEvent::FriendPresenceChanged },
				{ "EEOSPresenceEvent::JoinGameAccepted", (int64)EEOSPresenceEvent::JoinGameAccepted },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FriendPresenceChanged.Name", "EEOSPresenceEvent::FriendPresenceChanged" },
				{ "FriendPresenceGet.Name", "EEOSPresenceEvent::FriendPresenceGet" },
				{ "FriendPresenceGetErr.Name", "EEOSPresenceEvent::FriendPresenceGetErr" },
				{ "JoinGameAccepted.Name", "EEOSPresenceEvent::JoinGameAccepted" },
				{ "ModuleRelativePath", "Public/EEOSPresenceEvent.h" },
				{ "PresenceChanged.Name", "EEOSPresenceEvent::PresenceChanged" },
				{ "PresenceGet.Name", "EEOSPresenceEvent::PresenceGet" },
				{ "PresenceGetErr.Name", "EEOSPresenceEvent::PresenceGetErr" },
				{ "PresenceSet.Name", "EEOSPresenceEvent::PresenceSet" },
				{ "PresenceSetErr.Name", "EEOSPresenceEvent::PresenceSetErr" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSPresenceEvent",
				"EEOSPresenceEvent",
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
