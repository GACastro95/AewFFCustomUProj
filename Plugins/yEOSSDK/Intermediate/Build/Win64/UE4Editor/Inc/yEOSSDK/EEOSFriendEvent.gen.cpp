// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSFriendEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSFriendEvent() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSFriendEvent();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSFriendEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSFriendEvent, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSFriendEvent"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSFriendEvent>()
	{
		return EEOSFriendEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSFriendEvent(EEOSFriendEvent_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSFriendEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSFriendEvent_Hash() { return 292723684U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSFriendEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSFriendEvent"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSFriendEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSFriendEvent::FriendInfo", (int64)EEOSFriendEvent::FriendInfo },
				{ "EEOSFriendEvent::FriendInfo_Empty", (int64)EEOSFriendEvent::FriendInfo_Empty },
				{ "EEOSFriendEvent::FriendStatus", (int64)EEOSFriendEvent::FriendStatus },
				{ "EEOSFriendEvent::FriendGetInfo", (int64)EEOSFriendEvent::FriendGetInfo },
				{ "EEOSFriendEvent::FriendUpdatePUID", (int64)EEOSFriendEvent::FriendUpdatePUID },
				{ "EEOSFriendEvent::FriendInfo_Failed", (int64)EEOSFriendEvent::FriendInfo_Failed },
				{ "EEOSFriendEvent::FriendUpdateExternalAccount", (int64)EEOSFriendEvent::FriendUpdateExternalAccount },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FriendGetInfo.Name", "EEOSFriendEvent::FriendGetInfo" },
				{ "FriendInfo.Name", "EEOSFriendEvent::FriendInfo" },
				{ "FriendInfo_Empty.Name", "EEOSFriendEvent::FriendInfo_Empty" },
				{ "FriendInfo_Failed.Name", "EEOSFriendEvent::FriendInfo_Failed" },
				{ "FriendStatus.Name", "EEOSFriendEvent::FriendStatus" },
				{ "FriendUpdateExternalAccount.Name", "EEOSFriendEvent::FriendUpdateExternalAccount" },
				{ "FriendUpdatePUID.Name", "EEOSFriendEvent::FriendUpdatePUID" },
				{ "ModuleRelativePath", "Public/EEOSFriendEvent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSFriendEvent",
				"EEOSFriendEvent",
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
