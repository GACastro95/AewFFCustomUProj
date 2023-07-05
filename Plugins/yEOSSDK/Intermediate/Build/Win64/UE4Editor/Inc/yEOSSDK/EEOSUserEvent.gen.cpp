// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSUserEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSUserEvent() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSUserEvent();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSUserEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSUserEvent, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSUserEvent"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSUserEvent>()
	{
		return EEOSUserEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSUserEvent(EEOSUserEvent_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSUserEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSUserEvent_Hash() { return 850235756U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSUserEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSUserEvent"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSUserEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSUserEvent::UserInfo", (int64)EEOSUserEvent::UserInfo },
				{ "EEOSUserEvent::UserInfoErr", (int64)EEOSUserEvent::UserInfoErr },
				{ "EEOSUserEvent::FriendUserInfo", (int64)EEOSUserEvent::FriendUserInfo },
				{ "EEOSUserEvent::FriendUserInfoErr", (int64)EEOSUserEvent::FriendUserInfoErr },
				{ "EEOSUserEvent::LoggedOutUser", (int64)EEOSUserEvent::LoggedOutUser },
				{ "EEOSUserEvent::UpdatedAuthState", (int64)EEOSUserEvent::UpdatedAuthState },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FriendUserInfo.Name", "EEOSUserEvent::FriendUserInfo" },
				{ "FriendUserInfoErr.Name", "EEOSUserEvent::FriendUserInfoErr" },
				{ "LoggedOutUser.Name", "EEOSUserEvent::LoggedOutUser" },
				{ "ModuleRelativePath", "Public/EEOSUserEvent.h" },
				{ "UpdatedAuthState.Name", "EEOSUserEvent::UpdatedAuthState" },
				{ "UserInfo.Name", "EEOSUserEvent::UserInfo" },
				{ "UserInfoErr.Name", "EEOSUserEvent::UserInfoErr" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSUserEvent",
				"EEOSUserEvent",
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
