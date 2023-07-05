// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSFriendStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSFriendStatus() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSFriendStatus();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSFriendStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSFriendStatus, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSFriendStatus"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSFriendStatus>()
	{
		return EEOSFriendStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSFriendStatus(EEOSFriendStatus_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSFriendStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSFriendStatus_Hash() { return 3492775060U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSFriendStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSFriendStatus"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSFriendStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSFriendStatus::NotFriends", (int64)EEOSFriendStatus::NotFriends },
				{ "EEOSFriendStatus::InviteSent", (int64)EEOSFriendStatus::InviteSent },
				{ "EEOSFriendStatus::InviteReceived", (int64)EEOSFriendStatus::InviteReceived },
				{ "EEOSFriendStatus::Friends", (int64)EEOSFriendStatus::Friends },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Friends.Name", "EEOSFriendStatus::Friends" },
				{ "InviteReceived.Name", "EEOSFriendStatus::InviteReceived" },
				{ "InviteSent.Name", "EEOSFriendStatus::InviteSent" },
				{ "ModuleRelativePath", "Public/EEOSFriendStatus.h" },
				{ "NotFriends.Name", "EEOSFriendStatus::NotFriends" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSFriendStatus",
				"EEOSFriendStatus",
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
