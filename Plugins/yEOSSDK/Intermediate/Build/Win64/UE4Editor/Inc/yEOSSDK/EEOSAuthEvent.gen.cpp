// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSAuthEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSAuthEvent() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAuthEvent();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSAuthEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSAuthEvent, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSAuthEvent"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSAuthEvent>()
	{
		return EEOSAuthEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSAuthEvent(EEOSAuthEvent_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSAuthEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSAuthEvent_Hash() { return 2078715370U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAuthEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSAuthEvent"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSAuthEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSAuthEvent::Logedin", (int64)EEOSAuthEvent::Logedin },
				{ "EEOSAuthEvent::LogedinFailed", (int64)EEOSAuthEvent::LogedinFailed },
				{ "EEOSAuthEvent::LogedinConfirm", (int64)EEOSAuthEvent::LogedinConfirm },
				{ "EEOSAuthEvent::Logedout", (int64)EEOSAuthEvent::Logedout },
				{ "EEOSAuthEvent::Connected", (int64)EEOSAuthEvent::Connected },
				{ "EEOSAuthEvent::ConnectedAndCreated", (int64)EEOSAuthEvent::ConnectedAndCreated },
				{ "EEOSAuthEvent::ConnectFailed", (int64)EEOSAuthEvent::ConnectFailed },
				{ "EEOSAuthEvent::InvalidLinkedUser", (int64)EEOSAuthEvent::InvalidLinkedUser },
				{ "EEOSAuthEvent::LinkedAccount", (int64)EEOSAuthEvent::LinkedAccount },
				{ "EEOSAuthEvent::InvalidUser", (int64)EEOSAuthEvent::InvalidUser },
				{ "EEOSAuthEvent::Expired", (int64)EEOSAuthEvent::Expired },
				{ "EEOSAuthEvent::InvalidAuth", (int64)EEOSAuthEvent::InvalidAuth },
				{ "EEOSAuthEvent::ConnectLinkAccount", (int64)EEOSAuthEvent::ConnectLinkAccount },
				{ "EEOSAuthEvent::ConnectLinkAccountFailed", (int64)EEOSAuthEvent::ConnectLinkAccountFailed },
				{ "EEOSAuthEvent::ConnectUnlinkAccount", (int64)EEOSAuthEvent::ConnectUnlinkAccount },
				{ "EEOSAuthEvent::ConnectUnlinkAccountFailed", (int64)EEOSAuthEvent::ConnectUnlinkAccountFailed },
				{ "EEOSAuthEvent::ExternalConnected", (int64)EEOSAuthEvent::ExternalConnected },
				{ "EEOSAuthEvent::ExternalConnectFailed", (int64)EEOSAuthEvent::ExternalConnectFailed },
				{ "EEOSAuthEvent::InvalidExternalUser", (int64)EEOSAuthEvent::InvalidExternalUser },
				{ "EEOSAuthEvent::LinkedAccountFailed", (int64)EEOSAuthEvent::LinkedAccountFailed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Connected.Name", "EEOSAuthEvent::Connected" },
				{ "ConnectedAndCreated.Name", "EEOSAuthEvent::ConnectedAndCreated" },
				{ "ConnectFailed.Name", "EEOSAuthEvent::ConnectFailed" },
				{ "ConnectLinkAccount.Name", "EEOSAuthEvent::ConnectLinkAccount" },
				{ "ConnectLinkAccountFailed.Name", "EEOSAuthEvent::ConnectLinkAccountFailed" },
				{ "ConnectUnlinkAccount.Name", "EEOSAuthEvent::ConnectUnlinkAccount" },
				{ "ConnectUnlinkAccountFailed.Name", "EEOSAuthEvent::ConnectUnlinkAccountFailed" },
				{ "Expired.Name", "EEOSAuthEvent::Expired" },
				{ "ExternalConnected.Name", "EEOSAuthEvent::ExternalConnected" },
				{ "ExternalConnectFailed.Name", "EEOSAuthEvent::ExternalConnectFailed" },
				{ "InvalidAuth.Name", "EEOSAuthEvent::InvalidAuth" },
				{ "InvalidExternalUser.Name", "EEOSAuthEvent::InvalidExternalUser" },
				{ "InvalidLinkedUser.Name", "EEOSAuthEvent::InvalidLinkedUser" },
				{ "InvalidUser.Name", "EEOSAuthEvent::InvalidUser" },
				{ "LinkedAccount.Name", "EEOSAuthEvent::LinkedAccount" },
				{ "LinkedAccountFailed.Name", "EEOSAuthEvent::LinkedAccountFailed" },
				{ "Logedin.Name", "EEOSAuthEvent::Logedin" },
				{ "LogedinConfirm.Name", "EEOSAuthEvent::LogedinConfirm" },
				{ "LogedinFailed.Name", "EEOSAuthEvent::LogedinFailed" },
				{ "Logedout.Name", "EEOSAuthEvent::Logedout" },
				{ "ModuleRelativePath", "Public/EEOSAuthEvent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSAuthEvent",
				"EEOSAuthEvent",
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
